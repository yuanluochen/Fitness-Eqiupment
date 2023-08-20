#ifndef UNITREEMOTORSERIALSERVICE_H
#define UNITREEMOTORSERIALSERVICE_H

#include <QObject>
#include <QThread>
#include "serialPort/SerialPort.h"
#include <csignal>


class UnitreeMotorThread : public QThread
{
    Q_OBJECT
public:
    explicit UnitreeMotorThread(QString serialPort, QObject *parent = nullptr);
private:
    void initControlMessage();
    void encodeSendMessage();
    void decodeReceiveMessage();
    

protected:
    void run();

signals:

public slots:

private:
    SerialPort *motorSerialPort;
    //接收发送的控制数据
    MOTOR_send sendMessage;
    MOTOR_recv receiveMessage;
    
};


#endif // UNITREEMOTORSERIALSERVICE_H
