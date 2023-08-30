#include "sportwindow.h"
#include "ui_sportwindow.h"
#include "ui/applicationwindow.h"
#include <QSerialPortInfo>
#include <QSerialPort>
#include <QDebug>
#include <QListWidgetItem>
#include <QTimer>
#include <QTime>
#include <QJsonDocument>
#include <QJsonObject>

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
    this->stopCount = 0;

    this->sportProjectTarget = 0;
    this->sportProjectStrength = 0;
    //获取运动任务
    this->readSportProjectFromJson();
    //显示
    this->showSportCurProject();
    //初始化GSR
    this->beginGSR = 0;
    this->errorGSR = 0;
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
    this->montorReceiveData.assign(receivePack);
    
    this->setGSRData(receivePack.GSR);
    this->setHeartRateData(receivePack.heartRate);
    if (this->judgeStop(receivePack.accelX, receivePack.accelY, receivePack.accelZ))
    {
        this->setSportDisplay("感受到危险，紧急停止运动");
        //电机停止转动
        emit this->setMotorMoment(0);
        //设置为运动停止
        this->sportStatus = UNPLAY_SPORT;
    }
}

bool SportWindow::judgeStop(int imuX, int imuY, int imuZ)
{
    float xHighFrequency = qAbs(this->imuAccelX.calcHighFrequency(imuX));
    float yHighFrequency = qAbs(this->imuAccelY.calcHighFrequency(imuY));
    float zHighFrequency = qAbs(this->imuAccelZ.calcHighFrequency(imuZ));
    

    qDebug() << "high frequency: " << "x: " << xHighFrequency << "y: " << yHighFrequency << "z: " << zHighFrequency;
    //判断是否多次出现高频信号 
    if (xHighFrequency > ERROR_STOP_VAL || yHighFrequency > ERROR_STOP_VAL || zHighFrequency > ERROR_STOP_VAL)
    { 
        this->stopCount++;
    }
    else
    {
        this->stopCount--;
    }
    if (this->stopCount < 0)
    {
        this->stopCount = 0;
    }
    qDebug() << "this->stopCount" << "is " << this->stopCount;
    if (this->stopCount > STOP_COUNT && this->sportStatus == PLAY_SPORT)
    {
        this->stopCount = 0;
        return true;
    }
    
    return false;
}

void SportWindow::UnitreeMotorReceive(UnitreeReceive receivePack)
{
    static bool sportCountFlag;
    qDebug() << "receive Unitree data";
    this->fitnessReceiveData.assign(receivePack);
    //健身计数
    
    //判断当前速度是否为反向速度,并且sportCountFlag为false
    if (this->fitnessReceiveData.W >= FIT_SPEED && sportCountFlag == false)
    {
        //判断发生拉的动作
        sportCountFlag = true;
    }
    else if (this->fitnessReceiveData.W < FIT_SPEED && sportCount == true)
    {
        //判断发生回收的动作
        sportCountFlag = false;
        this->sportCount++;
    }

    if (this->sportCount >= this->sportTarget && this->sportStatus == PLAY_SPORT)
    {
        this->setSportDisplay("您已经完成了您的运动，当前运动次数为" + QString::number(this->sportCount));
    }
    //显示当前力矩
    this->setMomentData(receivePack.T);
    //显示当前运动次数
    this->setSportCountData(this->sportCount);
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

    this->showMaximized();
    this->sportTarget = sportTarget;
    this->sportStrength = sportStrength;
    this->showSportTarget();
    this->showSportStrength();
    this->setSportDisplay("体质检测开始，请在尽您最大实力进行运动，我们将会检测您的各项数据，为您订制健身计划");
}

void SportWindow::on_startSportPushButton_clicked()
{
    qDebug() << "start fitness";
    this->setSportDisplay("运动开始，本次健身目标为" + QString::number(this->sportTarget) + "，  " + "本次健身强度为" + QString::number(this->sportStrength));
    //设置运动状态为运动
    this->sportStatus = PLAY_SPORT;
    //获取当前皮肤电数据
    this->beginGSR = this->montorReceiveData.GSR;
    //运动次数初始化
    this->sportCount = 0;
    //停止运动判断归零
    this->stopCount = 0;
    //发送电机开始运动指令
    emit this->setMotorMoment(this->sportStrength);
}

