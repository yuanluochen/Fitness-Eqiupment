#ifndef SPORTWINDOW_H
#define SPORTWINDOW_H

#include <QWidget>
#include "application/Equipment/equipmentconnection.h"
#include <QVector>
#include <QListWidgetItem>
#include <stdint.h>
#include <QVector>

#include "equipmentitem.h"

namespace Ui {
class SportWindow;
}


//监测设备接收数据包
struct receivePack_t
{
    uint8_t header;
    //肌电信号
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
    //校验和
    int8_t checkSum;

    uint8_t tail;
}__attribute__((packed));

union int32_to_int8
{
    int32_t int32Data;
    int8_t int8Data[4];
};

namespace equipmentStatus{

enum equipmentStatus
{

};

}

class SportWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SportWindow(QWidget *parent = nullptr);
    ~SportWindow();

    QListWidgetItem *addEquipmentItem(equipmentItemCard::equipmentType type);
    void removeEquipmentItem(QListWidgetItem* it);
private:
    void connectEquipment();
    void setHeartRateData(double num);
    void setBooldOxygenData(double num);
private slots:
    void on_returnBefore_clicked();

    void on_searchPushButton_clicked();

    void read_Data();

public:
    char receiveBuf[10000]; 
private:
    Ui::SportWindow *ui;
    //设备连接线程
    equipmentConnection::EquipmentSearch *equipmentSearch;
    QSerialPort *serialPort;
    receivePack_t receiveData;
};

#endif // SPORTWINDOW_H
