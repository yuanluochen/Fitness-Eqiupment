#ifndef EQUIPMENTCONNECT_H
#define EQUIPMENTCONNECT_H

#include <QWidget>
#include "application/SerialPort/serialportservice.h"
#include <QListWidgetItem>
#include <stdint.h>
#include <QVector>
#include <QSerialPort>
#include <QThread>
#include <QTimer>
#include "equipmentitem.h"
#include "application/UnitreeMotorSerialService/unitreemotorserialservice.h"
#include "userLib/packet.hpp"

//设备校验时间
#define CHECK_TIME 100
//设备连接校验时间
#define CHECK_CONNECT_TIME 1000



enum equipmentConnectStatus_e
{
    UNCONNECT,        // 未连接
    CONNECT,          // 连接
    SEARCH_EQUIPMENT, // 搜索设备
};

enum checkStatus_e
{
    PASS,   //通过
    UNPASS, //不通过
};
namespace Ui {
class EquipmentConnect;
}

class EquipmentConnect : public QWidget
{
    Q_OBJECT

public:
    explicit EquipmentConnect(QWidget *parent = nullptr);
    ~EquipmentConnect();
private:
    void setEquipmentStatus(equipmentConnectStatus_e status);
    void connectEquipment();
    void showMontorReceiveData();
    QListWidgetItem *addEquipmentItem(equipmentItemCard::equipmentType type);
    void removeEquipmentItem(QListWidgetItem *it);
    
private slots:
    void montorReceive(QByteArray data);
    void UnitreeMotorReceive(UnitreeReceive data);
    void checkEquipmentConnect();
    void on_searchPushButton_clicked();
    QStringList getAvailableSerialPort();
    bool connectFitnessEquipment(QString serialPort);


signals:
    void sendMontorDataToSportWindow(ReceivePack receivePack);
    void sendMontorDataToHealthManagerWindow(ReceivePack receivePack);
    void sendUnitreeMotorDataToSportWindow(UnitreeReceive receivePack);
public:

    UnitreeMotorThread *fitnessEquipmentServiceThread; 
private:
    Ui::EquipmentConnect *ui;

    ReceivePack montorReceiveData;
    UnitreeReceive unitreeReceive;
    // 监测设备线程
    QThread montorThread;
    //监测设备串口服务
    SerialPortService *montorSerialService;
    //设备校验定时器
    QTimer *equipmentCheckTim;
    //设备连接校验定时器
    QTimer *equipmentCheckConnectTim;
    //下一个设备连接等待计时
    QTimer *nextEquipmentConnectTim;
    checkStatus_e checkstatus;
    QStringList serialPortList;

    //监测设备卡片地址
    QListWidgetItem *montoringEquipmentItem;

};

#endif // EQUIPMENTCONNECT_H
