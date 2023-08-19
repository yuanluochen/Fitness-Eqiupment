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
#include "ui/equipmentconnect.h"

// 图表
#include <QtCharts>
QT_CHARTS_USE_NAMESPACE


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
    void SaO2Show();
    void HeartRateShow();
    void checkEquipmentConnect();

    void on_heartRateDetectionPushbutton_clicked();

    void on_SaO2DetectionPushButton_clicked();

    void on_BMICalcPushButton_clicked();

    void on_searchPushButton_clicked();
signals:
    void backToApplication();
private:
    Ui::HealthManagerWindow *ui;

    ReceivePack montorReceiveData;
    //上一次数据
    ReceivePack lastMontorReceiveData;
    // 监测设备线程
    QThread montorThread;
    //监测设备串口服务
    SerialPortService *montorSerialService;
    //设备校验定时器
    QTimer *equipmentCheckTim;
    //设备连接检测定时器
    QTimer *equipmentCheckConnectTim;

    // 监测定时器
    QTimer *detectionTim;
    checkStatus_e checkstatus;
    QStringList serialPortList;

};

#endif // HEALTHMANAGERWINDOW_H
