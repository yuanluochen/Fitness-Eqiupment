#ifndef HEALTHMANAGERWINDOW_H
#define HEALTHMANAGERWINDOW_H

#include <QWidget>
#include "application/SerialPort/serialportservice.h"
#include <QListWidgetItem>
#include <stdint.h>
#include <QVector>
#include <QSerialPort>
#include <QThread>
#include <QTimer>
#include "sportwindow.h"

// 图表
#include <QtCharts>
QT_CHARTS_USE_NAMESPACE

// enum equipmentConnectStatus_e
// {
//     UNCONNECT,        // 未连接
//     CONNECT,          // 连接
//     SEARCH_EQUIPMENT, // 搜索设备
// };

// enum checkStatus_e
// {
//     PASS,   //通过
//     UNPASS, //不通过
// };
//监测设备接收数据包
// struct receivePack_t
// {
//     int16_t GSR;
//     //加速度
//     int16_t accelX;
//     int16_t accelY;
//     int16_t accelZ;
//     //角速度
//     int16_t angularVelocityX;
//     int16_t angularVelocityY;
//     int16_t angularVelocityZ;
//     //心率
//     int8_t heartRate;
//     //血氧
//     int8_t bloodOxygen;
// };
namespace Ui {
class HealthManagerWindow;
}

class HealthManagerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit HealthManagerWindow(QWidget *parent = nullptr);
    ~HealthManagerWindow();
private:
    void setEquipmentStatus(equipmentConnectStatus_e status);
    void connectEquipment();
    void showMontorReceiveData();
    QListWidgetItem *addEquipmentItem(equipmentItemCard::equipmentType type);
    void removeEquipmentItem(QListWidgetItem *it);

private slots:
    void on_returnBefore_clicked();
    void montorCheck();
    void montorReceive(QByteArray data);

private:
    Ui::HealthManagerWindow *ui;

    receivePack_t montorReceiveData;
    // 监测设备线程
    QThread montorThread;
    //监测设备串口服务
    SerialPortService *montorSerialService;
    QTimer *equipmentCheckTim;
    checkStatus_e checkstatus;
    QStringList serialPortList;
};

#endif // HEALTHMANAGERWINDOW_H
