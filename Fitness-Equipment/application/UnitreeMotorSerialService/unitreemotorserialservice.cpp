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
    qDebug() << "Unitree thread finished";
}

void UnitreeMotorThread::initControlMessage()
{
    this->sendMessage.id = 0;
    // 设置电机类型，A1Go1
    this->sendMessage.motorType = MotorType::A1Go1;
    this->sendMessage.mode = 5;
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