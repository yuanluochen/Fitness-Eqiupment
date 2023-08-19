#include "healthmanagerwindow.h"
#include "ui_healthmanagerwindow.h"

#include "ui/applicationwindow.h"

#include "userLib/userLib_ui.h"
#include <QDebug>
#include <QThread>
#include <QString>
#include <QTime>
#include <QDateTime>

HealthManagerWindow::HealthManagerWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HealthManagerWindow)
{
    ui->setupUi(this);
    ui->BMICalcPushButton->setEnabled(false);
    ui->SaO2DetectionPushButton->setEnabled(false);
    ui->heartRateDetectionPushbutton->setEnabled(false);

    //实例化监测设备服务
    this->montorSerialService = new SerialPortService;
    //实例化设备校验定时
    this->equipmentCheckTim = new QTimer;
    //实例化设备连接检测定时器
    this->equipmentCheckConnectTim = new QTimer;
    //实例化检测定时
    this->detectionTim = new QTimer;
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

void HealthManagerWindow::montorCheck()
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
        this->addEquipmentItem(equipmentItemCard::MONITORING);
        //显示已连接设备
        this->setEquipmentStatus(CONNECT);
        //按键使能
        ui->BMICalcPushButton->setEnabled(true);
        ui->SaO2DetectionPushButton->setEnabled(true);
        ui->heartRateDetectionPushbutton->setEnabled(true);
        connect(this->equipmentCheckConnectTim, &QTimer::timeout, this, &HealthManagerWindow::checkEquipmentConnect);
        //设备连接检测开始
        this->equipmentCheckConnectTim->start(CHECK_CONNECT_TIME);

        return;
    }

    //校验失败关闭串口更换其他设备进行校验
    this->checkstatus = UNPASS;
    qDebug() << "check montoring equipment unpass";
    //取消槽函数的链接
    disconnect(this->equipmentCheckTim, &QTimer::timeout, this, &HealthManagerWindow::montorCheck);
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

void HealthManagerWindow::checkEquipmentConnect()
{
}

void HealthManagerWindow::connectEquipment()
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
        connect(this->equipmentCheckTim, &QTimer::timeout, this, &HealthManagerWindow::montorCheck);
        this->checkstatus = UNPASS;
        //开始定时
        this->equipmentCheckTim->start(CHECK_TIME);
    }
}

/**
 * @brief 添加设备标签
 * 
 * @param type 设备类型
 * @return 设备标签地址 
 */
QListWidgetItem *HealthManagerWindow::addEquipmentItem(equipmentItemCard::equipmentType type)
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
void HealthManagerWindow::removeEquipmentItem(QListWidgetItem* it)
{
    ui->equipmentListWidget->removeItemWidget(it);
    delete it;
    it = nullptr;
}
void HealthManagerWindow::montorReceive(QByteArray data)
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
                this->montorReceiveData.GSR = ((receiveBuf[1] << 8) + receiveBuf[2]);
                this->montorReceiveData.accelX = (receiveBuf[3] << 8) + receiveBuf[4];
                this->montorReceiveData.accelY = (receiveBuf[5] << 8) + receiveBuf[6];
                this->montorReceiveData.accelZ = (receiveBuf[7] << 8) + receiveBuf[8];
                this->montorReceiveData.angularVelocityX = (receiveBuf[9] << 8) + receiveBuf[10];
                this->montorReceiveData.angularVelocityY = (receiveBuf[11] << 8) + receiveBuf[12];
                this->montorReceiveData.angularVelocityZ = (receiveBuf[13] << 8) + receiveBuf[14];
                this->montorReceiveData.heartRate = receiveBuf[15];
                this->montorReceiveData.bloodOxygen = receiveBuf[16];
                 
                this->showMontorReceiveData();
            }
        }
    }
}
/**
 * @brief 显示接收到的监测设备数据
 * 
 */
void HealthManagerWindow::showMontorReceiveData()
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

HealthManagerWindow::~HealthManagerWindow()
{
    montorThread.quit();
    montorThread.wait();
    delete this->equipmentCheckTim;
    delete ui;
}

/**
 * @brief 设置设备状态
 * 
 * @param status 
 */
void HealthManagerWindow::setEquipmentStatus(equipmentConnectStatus_e status)
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

void HealthManagerWindow::on_returnBefore_clicked()
{
    this->montorSerialService->closeSerial();
    montorThread.quit();
    montorThread.wait();
    this->close();
}


void HealthManagerWindow::on_heartRateDetectionPushbutton_clicked()
{
    qDebug() << QTime::currentTime() << "heart rate detection start";
    ui->displayLabel->setText("心率检测开始, 请将您的手指放到健康监测手环背面,等待一段时间");
    connect(this->detectionTim, &QTimer::timeout, this, &HealthManagerWindow::HeartRateShow);
    this->detectionTim->start(20000);
}

void HealthManagerWindow::SaO2Show()
{
    this->detectionTim->stop();
    ui->displayLabel->setText("您的血氧为" + QString::number(this->montorReceiveData.bloodOxygen));
}

void HealthManagerWindow::HeartRateShow()
{
    this->detectionTim->stop();
    ui->displayLabel->setText("您的心率为" + QString::number(this->montorReceiveData.heartRate));
    
}

void HealthManagerWindow::on_SaO2DetectionPushButton_clicked()
{
    qDebug() << QTime::currentTime() << "Sa02 detection start";
    ui->displayLabel->setText("血氧检测开始, 请将您的手指放到健康监测手环背面,等待一段时间");
    connect(this->detectionTim, &QTimer::timeout, this, &HealthManagerWindow::SaO2Show);
    this->detectionTim->start(20000);
}

void HealthManagerWindow::on_BMICalcPushButton_clicked()
{
    qDebug() << QTime::currentTime() << "BMI Calc start";
}

void HealthManagerWindow::on_searchPushButton_clicked()
{
    this->serialPortList = this->montorSerialService->getAvailableSerialPort();
    if (!this->serialPortList.isEmpty())
    {
        this->connectEquipment();
    }
}
