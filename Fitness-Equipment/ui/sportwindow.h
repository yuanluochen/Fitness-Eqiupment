#ifndef SPORTWINDOW_H
#define SPORTWINDOW_H

#include <QWidget>
#include <QVector>
#include <QListWidgetItem>
#include <stdint.h>
#include <QVector>
#include <QSerialPort>
#include <QThread>
#include <QTimer>

#include "equipmentitem.h"
#include "application/SerialPort/serialportservice.h"

//校验时间
#define CHECK_TIME 1000
//肌电信号收缩舒张阈值
#define GSR_THRESHOLD 2000

namespace Ui {
class SportWindow;
}



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

enum sportStatus_e
{
    PLAY_SPORT,
    UNPLAY_SPORT,
};

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
    void setEquipmentStatus(equipmentConnectStatus_e status);
    void showMontorReceiveData();
    void setSportDisplay(QString data);
    void setSportDisplay(int num);
private slots:
    void on_returnBefore_clicked();
    void on_searchPushButton_clicked();
    void on_startSportPushButton_clicked();
    void on_stopSportPushButton_clicked();
    void montorReceive(QByteArray data);
    void montorCheck();

public:
private:
    Ui::SportWindow *ui;
    receivePack_t montorReceiveData;
    //运动状态
    sportStatus_e sportStatus;

    //监测设备线程
    QThread montorThread;
    //监测设备串口服务
    SerialPortService *montorSerialService;
    QTimer *equipmentCheckTim;
    checkStatus_e checkstatus;
    QStringList serialPortList;
};

#endif // SPORTWINDOW_H
