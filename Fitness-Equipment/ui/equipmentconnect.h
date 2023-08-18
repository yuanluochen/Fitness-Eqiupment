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

//校验时间
#define CHECK_TIME 1000

//监测设备接收数据包
struct receivePack_t
{
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
signals:
private:
    Ui::EquipmentConnect *ui;

    receivePack_t montorReceiveData;
    // 监测设备线程
    QThread montorThread;
    //监测设备串口服务
    SerialPortService *montorSerialService;
    QTimer *equipmentCheckTim;
    checkStatus_e checkstatus;
    QStringList serialPortList;

};

#endif // EQUIPMENTCONNECT_H
