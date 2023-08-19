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
    ui->BMICalcPushButton->setEnabled(false);
    ui->SaO2DetectionPushButton->setEnabled(false);
    ui->heartRateDetectionPushbutton->setEnabled(false);

}


void HealthManagerWindow::montorReceive(ReceivePack receivePack)
{
    qDebug() << QTime::currentTime() << "Health manager window receive montor data from equipmentconnect";
    this->montorReceiveData.assign(receivePack);
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


void HealthManagerWindow::on_heartRateDetectionPushbutton_clicked()
{
    qDebug() << QTime::currentTime() << "heart rate detection start";
    ui->displayLabel->setText("心率检测开始, 请将您的手指放到健康监测手环背面,等待一段时间");
    connect(this->detectionTim, &QTimer::timeout, this, &HealthManagerWindow::HeartRateShow);
    this->detectionTim->start(20000);
}

void HealthManagerWindow::SaO2Show()
{
    this->detectionTim->stop();
    ui->displayLabel->setText("您的血氧为" + QString::number(this->montorReceiveData.bloodOxygen));
}

void HealthManagerWindow::HeartRateShow()
{
    this->detectionTim->stop();
    ui->displayLabel->setText("您的心率为" + QString::number(this->montorReceiveData.heartRate));
    
}

void HealthManagerWindow::on_SaO2DetectionPushButton_clicked()
{
    qDebug() << QTime::currentTime() << "Sa02 detection start";
    ui->displayLabel->setText("血氧检测开始, 请将您的手指放到健康监测手环背面,等待一段时间");
    connect(this->detectionTim, &QTimer::timeout, this, &HealthManagerWindow::SaO2Show);
    this->detectionTim->start(20000);
}

void HealthManagerWindow::on_BMICalcPushButton_clicked()
{
    qDebug() << QTime::currentTime() << "BMI Calc start";
}

