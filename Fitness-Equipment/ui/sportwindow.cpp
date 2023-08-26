#include "sportwindow.h"
#include "ui_sportwindow.h"
#include "ui/applicationwindow.h"
#include "userLib/userLib_ui.h"
#include <QSerialPortInfo>
#include <QSerialPort>
#include <QDebug>
#include <QListWidgetItem>
#include <QTimer>
#include <QTime>
//imu加速度数据转真实数据
#define IMU_ACCEL_DATA_TO_VALUE_DATA(imu) ((imu / 32768.0f) * 2.0f)
//imu角速度数据转真实数据
#define IMU_ANGULAR_VELOCITy_DATA_TO_VALUE_DATA(imu) ((imu / 32768.0f) * 250.0f)


SportWindow::SportWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SportWindow)
{
    ui->setupUi(this);
    
    //初始化运动状态
    this->sportStatus = UNPLAY_SPORT;
    //初始化健身参数
    this->sportTarget = 0;
    this->sportStrength = 0;
    this->sportCount = 0;
    //显示参数
    this->showSportStrength();
    this->showSportTarget();
    //设置按键状态
    ui->sportStrengthPromotePushButton->setAutoRepeat(true);
    ui->sportStrengthReducePushButton->setAutoRepeat(true);
    ui->sportTargetReducePushButton->setAutoRepeat(true);
    ui->sportTargetPromotePushButton->setAutoRepeat(true);
}

void SportWindow::montorReceive(ReceivePack receivePack)
{
    // qDebug() << QTime::currentTime() << "sport window receive montor data frome equipmentconnect";
    this->montorReceiveData.assign(receivePack);
    this->setGSRData(receivePack.GSR);
    this->setHeartRateData(receivePack.heartRate);
}

void SportWindow::UnitreeMotorReceive(UnitreeReceive receivePack)
{
    qDebug() << "receive Unitree data";
    this->fitnessReceiveData.assign(receivePack);
    this->setMomentData(receivePack.T);

}
SportWindow::~SportWindow()
{

    qDebug() << QTime::currentTime() << "destruct sport window";
    delete ui;
}

void SportWindow::on_returnBefore_clicked()
{

    emit backToApplication();
    this->close();
}

/**
 * @brief 设置心率数值
 * 
 * @param num 心率数值
 */
void SportWindow::setHeartRateData(double num)
{
    if (num >= 0)
    {
        ui->heartRateDataLabel->setNum(num);
        //设置为白色
        QPalette pe;
        pe.setColor(QPalette::WindowText, Qt::white);
        ui->heartRateDataLabel->setPalette(pe);
    }
}

void SportWindow::setGSRData(double num)
{
    ui->GSRLabel->setNum((num / 4095) * 3.3);
    // 设置为白色
    QPalette pe;
    pe.setColor(QPalette::WindowText, Qt::white);
    ui->GSRLabel->setPalette(pe);

}

void SportWindow::setMomentData(double num)
{
    ui->momentlLabel->setNum(num);
    // 设置为白色
    QPalette pe;
    pe.setColor(QPalette::WindowText, Qt::white);
    ui->momentlLabel->setPalette(pe);
}

void SportWindow::setSportCountData(double num)
{
    ui->sportCountLabel->setNum(num);
    // 设置为白色
    QPalette pe;
    pe.setColor(QPalette::WindowText, Qt::white);
    ui->sportCountLabel->setPalette(pe);
}


void SportWindow::setSportDisplay(QString data)
{
    ui->sportDisplay->setText(data);
    QPalette pe;
    pe.setColor(QPalette::WindowText, Qt::black);
    ui->sportDisplay->setPalette(pe);
}

void SportWindow::setSportDisplay(int num)
{
    ui->sportDisplay->setNum(num);
    QPalette pe;
    pe.setColor(QPalette::WindowText, Qt::black);
    ui->sportDisplay->setPalette(pe);

}

void SportWindow::showSportStrength()
{
    ui->sportStrengthLabel->setNum(this->sportStrength);
    QPalette pe;
    pe.setColor(QPalette::WindowText, Qt::blue);
    ui->sportStrengthLabel->setPalette(pe);

}

void SportWindow::showSportTarget()
{
    ui->sportTargetLabel->setNum(this->sportTarget);
    QPalette pe;
    pe.setColor(QPalette::WindowText, Qt::blue);
    ui->sportTargetLabel->setPalette(pe);
}

void SportWindow::healthManagerToSportWindow(int sportTarget, int sportStrength)
{
    this->show();
    this->sportTarget = sportTarget;
    this->sportStrength = sportStrength;

    this->showSportTarget();
    this->showSportStrength();

    this->setSportDisplay("体质检测开始，请在一分钟内尽您最大实力进行运动，我们将会检测您的各项数据，为您订制健身计划");
}

void SportWindow::on_startSportPushButton_clicked()
{
    qDebug() << "start fitness";
    this->setSportDisplay("运动开始，本次健身目标为" + QString::number(this->sportTarget) + "，  " + "本次健身强度为" + QString::number(this->sportStrength));
    //设置运动状态为运动
    this->sportStatus = PLAY_SPORT;

    //发送电机开始运动指令
    emit this->setMotorMoment(this->sportStrength);

}

void SportWindow::on_stopSportPushButton_clicked()
{
    qDebug() << "stop fitness";
    this->setSportDisplay("运动停止，本次健身次数为" + QString::number(this->sportCount) + "，  " + "本次健身强度为" + QString::number(this->sportStrength));
    this->sportStatus = UNPLAY_SPORT;
    emit this->setMotorMoment(0);
}


void SportWindow::on_sportStrengthReducePushButton_clicked()
{
    if (this->sportStrength > MIN_SPORT_STRENGTH)
    {
        this->sportStrength--;
    }
    else
    {
        this->sportStrength = MAX_SPORT_STRENGTH;
    }
    this->showSportStrength();
}


void SportWindow::on_sportTargetReducePushButton_clicked()
{
    if (this->sportTarget > MIN_SPORT_TARGET)
    {
        this->sportTarget--;
    }
    else
    {
        this->sportTarget = MAX_SPORT_STRENGTH;
    }
    this->showSportTarget();
}

void SportWindow::on_sportTargetPromotePushButton_clicked()
{
    if  (this->sportTarget < MAX_SPORT_TARGET)
    {
        this->sportTarget++;
    }
    else
    {
        this->sportTarget = MIN_SPORT_TARGET;
    }
    this->showSportTarget();
    
}

void SportWindow::on_sportStrengthPromotePushButton_clicked()
{
    if (this->sportStrength < MAX_SPORT_STRENGTH)
    {
        this->sportStrength++;
    }
    else
    {
        this->sportStrength = MIN_SPORT_STRENGTH;
    }
    this->showSportStrength();
}
