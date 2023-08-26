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

#define DETECTION_TIME 2000
#define DETECTION_CONNECT_TIME 10000
#define JUDGE_TIME 2000

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
    void showMontorReceiveData();

    void SaO2Show();
    void HeartRateShow();
    void judgeSaO2();
    void judgeHeartRate();
    void initDisplay();
private slots:
    void on_returnBefore_clicked();
    void montorReceive(ReceivePack receivePack);
    void montorConnectDetection();

    void on_listWidget_currentRowChanged(int currentRow);

    void on_heartRateDetectionPushbutton_clicked();

    void on_saO2DetectionPushButton_clicked();

    void on_FitnessDetectionPushButton_clicked();

    void on_pushButton_clicked();

signals:
    void backToApplication();
    void goToSportWindow(int sportTarget, int sportStrength);
private:
    Ui::HealthManagerWindow *ui;

    ReceivePack montorReceiveData;
    bool montorUpdate;
    QTimer montorDetectionTim;

    int8_t curHeartRate;
    int8_t curBloodOxygen;


    // 监测定时器
    QTimer *detectionTim;
};

#endif // HEALTHMANAGERWINDOW_H
