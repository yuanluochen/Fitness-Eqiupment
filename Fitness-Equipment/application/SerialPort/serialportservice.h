#ifndef SERIALPORTSERVICE_H
#define SERIALPORTSERVICE_H

#include <QObject>
#include <QSerialPort>



class SerialPortService : public QObject 
{
    Q_OBJECT
public:
    explicit SerialPortService(QObject *parent = nullptr);
    QStringList getAvailableSerialPort();
    bool initSerialPort(QString portName, qint32 baudRate, QSerialPort::DataBits dataBits, QSerialPort::Parity parity, QSerialPort::StopBits stopBits, QIODevice::OpenMode openMode);
    void closeSerial();
signals:
    void updateSerialData(QByteArray data);

public slots:
    void receviceSerialData();
    void sendSerialData(QByteArray data);

private:
    QSerialPort *serialPort;

};

#endif // SERIALPORTSERVICE_H
