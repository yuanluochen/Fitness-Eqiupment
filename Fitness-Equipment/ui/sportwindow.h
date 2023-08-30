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
#include "userLib/userLib_ui.h"

#define MAX_SPORT_STRENGTH 100
#define MIN_SPORT_STRENGTH 0

#define MAX_SPORT_TARGET 300
#define MIN_SPORT_TARGET 0

#define FIT_SPEED 3
//采样周期
#define SAMP_PERIOD 1000
//停止数值比例
#define STOP_PROPORTION 0.7f
//停止的差值
#define ERROR_STOP_VAL 5000
//停止计数
#define STOP_COUNT 70
//GSR系数
#define GSR_PROPORTION 1
//运动量系数 运动量为 运动力矩 * 运动次数
#define SPORT_ENERGY_PROPORTION 1
//显示运动计划时间
#define SHOW_SPORT_PORJECT 5000

//等级1
#define GRADE_1_SPORT_STRENGTH 5
#define GRADE_1_SPORT_TARGET  30
//等级2
#define GRADE_2_SPORT_STRENGTH 10
#define GRADE_2_SPORT_TARGET  50
//等级3
#define GRADE_3_SPORT_STRENGTH 20
#define GRADE_3_SPORT_TARGET  70
//等级4
#define GRADE_4_SPORT_STRENGTH 40
#define GRADE_4_SPORT_TARGET  100

#define SPORT_PROJECT_FILE "/home/yuanluochen/code/Fitness-Eqiupment/Fitness-Equipment/userLib/sportProject.json"
#define SPORT_PROJECT_STRENGTH_KEY "sportStrength"
#define SPORT_PROJECT_TARGET_KEY "sportTarget"

namespace Ui {
class SportWindow;
}

//运动等级
enum sportStatus_e
{
    PLAY_SPORT,
    UNPLAY_SPORT,
};

//运动等级
enum sportGrade_e
{
    GRADE_1,
    GRADE_2,
    GRADE_3,
    GRADE_4,
};


class SportWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SportWindow(QWidget *parent = nullptr);
    ~SportWindow();

private:
    void setHeartRateData(double num);
    void setGSRData(double num);
    void setMomentData(double num);
    void setSportCountData(double num);
    // void setBooldOxygenData(double num);
    void setSportDisplay(QString data);
    void setSportDisplay(int num);
    void showSportStrength();
    void showSportTarget();
    void showSportCurProject();
    bool judgeStop(int imuX, int imuY, int imuZ);
    float calcSportScore();

    void saveSportProjectToJson(int sportStrength, int sportTarget);
    void readSportProjectFromJson();
private slots:
    void on_returnBefore_clicked();
    void on_startSportPushButton_clicked();
    void on_stopSportPushButton_clicked();
    void montorReceive(ReceivePack receivePack);
    void UnitreeMotorReceive(UnitreeReceive receivePack);
    void healthManagerToSportWindow(int sportTarget, int sportStrength);
    void showSportProject();
    
    void on_sportStrengthReducePushButton_clicked();
    void on_sportTargetReducePushButton_clicked();
    void on_sportTargetPromotePushButton_clicked();
    void on_sportStrengthPromotePushButton_clicked();
    void on_importProjectPushButton_clicked();

signals:
    void backToApplication();
    void setMotorMoment(int moment);

public:
private:
    Ui::SportWindow *ui;
    ReceivePack montorReceiveData;
    UnitreeReceive fitnessReceiveData;
    //运动状态
    sportStatus_e sportStatus;

    //健身目标
    int sportTarget;
    //健身强度
    int sportStrength;
    //健身次数
    int sportCount;

    //获取高频分量
    HighFrequency imuAccelX;
    HighFrequency imuAccelY;
    HighFrequency imuAccelZ;

    //停止数值
    int stopCount;

    //最初的GSR
    int beginGSR;
    //GSR差值
    int errorGSR;

    //健身分数
    float sportScore;

    sportGrade_e sportGrade;
    QTimer sportProjectTim;


    int sportProjectTarget;
    int sportProjectStrength;

};

#endif // SPORTWINDOW_H
