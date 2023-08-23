#include "unitreemotorserialservice.h"
#include <QDebug>
#include <QTime>

UnitreeMotorThread::UnitreeMotorThread(QString serialPort, QObject *parent) : QThread(parent)
{
    //实例化串口对象
    this->motorSerialPort = new SerialPort(serialPort.toStdString());
    //初始化接收发送的控制数据
    this->initControlMessage();
}
void UnitreeMotorThread::run()
{
    qDebug() << QTime::currentTime() << "open Unitree motor thread, open equipment connect thead";
    while(1)
    {
        this->motorSerialPort->sendRecv(&this->sendMessage, &this->receiveMessage);
        qDebug() << "Pos:" <<  this->receiveMessage.Pos;
    }
    qDebug() << "Unitree thread finished";
}

void UnitreeMotorThread::setControlT(float T)
{
    this->sendMessage.mode = 10;
    this->sendMessage.T = T;
}

void UnitreeMotorThread::stop()
{
    this->sendMessage.id = 0;
    // 设置电机类型，A1Go1
    this->sendMessage.motorType = MotorType::A1Go1;
    //线程启动时电机默认为空闲
    this->sendMessage.mode = 0;
    this->sendMessage.T = 0.0;
    this->sendMessage.W = 0.0;
    this->sendMessage.Pos = 0.0;
    this->sendMessage.K_P = 0.0;
    this->sendMessage.K_W = 0.0;

    this->receiveMessage.motorType = this->sendMessage.motorType;
    this->encodeSendMessage();
    for (int i = 0; i < 1000; i++)
        this->motorSerialPort->sendRecv(&this->sendMessage, &this->receiveMessage);
}
UnitreeMotorThread::~UnitreeMotorThread()
{
    //电机停止运行 
    this->stop();
    delete this->motorSerialPort;
}
void UnitreeMotorThread::initControlMessage()
{
    this->sendMessage.id = 0;
    // 设置电机类型，A1Go1
    this->sendMessage.motorType = MotorType::A1Go1;
    //线程启动时电机默认为空闲
    this->sendMessage.mode = 0;
    this->sendMessage.T = 0.0;
    this->sendMessage.W = 0.0;
    this->sendMessage.Pos = 0.0;
    this->sendMessage.K_P = 0.0;
    this->sendMessage.K_W = 0.0;

    this->receiveMessage.motorType = this->sendMessage.motorType;
    this->encodeSendMessage();

}

void UnitreeMotorThread::encodeSendMessage()
{
    //为发送数据编码
    modify_data(&this->sendMessage);
}

void UnitreeMotorThread::decodeReceiveMessage()
{
    extract_data(&this->receiveMessage);
}