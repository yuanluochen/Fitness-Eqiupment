#include "serialportservice.h"
#include <QSerialPortInfo>
#include <QThread>
#include <QDebug>


SerialPortService::SerialPortService( QObject *parent) : QObject(parent)
{
    serialPort = new QSerialPort;
}

QStringList SerialPortService::getAvailableSerialPort()
{
    QStringList mPortsList;

    for (const QSerialPortInfo &info : QSerialPortInfo::availablePorts())
    {
        mPortsList << info.portName();
    }
    return mPortsList;
}

bool SerialPortService::InitSerialPort(QString portName, qint32 baudRate, QSerialPort::DataBits dataBits, QSerialPort::Parity parity, QSerialPort::StopBits stopBits, QIODevice::OpenMode openMode)
{
    this->serialPort->setPortName(portName);
    this->serialPort->setBaudRate(baudRate);
    this->serialPort->setDataBits(dataBits);
    this->serialPort->setParity(parity);
    this->serialPort->setStopBits(stopBits);
    this->serialPort->setFlowControl(QSerialPort::NoFlowControl);

    if (this->serialPort->open(openMode) == true)
    {
        qDebug() << "open " << "serial port " << portName << "successful";
        return true;
    }
    else
    {
        qDebug() << "open " << "serial port " << portName << "fail";
        return false;
    }
}

void SerialPortService::CloseSerial()
{
    if (serialPort->isOpen())
    {
        serialPort->clear();
        serialPort->close();
    }

    qDebug() << "串口关闭成功";
}

void SerialPortService::ReceviceSerialData()
{
    QByteArray buffer = this->serialPort->readAll();
    qDebug() << QString(buffer)<< "当前线程ID："<< QThread::currentThreadId();
    // 发送数据至GUI
    emit  UpdateSerialData(buffer);
}

void SerialPortService::SendSerialData(QByteArray data)
{
    // 接收GUI数据并发送
    this->serialPort->write(data);
}
