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
