#include "sportwindow.h"
#include "ui_sportwindow.h"
#include "ui/applicationwindow.h"
#include "userLib/userLib_ui.h"
#include <QSerialPortInfo>
#include <QSerialPort>
#include <QDebug>
#include <QThread>
#include <QListWidgetItem>

SportWindow::SportWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SportWindow)
{
    ui->setupUi(this);

    //实例化线程对象
    this->equipmentSearch = new equipmentConnection::EquipmentSearch;

    serialPort = new QSerialPort;

    QStringList serialPortName;
    for (const QSerialPortInfo &info : QSerialPortInfo::availablePorts())
    {
        // 导入列表
        serialPortName << info.portName();
    }
    serialPort->setPortName(serialPortName[0]);
    serialPort->setBaudRate(QSerialPort::Baud115200);
    serialPort->setDataBits(QSerialPort::Data8);
    serialPort->setParity(QSerialPort::NoParity);
    serialPort->setStopBits(QSerialPort::OneStop);

    connect(serialPort, &QSerialPort::readyRead, this, &SportWindow::read_Data);

    if (serialPort->open(QIODevice::ReadWrite))
    {
        qDebug() << "open " << serialPortName[0] << " successful";
        
    }

    //进入页面自动连接设备
    connectEquipment();
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

void SportWindow::read_Data()
{
    qDebug() << "receive data";
    QByteArray receiveBuf = serialPort->readAll();
    
    qDebug() << "data is" << receiveBuf.toHex();
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
                this->receiveData.GSR = (receiveBuf[1] << 8) + receiveBuf[2];
                this->receiveData.accelX = (receiveBuf[3] << 8) + receiveBuf[4];
                this->receiveData.accelY = (receiveBuf[5] << 8) + receiveBuf[6];
                this->receiveData.accelZ = (receiveBuf[7] << 8) + receiveBuf[8];
                this->receiveData.angularVelocityX = (receiveBuf[9] << 8) + receiveBuf[10];
                this->receiveData.angularVelocityY = (receiveBuf[11] << 8) + receiveBuf[12];
                this->receiveData.angularVelocityZ = (receiveBuf[13] << 8) + receiveBuf[14];
                this->receiveData.heartRate = receiveBuf[15];
                this->receiveData.bloodOxygen = receiveBuf[16];

                qDebug() << "receive pack GSR is" << this->receiveData.GSR;
                qDebug() << "receive pack accelX is" << this->receiveData.accelX;
                qDebug() << "receive pack accelY is" << this->receiveData.accelY;
                qDebug() << "receive pack accelZ is" << this->receiveData.accelZ;
                qDebug() << "receive pack angularVelocityX is" << this->receiveData.angularVelocityX;
                qDebug() << "receive pack angularVelocityY is" << this->receiveData.angularVelocityY;
                qDebug() << "receive pack angularVelocityZ is" << this->receiveData.angularVelocityZ;
                qDebug() << "receive pack heartRata is" << this->receiveData.heartRate;
                qDebug() << "receive pack bloodOxygen is" << this->receiveData.bloodOxygen;
                ui->bloodOxygenDataLabel->setNum(this->receiveData.bloodOxygen);
                ui->heartRateDataLabel->setNum(this->receiveData.heartRate);
            }
        }
    }
}

SportWindow::~SportWindow()
{

    delete ui;
}

void SportWindow::on_returnBefore_clicked()
{
    //析构线程对象
    delete this->equipmentSearch;

    CREATE_NEW_WINDOW(ApplicationWindow, this);
}

void SportWindow::on_searchPushButton_clicked()
{
    connectEquipment();
}

/**
 * @brief 开启线程连接设备函数
 */
void SportWindow::connectEquipment()
{
    ui->equipmentStatusLabel->setText("正在搜索设备中");
    //判断线程对象是否为空

    if (this->equipmentSearch == nullptr)
    {
        return;
    }
    //开启设备连接线程
    this->equipmentSearch->start();

    //接收发送可用设备列表
    QObject::connect(this->equipmentSearch, &equipmentConnection::EquipmentSearch::sendMontoringEquipmentList, this, [=](QStringList availableList)
    {
        if (!availableList.empty())
        {
            ui->equipmentStatusLabel->setText("发现设备，正在连接设备");
        }
        else
        {
            ui->equipmentStatusLabel->setText("没有发现设备");
        }
    });



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

