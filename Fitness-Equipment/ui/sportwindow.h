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

#include "ui/equipmentconnect.h"



namespace Ui {
class SportWindow;
}

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
