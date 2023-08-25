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
#include "application/UnitreeMotorSerialService/unitreemotorserialservice.h"

#define MAX_SPORT_STRENGTH 100
#define MIN_SPORT_STRENGTH 0

#define MAX_SPORT_TARGET 100
#define MIN_SPORT_TARGET 0

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

private:
    void setHeartRateData(double num);
    // void setBooldOxygenData(double num);
    void setSportDisplay(QString data);
    void setSportDisplay(int num);
    void showSportStrength();
    void showSportTarget();
private slots:
    void on_returnBefore_clicked();
    void on_startSportPushButton_clicked();
    void on_stopSportPushButton_clicked();
    void montorReceive(ReceivePack receivePack);
    void UnitreeMotorReceive(MOTOR_recv receivePack);
    void healthManagerToSportWindow(int sportTarget, int sportStrength);
    
    void on_sportStrengthReducePushButton_clicked();
    void on_sportTargetReducePushButton_clicked();
    void on_sportTargetPromotePushButton_clicked();
    void on_sportStrengthPromotePushButton_clicked();
signals:
    void backToApplication();
    void setMotorMoment(int moment);

public:
private:
    Ui::SportWindow *ui;
    ReceivePack montorReceiveData;
    MOTOR_recv fitnessReceiveData;
    //运动状态
    sportStatus_e sportStatus;
    
    //健身目标
    int sportTarget;
    //健身强度
    int sportStrength;
};

#endif // SPORTWINDOW_H
