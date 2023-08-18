#include "serialportservice.h"
#include <QSerialPortInfo>
#include <QThread>
#include <QDebug>
#include <QTime>


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

bool SerialPortService::initSerialPort(QString portName, qint32 baudRate, QSerialPort::DataBits dataBits, QSerialPort::Parity parity, QSerialPort::StopBits stopBits, QIODevice::OpenMode openMode)
{
    this->SerialPortName = portName;
    this->serialPort->setPortName(this->SerialPortName);
    this->serialPort->setBaudRate(baudRate);
    this->serialPort->setDataBits(dataBits);
    this->serialPort->setParity(parity);
    this->serialPort->setStopBits(stopBits);
    this->serialPort->setFlowControl(QSerialPort::NoFlowControl);

    if (this->serialPort->open(openMode) == true)
    {
        qDebug() << QTime::currentTime() << "open " << "serial port " << portName << "successful";
        connect(this->serialPort, &QSerialPort::readyRead, this, &SerialPortService::receviceSerialData,  Qt::QueuedConnection);
        return true;
    }
    else
    {
        qDebug() << QTime::currentTime() << "open " << "serial port " << portName << "fail";
        return false;
    }
}

void SerialPortService::closeSerial()
{
    if (serialPort->isOpen())
    {
        serialPort->clear();
        serialPort->close();
    }

    qDebug() << QTime::currentTime() << "close serial port successful";
}

void SerialPortService::receviceSerialData()
{
    QByteArray buffer = this->serialPort->readAll();
    emit  updateSerialData(buffer);
}

void SerialPortService::sendSerialData(QByteArray data)
{
    // 接收GUI数据并发送
    this->serialPort->write(data);
}

QString SerialPortService::getCurSerialPortName()
{
    return this->SerialPortName;
}