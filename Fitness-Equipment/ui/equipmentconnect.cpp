#include "equipmentconnect.h"
#include "ui_equipmentconnect.h"
#include <QDebug>
#include <QThread>
#include <QTime>
#include "ui/sportwindow.h"
#include "ui/sportwindow.h"
#include "ui/healthmanagerwindow.h"

EquipmentConnect::EquipmentConnect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EquipmentConnect)
{
    ui->setupUi(this);
    // 实例化监测设备服务
    this->montorSerialService = new SerialPortService;
    //实例化设备校验定时
    this->equipmentCheckTim = new QTimer;
    //实例化设备连接校验定时
    this->equipmentCheckConnectTim = new QTimer;
    //将监测设备服务转移到监测设备线程
    this->montorSerialService->moveToThread(&this->montorThread);
    //启动线程
    this->montorThread.start();
    //显示设备连接状态为未连接
    this->setEquipmentStatus(UNCONNECT);
    
    // 线程退出时自动删除对象
    QObject::connect(&this->montorThread, &QThread::finished, this->montorSerialService, &QObject::deleteLater);
    this->serialPortList = this->montorSerialService->getAvailableSerialPort();
    if (!this->serialPortList.isEmpty())
    {
        // 自动连接设备
        this->connectEquipment();
    }   
}

EquipmentConnect::~EquipmentConnect()
{
    montorThread.quit();
    montorThread.wait();
    delete this->equipmentCheckTim;
    delete this->equipmentCheckConnectTim;
    delete this->montoringEquipmentItem;
    delete ui;
}

void EquipmentConnect::connectEquipment()
{
    QStringList::iterator it = serialPortList.begin();
    
    if (this->montorSerialService->initSerialPort(*it, QSerialPort::Baud115200, QSerialPort::Data8, QSerialPort::NoParity, QSerialPort::OneStop, QIODevice::ReadOnly))
    {
        qDebug() << QTime::currentTime() << "serial port open successful";
        // 清空数据
        this->montorReceiveData.clear();
        // 连接信号和槽
        QObject::connect(this->montorSerialService, SIGNAL(updateSerialData(QByteArray)), this, SLOT(montorReceive(QByteArray)));
        // 定时等待验证
        connect(this->equipmentCheckTim, &QTimer::timeout, this, &EquipmentConnect::montorCheck);
        this->checkstatus = UNPASS;
        //开始定时
        this->equipmentCheckTim->start(CHECK_TIME);
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
void EquipmentConnect::montorCheck()
{   
    qDebug() << QTime::currentTime() << "check montoring equipment";
    //停止定时
    this->equipmentCheckTim->stop();
    //设备校验
    if (this->montorReceiveData.accelX != 0 || this->montorReceiveData.accelY != 0 || this->montorReceiveData.accelZ != 0 ||
        this->montorReceiveData.angularVelocityX != 0 || this->montorReceiveData.angularVelocityY != 0 || this->montorReceiveData.angularVelocityZ != 0 ||
        this->montorReceiveData.bloodOxygen != 0 || this->montorReceiveData.GSR != 0 || this->montorReceiveData.heartRate != 0)
    {
        this->checkstatus = PASS;
        qDebug() << QTime::currentTime() << "check montoring equipment pass";
        //添加设备
        this->montoringEquipmentItem = this->addEquipmentItem(equipmentItemCard::MONITORING);
        //显示已连接设备
        this->setEquipmentStatus(CONNECT);
        connect(this->equipmentCheckConnectTim, &QTimer::timeout, this, &EquipmentConnect::checkEquipmentConnect);
        //设备连接检测开始
        this->equipmentCheckConnectTim->start(CHECK_CONNECT_TIME);
        return;
    }

    //校验失败关闭串口更换其他设备进行校验
    this->checkstatus = UNPASS;
    qDebug() << QTime::currentTime() << "check montoring equipment unpass";
    //取消槽函数的链接
    disconnect(this->equipmentCheckTim, &QTimer::timeout, this, &EquipmentConnect::montorCheck);
    //遍历删除指定串口名
    for (QStringList::iterator it = this->serialPortList.begin(); it != this->serialPortList.end(); it++)
    {
        if (*it == this->montorSerialService->getCurSerialPortName())
        {
            qDebug() << QTime::currentTime() << "delete serial port";
            this->serialPortList.pop_front();
            this->montorSerialService->closeSerial();
            break;
        }
    }

    if (!this->serialPortList.isEmpty())
    {
        this->connectEquipment();
    }
    
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
        this->checkstatus = UNPASS;
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



ReceivePack::ReceivePack(int16_t GSR, int16_t accelX, int16_t accelY, int16_t accelZ,
                             int16_t angularVelocityX, int16_t angularVelocityY, int16_t angularVelocityZ,
                             int8_t heartRate, int8_t bloodOxygen)
{
    this->GSR = GSR;
    this->accelX = accelX;
    this->accelY = accelY;
    this->accelZ = accelZ;
    this->angularVelocityX = angularVelocityX;
    this->angularVelocityY = angularVelocityY;
    this->angularVelocityZ = angularVelocityZ;
    this->heartRate = heartRate;
    this->bloodOxygen = bloodOxygen;
}

ReceivePack::ReceivePack(const ReceivePack &obj)
{
    this->accelX = obj.accelX;
    this->accelY = obj.accelY;
    this->accelZ = obj.accelZ;
    this->angularVelocityX = obj.angularVelocityX;
    this->angularVelocityY = obj.angularVelocityY;
    this->angularVelocityZ = obj.angularVelocityZ;
    this->bloodOxygen = obj.bloodOxygen;
    this->GSR = obj.GSR;
    this->heartRate = obj.heartRate;
    this->update = obj.update;
}

bool ReceivePack::isSame(ReceivePack &obj)
{
    return (obj.accelX == this->accelX && obj.accelY == this->accelY && obj.accelZ == this->accelZ && 
            obj.angularVelocityX == this->angularVelocityX && obj.angularVelocityY == this->angularVelocityY && obj.angularVelocityZ == this->angularVelocityZ &&
            obj.bloodOxygen == this->bloodOxygen && obj.GSR == this->GSR && obj.heartRate == this->heartRate && this->update == obj.update);
}

bool ReceivePack::isUpdate()
{
    bool curState = this->update;
    this->update = false;
    return curState;
}

void ReceivePack::clear()
{
    this->accelX = 0;
    this->accelY = 0;
    this->accelZ = 0;
    this->angularVelocityX = 0;
    this->angularVelocityY = 0;
    this->angularVelocityZ = 0;
    this->bloodOxygen = 0;
    this->GSR = 0;
    this->heartRate = 0;
}

void ReceivePack::assign(const ReceivePack &obj)
{
    this->accelX = obj.accelX;
    this->accelY = obj.accelY;
    this->accelZ = obj.accelZ;
    this->angularVelocityX = obj.angularVelocityX;
    this->angularVelocityY = obj.angularVelocityY;
    this->angularVelocityZ = obj.angularVelocityZ;
    this->bloodOxygen = obj.bloodOxygen;
    this->GSR = obj.GSR;
    this->heartRate = obj.heartRate;
    this->update = obj.update;
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
