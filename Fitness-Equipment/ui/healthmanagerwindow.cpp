#include "healthmanagerwindow.h"
#include "ui_healthmanagerwindow.h"

#include "ui/applicationwindow.h"

#include "userLib/userLib_ui.h"
#include <QDebug>
#include <QThread>
#include <QString>
#include <QTime>
#include <QDateTime>

HealthManagerWindow::HealthManagerWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HealthManagerWindow)
{
    ui->setupUi(this);
    this->detectionTim = new QTimer;
    this->montorUpdate = false;
    this->initDisplay();
    
    connect(&this->montorDetectionTim, &QTimer::timeout, this, &HealthManagerWindow::montorConnectDetection);
    this->montorDetectionTim.start(DETECTION_CONNECT_TIME);
}

void HealthManagerWindow::initDisplay()
{
    ui->fitnessdetectionDisplayLabel->setText("体质检测开始，我们将会对您的体质情况进行一个基本的测试，为您订制您的体质提升计划");
    ui->heartRateDisplayLabel->setText("心率测量开始，请按下下方心率测量开始，正式开始心率测量");
    ui->saO2DisplayLabel->setText("血氧测量开始，请按下下方血氧测量开始，正是开始血氧测量");
}

void HealthManagerWindow::montorReceive(ReceivePack receivePack)
{
    this->montorReceiveData.assign(receivePack);
    this->montorUpdate = true;
}

void HealthManagerWindow::montorConnectDetection()
{
    if (this->montorUpdate == false)
    {
        qDebug() << QTime::currentTime() << "health manager window receive montor data not update";
        // ui->saO2DetectionPushButton->setEnabled(false);
        // ui->heartRateDetectionPushbutton->setEnabled(false);
        ui->saO2DisplayLabel->clear();
        ui->heartRateDisplayLabel->clear();
    }
    else
    {
        qDebug() << QTime::currentTime() << "health manager window receive montor data update";
        // ui->saO2DetectionPushButton->setEnabled(true);
        // ui->heartRateDetectionPushbutton->setEnabled(true);
        this->montorUpdate = false;
        
    }
}
/**
 * @brief 显示接收到的监测设备数据
 * 
 */
void HealthManagerWindow::showMontorReceiveData()
{
    qDebug() << QTime::currentTime() << "receive pack GSR is" << this->montorReceiveData.GSR;
    qDebug() << QTime::currentTime() << "receive pack accelX is" << this->montorReceiveData.accelX;
    qDebug() << QTime::currentTime() << "receive pack accelY is" << this->montorReceiveData.accelY;
    qDebug() << QTime::currentTime() << "receive pack accelZ is" << this->montorReceiveData.accelZ;
    qDebug() << QTime::currentTime() << "receive pack angularVelocityX is" << this->montorReceiveData.angularVelocityX;
    qDebug() << QTime::currentTime() << "receive pack angularVelocityY is" << this->montorReceiveData.angularVelocityY;
    qDebug() << QTime::currentTime() << "receive pack angularVelocityZ is" << this->montorReceiveData.angularVelocityZ;
    qDebug() << QTime::currentTime() << "receive pack heartRata is" << this->montorReceiveData.heartRate;
    qDebug() << QTime::currentTime() << "receive pack bloodOxygen is" << this->montorReceiveData.bloodOxygen;
}

HealthManagerWindow::~HealthManagerWindow()
{
    delete ui;
}

void HealthManagerWindow::on_returnBefore_clicked()
{
    this->close();
    emit backToApplication();
}

void HealthManagerWindow::SaO2Show()
{
    this->detectionTim->stop();
    this->curBloodOxygen = this->montorReceiveData.bloodOxygen;
    ui->saO2DisplayLabel->setText("您的血氧为" + QString::number(this->curBloodOxygen));

    disconnect(this->detectionTim, &QTimer::timeout, this, &HealthManagerWindow::SaO2Show);
    connect(this->detectionTim, &QTimer::timeout, this, &HealthManagerWindow::judgeSaO2);
    this->detectionTim->start(JUDGE_TIME);
}

void HealthManagerWindow::HeartRateShow()
{
    this->detectionTim->stop();
    this->curHeartRate = this->montorReceiveData.heartRate;
    ui->heartRateDisplayLabel->setText("您的心率为" + QString::number(this->curHeartRate));

    disconnect(this->detectionTim, &QTimer::timeout, this, &HealthManagerWindow::HeartRateShow);
    connect(this->detectionTim, &QTimer::timeout, this, &HealthManagerWindow::judgeHeartRate);
    this->detectionTim->start(JUDGE_TIME);
}

void HealthManagerWindow::judgeSaO2()
{
    if (95 <= this->curBloodOxygen && this->curBloodOxygen <= 100)
    {
        ui->saO2DisplayLabel->setText("您的血氧指标正常");
    } 
    else if (90 <= this->curBloodOxygen && this->curBloodOxygen < 95)
    {
        ui->saO2DisplayLabel->setText("您的血氧指标偏低");
    }
    else if (this->curBloodOxygen >= 80 && this->curBloodOxygen < 90)
    {
        ui->saO2DisplayLabel->setText("您的血氧指标低");
    }
    else
    {
        ui->saO2DisplayLabel->setText("您的血氧指标不正常，请重新测试");
    }

}

void HealthManagerWindow::judgeHeartRate()
{
    if (60 <= this->curHeartRate && this->curHeartRate <= 100)
    {
        ui->heartRateDisplayLabel->setText("您的心率正常");
    }
    else if (100 < this->curHeartRate && this->curHeartRate < 110)
    {
        ui->heartRateDisplayLabel->setText("您的心率偏高");
    }
    else if (30 <= this->curHeartRate && this->curHeartRate < 60)
    {
        ui->heartRateDisplayLabel->setText("您的心率偏低");
    }
    else
    {
        ui->heartRateDisplayLabel->setText("心率检测不正常，请重新测试");
    }
}

void HealthManagerWindow::on_listWidget_currentRowChanged(int currentRow)
{
    ui->tabWidget->setCurrentIndex(currentRow);
}

void HealthManagerWindow::on_heartRateDetectionPushbutton_clicked()
{
    qDebug() << QTime::currentTime() << "heart rate detection start";
    ui->heartRateDisplayLabel->setText("心率检测开始, 请将您的手指放到健康监测手环背面,等待一段时间");
    connect(this->detectionTim, &QTimer::timeout, this, &HealthManagerWindow::HeartRateShow);
    this->detectionTim->start(DETECTION_TIME);
}

void HealthManagerWindow::on_saO2DetectionPushButton_clicked()
{
    qDebug() << QTime::currentTime() << "Sa02 detection start";
    ui->saO2DisplayLabel->setText("血氧检测开始, 请将您的手指放到健康监测手环背面,等待一段时间");
    connect(this->detectionTim, &QTimer::timeout, this, &HealthManagerWindow::SaO2Show);
    this->detectionTim->start(DETECTION_TIME);
}

void HealthManagerWindow::on_FitnessDetectionPushButton_clicked()
{
    emit goToSportWindow(10, 10);

    this->close();
}
