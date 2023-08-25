#include "equipmentconnect.h"
#include "ui_equipmentconnect.h"
#include <QDebug>
#include <QThread>
#include <QTime>
#include "ui/sportwindow.h"
#include "ui/sportwindow.h"
#include "ui/healthmanagerwindow.h"
#include <QSerialPortInfo>
#include <QMetaType>

EquipmentConnect::EquipmentConnect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EquipmentConnect)
{
    ui->setupUi(this);
    qRegisterMetaType<UnitreeReceive>("UnitreeReceive");
    // 实例化监测设备服务
    this->montorSerialService = new SerialPortService;
    //实例化设备校验定时
    this->equipmentCheckTim = new QTimer;
    //实例化设备连接校验定时
    this->equipmentCheckConnectTim = new QTimer;
    //实例化健身设备对象
    this->fitnessEquipmentServiceThread = new UnitreeMotorThread("/dev/Unitree-A1");
    //电机数据与该界面链接
    QObject::connect(this->fitnessEquipmentServiceThread, SIGNAL(sendUnitreeMotorDataToEquipmentConnectWindow(UnitreeReceive)), this, SLOT(UnitreeMotorReceive(UnitreeReceive)));
    //开启设备连接线程
    this->fitnessEquipmentServiceThread->start();
    //添加设备卡
    this->addEquipmentItem(equipmentItemCard::FITNESS);
    //将监测设备服务转移到监测设备线程
    this->montorSerialService->moveToThread(&this->montorThread);
    //启动线程
    this->montorThread.start();
    //线程退出时自动删除对象
    QObject::connect(&this->montorThread, &QThread::finished, this->montorSerialService, &QObject::deleteLater);
    this->serialPortList = this->getAvailableSerialPort();
    qDebug() << this->serialPortList;
    if (!this->serialPortList.isEmpty())
    {
        // 自动连接设备
        this->connectEquipment();
    }   
}

QStringList EquipmentConnect::getAvailableSerialPort()
{
    QStringList mPortsList;

    for (const QSerialPortInfo &info : QSerialPortInfo::availablePorts())
    {
        mPortsList << info.portName();
    }
    return mPortsList;
}

EquipmentConnect::~EquipmentConnect()
{
    qDebug() << QTime::currentTime() << "destruct equipment connect";
    montorThread.quit();
    montorThread.wait();

    delete this->fitnessEquipmentServiceThread;
    delete this->equipmentCheckTim;
    delete this->equipmentCheckConnectTim;
    delete this->montoringEquipmentItem;
    delete ui;
}

void EquipmentConnect::connectEquipment()
{
    //检测设备连接
    if (this->montorSerialService->initSerialPort("GSR", QSerialPort::Baud115200, QSerialPort::Data8, QSerialPort::NoParity, QSerialPort::OneStop, QIODevice::ReadOnly))
    {
        qDebug() << QTime::currentTime() << "serial port open successful";
        // 清空数据
        this->montorReceiveData.clear();
        // 连接信号和槽
        QObject::connect(this->montorSerialService, SIGNAL(updateSerialData(QByteArray)), this, SLOT(montorReceive(QByteArray)));
        // 添加设备
        this->montoringEquipmentItem = this->addEquipmentItem(equipmentItemCard::MONITORING);
        this->setEquipmentStatus(CONNECT);
        // 设备检测
        connect(this->equipmentCheckConnectTim, &QTimer::timeout, this, &EquipmentConnect::checkEquipmentConnect);
        this->equipmentCheckConnectTim->start(CHECK_CONNECT_TIME);
    }
}

