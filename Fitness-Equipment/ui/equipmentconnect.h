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

//设备校验时间
#define CHECK_TIME 100
//设备连接校验时间
#define CHECK_CONNECT_TIME 1000

//监测设备接收数据包
class ReceivePack
{
public:
    ReceivePack() {};
    ReceivePack(int16_t GSR, int16_t accelX, int16_t accelY, int16_t accelZ, 
                int16_t angularVelocityX, int16_t angularVelocityY, int16_t angularVelocityZ,
                int8_t heartRate, int8_t bloodOxygen);
    ReceivePack(const ReceivePack &obj);

    bool isSame(ReceivePack &obj);
    bool isUpdate();
    void clear();
    void assign(const ReceivePack &obj);
public:
    int16_t GSR;
    //加速度
    int16_t accelX;
    int16_t accelY;
    int16_t accelZ;
    //角速度
    int16_t angularVelocityX;
    int16_t angularVelocityY;
    int16_t angularVelocityZ;
    //心率
    int8_t heartRate;
    //血氧
    int8_t bloodOxygen;
    //更新标志
    bool update;
};


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
    void montorCheck();
    void montorReceive(QByteArray data);
    void checkEquipmentConnect();
    void on_searchPushButton_clicked();

signals:
    void sendMontorDataToSportWindow(ReceivePack receivePack);
    void sendMontorDataToHealthManagerWindow(ReceivePack receivePack);
private:
    Ui::EquipmentConnect *ui;

    ReceivePack montorReceiveData;
    // 监测设备线程
    QThread montorThread;
    //监测设备串口服务
    SerialPortService *montorSerialService;
    //设备校验定时器
    QTimer *equipmentCheckTim;
    //设备连接校验定时器
    QTimer *equipmentCheckConnectTim;
    checkStatus_e checkstatus;
    QStringList serialPortList;

    //监测设备卡片地址
    QListWidgetItem *montoringEquipmentItem;

};

#endif // EQUIPMENTCONNECT_H
