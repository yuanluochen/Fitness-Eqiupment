#ifndef UNITREEMOTORSERIALSERVICE_H
#define UNITREEMOTORSERIALSERVICE_H

#include <QObject>
#include <QThread>
#include "serialPort/SerialPort.h"
#include "userLib/packet.hpp"
#include <csignal>


class UnitreeMotorThread : public QThread
{
    Q_OBJECT
public:
    explicit UnitreeMotorThread(QString serialPort, QObject *parent = nullptr);
    ~UnitreeMotorThread();
private:
    void initControlMessage();
    void encodeSendMessage();
    void decodeReceiveMessage();
    void setControlT(float T);

    void stop();

protected:
    void run();

signals:
    void sendUnitreeMotorDataToEquipmentConnectWindow(UnitreeReceive receivemessage);
public slots:
    //设置力矩
    void setMoment(int moment);

private:
    SerialPort *motorSerialPort;
    //接收发送的控制数据
    MOTOR_send sendMessage;
    MOTOR_recv receiveMessage;
    //电机接收数据结构体
    UnitreeReceive receive;
    
};


#endif // UNITREEMOTORSERIALSERVICE_H
