#include "sportwindow.h"
#include "ui_sportwindow.h"
#include "ui/applicationwindow.h"
#include "userLib/userLib_ui.h"
#include <QSerialPortInfo>
#include <QSerialPort>
#include <QDebug>
#include <QListWidgetItem>

SportWindow::SportWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SportWindow)
{
    ui->setupUi(this);

    //实例化监测设备服务
    this->montorSerialService = new SerialPortService;
    //将监测设备服务转移到监测设备线程
    this->montorSerialService->moveToThread(&this->montorThread);
    //启动线程
    this->montorThread.start();
    //显示设备连接状态为未连接
    this->setEquipmentStatus(UNCONNECT);
    //线程退出时自动删除对象
    QObject::connect(&this->montorThread, &QThread::finished, this->montorSerialService, &QObject::deleteLater);
    
    //自动连接设备
    this->connectEquipment();

}

void SportWindow::connectEquipment()
{
    QStringList SerialPortList;
    SerialPortList = this->montorSerialService->getAvailableSerialPort();
    for (QStringList::iterator it = SerialPortList.begin(); it != SerialPortList.end(); it++)
    {
        //初始化串口设备服务
        if (this->montorSerialService->initSerialPort(*it, QSerialPort::Baud115200, QSerialPort::Data8, QSerialPort::NoParity, QSerialPort::OneStop, QIODevice::ReadWrite))
        {
            qDebug() << "serial port open successful";
            //连接信号和槽
            QObject::connect(this->montorSerialService, SIGNAL(updateSerialData(QByteArray)), this, SLOT(montorReceive(QByteArray)));
        }
        
    } 
}
uint8_t checkPack(uint8_t *receiveData)
{
    uint8_t checkSum = 0;
    //除去头尾其他数据相将加
    for (int i = 1; i < 17; i++)
    {
        checkSum += receiveData[i];
    }
    return checkSum;

}

/**
 * @brief 显示接收到的监测设备数据
 * 
 */
void SportWindow::showMontorReceiveData()
{
    qDebug() << "receive pack GSR is" << this->montorReceiveData.GSR;
    qDebug() << "receive pack accelX is" << this->montorReceiveData.accelX;
    qDebug() << "receive pack accelY is" << this->montorReceiveData.accelY;
    qDebug() << "receive pack accelZ is" << this->montorReceiveData.accelZ;
    qDebug() << "receive pack angularVelocityX is" << this->montorReceiveData.angularVelocityX;
    qDebug() << "receive pack angularVelocityY is" << this->montorReceiveData.angularVelocityY;
    qDebug() << "receive pack angularVelocityZ is" << this->montorReceiveData.angularVelocityZ;
    qDebug() << "receive pack heartRata is" << this->montorReceiveData.heartRate;
    qDebug() << "receive pack bloodOxygen is" << this->montorReceiveData.bloodOxygen;
}

void SportWindow::montorReceive(QByteArray data)
{
    QByteArray receiveBuf = data;

    if (!receiveBuf.isEmpty())
    {
        uint8_t data = receiveBuf[18];
        if (data == 0xAF)
        {
            uint8_t checkSum = 0;
            for (int i = 1; i < 17; i++)
            {
                checkSum += receiveBuf[i];
            }

            if (checkSum == receiveBuf[17])
            {

                qDebug() << "receive montoring equipment data";
                this->montorReceiveData.GSR = (receiveBuf[1] << 8) + receiveBuf[2];
                this->montorReceiveData.accelX = (receiveBuf[3] << 8) + receiveBuf[4];
                this->montorReceiveData.accelY = (receiveBuf[5] << 8) + receiveBuf[6];
                this->montorReceiveData.accelZ = (receiveBuf[7] << 8) + receiveBuf[8];
                this->montorReceiveData.angularVelocityX = (receiveBuf[9] << 8) + receiveBuf[10];
                this->montorReceiveData.angularVelocityY = (receiveBuf[11] << 8) + receiveBuf[12];
                this->montorReceiveData.angularVelocityZ = (receiveBuf[13] << 8) + receiveBuf[14];
                this->montorReceiveData.heartRate = receiveBuf[15];
                this->montorReceiveData.bloodOxygen = receiveBuf[16];
                
                ui->bloodOxygenDataLabel->setNum(this->montorReceiveData.bloodOxygen);
                ui->heartRateDataLabel->setNum(this->montorReceiveData.heartRate);

            }
        }
    }
 }

SportWindow::~SportWindow()
{
    montorThread.quit();
    montorThread.wait();
    delete ui;
}

void SportWindow::on_returnBefore_clicked()
{

    CREATE_NEW_WINDOW(ApplicationWindow, this);
}

void SportWindow::on_searchPushButton_clicked()
{

}


/**
 * @brief 添加设备标签
 * 
 * @param type 设备类型
 * @return 设备标签地址 
 */
QListWidgetItem *SportWindow::addEquipmentItem(equipmentItemCard::equipmentType type)
{
    EquipmentItem *equipmentItem = new EquipmentItem(type);
    QListWidgetItem *item = new QListWidgetItem;
    ui->equipmentListWidget->addItem(item);
    ui->equipmentListWidget->setItemWidget(item, equipmentItem);
    return item;
}

/**
 * @brief 删除设备标签
 * 
 * @param it 设备标签地址
 */
void SportWindow::removeEquipmentItem(QListWidgetItem* it)
{
    ui->equipmentListWidget->removeItemWidget(it);
    delete it;
    it = nullptr;
}

/**
 * @brief 设置心率数值
 * 
 * @param num 心率数值
 */
void SportWindow::setHeartRateData(double num)
{
    if (num >= 0)
    {
        ui->heartRateDataLabel->setNum(num);
        //设置为白色
        QPalette pe;
        pe.setColor(QPalette::WindowText, Qt::white);
        ui->heartRateDataLabel->setPalette(pe);
    }
}

/**
 * @brief 设置血氧数值 
 * 
 * @param num 血氧数值
 */
void SportWindow::setBooldOxygenData(double num)
{
    if (num >= 0 && num <= 100)
    {
        ui->bloodOxygenDataLabel->setNum(num);
        //设置为白色
        QPalette pe;
        pe.setColor(QPalette::WindowText, Qt::white);
        ui->bloodOxygenDataLabel->setPalette(pe);
    }
}

/**
 * @brief 设置设备状态
 * 
 * @param status 
 */
void SportWindow::setEquipmentStatus(equipmentConnectStatus_e status)
{
    QPalette pe;
    switch (status)
    {
    case UNCONNECT:
        ui->equipmentStatusLabel->setText("设备未连接");
        pe.setColor(QPalette::WindowText, Qt::red);
        break;
    case CONNECT:
        ui->equipmentStatusLabel->setText("设备已连接");
        pe.setColor(QPalette::WindowText, Qt::green);
        break;
    case SEARCH_EQUIPMENT:
        ui->equipmentStatusLabel->setText("正在搜索设备");
        pe.setColor(QPalette::WindowText, Qt::white);
        break;
    }
    ui->equipmentStatusLabel->setPalette(pe);
}