void EquipmentConnect::montorReceive(QByteArray data)
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
                // qDebug() << "receive montoring equipment data";
                this->montorReceiveData.GSR = ((receiveBuf[1] << 8) + receiveBuf[2]);
                this->montorReceiveData.accelX = (receiveBuf[3] << 8) + receiveBuf[4];
                this->montorReceiveData.accelY = (receiveBuf[5] << 8) + receiveBuf[6];
                this->montorReceiveData.accelZ = (receiveBuf[7] << 8) + receiveBuf[8];
                this->montorReceiveData.angularVelocityX = (receiveBuf[9] << 8) + receiveBuf[10];
                this->montorReceiveData.angularVelocityY = (receiveBuf[11] << 8) + receiveBuf[12];
                this->montorReceiveData.angularVelocityZ = (receiveBuf[13] << 8) + receiveBuf[14];
                this->montorReceiveData.heartRate = receiveBuf[15];
                this->montorReceiveData.bloodOxygen = receiveBuf[16];
                //标志数据更新
                this->montorReceiveData.update = true;

                emit sendMontorDataToSportWindow(this->montorReceiveData);
                emit sendMontorDataToHealthManagerWindow(this->montorReceiveData);
                // this->showMontorReceiveData();
            }
        }
    }
}

void EquipmentConnect::UnitreeMotorReceive(UnitreeReceive data)
{
    // qDebug() << QTime::currentTime() << "receive UNITREE";
    this->unitreeReceive.assign(data);
    emit this->sendUnitreeMotorDataToSportWindow(this->unitreeReceive);
}

bool EquipmentConnect::connectFitnessEquipment(QString serialPort)
{
    if (this->fitnessEquipmentServiceThread == nullptr)
    {
        this->fitnessEquipmentServiceThread = new UnitreeMotorThread("/dev/" + serialPort);
        this->fitnessEquipmentServiceThread->start();
        this->addEquipmentItem(equipmentItemCard::FITNESS);
        return true;
    }
    return false; 
}
void EquipmentConnect::checkEquipmentConnect()
{
    if (!this->montorReceiveData.isUpdate())
    {
        //没有更新
        qDebug() << QTime::currentTime() << "no receive montoring equipment data, ready close equipment, time is" << CHECK_CONNECT_TIME;
        //清除卡片
        if (this->montoringEquipmentItem != nullptr)
        {
            this->removeEquipmentItem(this->montoringEquipmentItem);
        }
        this->equipmentCheckConnectTim->stop();
        disconnect(this->equipmentCheckConnectTim, &QTimer::timeout, this, &EquipmentConnect::checkEquipmentConnect);
        this->setEquipmentStatus(UNCONNECT);
        this->montorSerialService->closeSerial();
    }
}
/**
 * @brief 显示接收到的监测设备数据
 * 
 */
void EquipmentConnect::showMontorReceiveData()
{
    qDebug() << QTime::currentTime() << "receive pack GSR is" << this->montorReceiveData.GSR;
    qDebug() << QTime::currentTime() << "receive pack accelX is" << this->montorReceiveData.accelX;
    qDebug() << QTime::currentTime() << "receive pack accelY is" << this->montorReceiveData.accelY;
    qDebug() << QTime::currentTime() << "receive pack accelZ is" << this->montorReceiveData.accelZ;
    qDebug() << QTime::currentTime() << "receive pack angularVelocityX is" << this->montorReceiveData.angularVelocityX;
    qDebug() << QTime::currentTime() << "receive pack angularVelocityY is" << this->montorReceiveData.angularVelocityY;
    qDebug() << QTime::currentTime() << "receive pack angularVelocityZ is" << this->montorReceiveData.angularVelocityZ;
    qDebug() << QTime::currentTime() << "receive pack heartRata is" << this->montorReceiveData.heartRate;
    qDebug() << QTime::currentTime() << "receive pack bloodOxygen is" << this->montorReceiveData.bloodOxygen;
}
/**
 * @brief 设置设备状态
 * 
 * @param status 
 */
void EquipmentConnect::setEquipmentStatus(equipmentConnectStatus_e status)
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

/**
 * @brief 添加设备标签
 * 
 * @param type 设备类型
 * @return 设备标签地址 
 */
QListWidgetItem *EquipmentConnect::addEquipmentItem(equipmentItemCard::equipmentType type)
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
void EquipmentConnect::removeEquipmentItem(QListWidgetItem* it)
{
    ui->equipmentListWidget->removeItemWidget(it);
    delete it;
    it = nullptr;
}

void EquipmentConnect::on_searchPushButton_clicked()
{
    this->serialPortList = this->montorSerialService->getAvailableSerialPort();
    if (!this->serialPortList.isEmpty())
    {
        // 自动连接设备
        this->connectEquipment();
    }
}