void SportWindow::on_stopSportPushButton_clicked()
{
    qDebug() << "stop fitness";
    this->setSportDisplay("运动停止，本次健身次数为" + QString::number(this->sportCount) + "，  " + "本次健身强度为" + QString::number(this->sportStrength));
    this->sportStatus = UNPLAY_SPORT;
    emit this->setMotorMoment(0);

    //制定下一次计划，根据力矩与运动数量和皮肤电差值打分计算，根据分数获取结果
    float sportScore = this->calcSportScore();
    
    if (sportScore < (GRADE_1_SPORT_STRENGTH * GRADE_1_SPORT_TARGET))
    {
        this->sportGrade = GRADE_1;
    }
    else if ((GRADE_1_SPORT_STRENGTH * GRADE_1_SPORT_TARGET) <= sportScore && sportScore < (GRADE_2_SPORT_STRENGTH * GRADE_2_SPORT_TARGET))
    {
        this->sportGrade = GRADE_2;   
    }
    else if ((GRADE_2_SPORT_STRENGTH * GRADE_2_SPORT_TARGET) <= sportScore && sportScore < (GRADE_3_SPORT_STRENGTH * GRADE_3_SPORT_TARGET))
    {
        this->sportGrade = GRADE_3;
    }
    else if ((GRADE_3_SPORT_STRENGTH * GRADE_3_SPORT_TARGET) <= sportScore)
    {
        this->sportGrade = GRADE_4;
    }
    connect(&this->sportProjectTim, &QTimer::timeout, this, &SportWindow::showSportProject);
    this->sportProjectTim.start(SHOW_SPORT_PORJECT);
}

void SportWindow::showSportProject()
{
    int nextSportTaget = 0;
    int nextSportStrength = 0;
    disconnect(&this->sportProjectTim, &QTimer::timeout, this, &SportWindow::showSportProject);
    QString begin = "根据健身结果为您匹配最佳下次最佳的健身计划";
    QString data;

    switch (this->sportGrade)
    {
    case GRADE_1:
        nextSportStrength = GRADE_1_SPORT_STRENGTH;
        nextSportTaget = GRADE_1_SPORT_TARGET;
        break;
    case GRADE_2:
        nextSportStrength = GRADE_2_SPORT_STRENGTH;
        nextSportTaget = GRADE_2_SPORT_TARGET;
        break;
    case GRADE_3:
        nextSportStrength = GRADE_3_SPORT_STRENGTH;
        nextSportTaget = GRADE_3_SPORT_TARGET;
        break;
    case GRADE_4:
        nextSportStrength = GRADE_4_SPORT_STRENGTH;
        nextSportTaget = GRADE_4_SPORT_TARGET;
        break;

    default:
        break;
    }
    data = "运动强度: " + QString::number(nextSportStrength) + "运动目标: " + QString::number(nextSportTaget);
    this->saveSportProjectToJson(nextSportStrength, nextSportTaget);
    this->setSportDisplay(begin + ", " + "下次健身计划为： " + data);
}
/**
 * @brief 计算运动分数 运动次数 * 运动强度 - 皮肤电
 * 
 * @return float 
 */
float SportWindow::calcSportScore()
{
    this->errorGSR = this->montorReceiveData.GSR - this->beginGSR;
    qDebug() << "show" << "this->errorGSR: " << this->errorGSR << "this->spotCount: " << this->sportCount << "this->sportStrength: " << this->sportStrength;
    return (float)(-this->errorGSR * GSR_PROPORTION + this->sportCount * this->sportStrength * SPORT_ENERGY_PROPORTION) + 1;
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

void SportWindow::saveSportProjectToJson(int sportStrength, int sportTarget)
{
    qDebug() << QTime::currentTime() << "write sport project to json, sport strength is " << sportStrength << " sport target is " << sportTarget;
    QJsonObject obj;

    obj.insert(SPORT_PROJECT_TARGET_KEY, sportTarget);
    obj.insert(SPORT_PROJECT_STRENGTH_KEY, sportStrength);

    QJsonDocument doc(obj);
    QByteArray json = doc.toJson();

    QFile file(SPORT_PROJECT_FILE);
    file.open(QFile::WriteOnly);
    file.write(json);
    file.close();
}

void SportWindow::readSportProjectFromJson()
{
    QFile file(SPORT_PROJECT_FILE);
    file.open(QFile::ReadOnly);
    QByteArray json = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(json);
    if (doc.isObject())
    {
        QJsonObject obj = doc.object();
        //提取数据
        QJsonValue value = obj.value(SPORT_PROJECT_TARGET_KEY);
        this->sportProjectTarget = value.toInt();
        //提取数据
        value = obj.value(SPORT_PROJECT_STRENGTH_KEY);
        this->sportProjectStrength = value.toInt();
        qDebug() << QTime::currentTime() << "read sport project from json, sport strength is " << this->sportProjectStrength << " sport target is " << this->sportProjectTarget;
    }

}

void SportWindow::showSportCurProject()
{
    ui->sportProjectTargetLabel->setText("计划健身目标为: " + QString::number(this->sportProjectTarget));
    ui->sportProjectStrengthLabel->setText("计划健身强度为: " + QString::number(this->sportProjectStrength));
    QPalette pe;
    pe.setColor(QPalette::WindowText, Qt::blue);
    ui->sportProjectTargetLabel->setPalette(pe);
    ui->sportProjectStrengthLabel->setPalette(pe);

}

void SportWindow::on_importProjectPushButton_clicked()
{
    this->sportStrength = this->sportProjectStrength;
    this->showSportStrength();
    this->sportTarget = this->sportProjectTarget;
    this->showSportTarget();
}
