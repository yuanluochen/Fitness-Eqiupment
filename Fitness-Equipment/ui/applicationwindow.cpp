#include "applicationwindow.h"
#include "ui_applicationwindow.h"
#include "mainwindow.h"
#include "ui/equipmentconnect.h"
#include "application/UnitreeMotorSerialService/unitreemotorserialservice.h"

#include <QDebug>
#include <QTime>

ApplicationWindow::ApplicationWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ApplicationWindow)
{
    ui->setupUi(this);
    //实例化界面对象
    this->sportWindow = new SportWindow;
    this->manualWindow = new ManualWindow;
    this->healthManagerWindow = new HealthManagerWindow;
    this->equipmentConnect = new EquipmentConnect;

    connect(this->sportWindow, &SportWindow::backToApplication, this, &ApplicationWindow::sportBackToApplication);
    connect(this->manualWindow, &ManualWindow::backToApplication, this, &ApplicationWindow::sportBackToApplication);
    connect(this->healthManagerWindow, &HealthManagerWindow::backToApplication, this, &ApplicationWindow::sportBackToApplication);
    //手环数据发送连接到运动界面
    connect(this->equipmentConnect, SIGNAL(sendMontorDataToSportWindow(ReceivePack)), this->sportWindow, SLOT(montorReceive(ReceivePack)));
    //手环数据发送连接到健康管理界面
    connect(this->equipmentConnect, SIGNAL(sendMontorDataToHealthManagerWindow(ReceivePack)), this->healthManagerWindow, SLOT(montorReceive(ReceivePack)));
    //电机数据发送链接掉运动界面
    connect(this->equipmentConnect, SIGNAL(sendUnitreeMotorDataToSportWindow(UnitreeReceive)), this->sportWindow, SLOT(UnitreeMotorReceive(UnitreeReceive)));
    //发送电机控制数据
    connect(this->sportWindow, SIGNAL(setMotorMoment(float)), this->equipmentConnect->fitnessEquipmentServiceThread, SLOT(setMoment(float)));
    //健身检测
    connect(this->healthManagerWindow, SIGNAL(goToSportWindow(int, int)), this->sportWindow, SLOT(healthManagerToSportWindow(int, int)));
}

ApplicationWindow::~ApplicationWindow()
{

    qDebug() << QTime::currentTime() << "destruct mainwindow";
    delete this->sportWindow;
    delete this->manualWindow;
    delete this->healthManagerWindow;
    delete this->equipmentConnect;
    delete ui;
}

void ApplicationWindow::on_returnBefore_clicked()
{
    qDebug() << QTime::currentTime() << "hide application window";
    this->close();
    emit backToMain();
}

void ApplicationWindow::on_sportPushButton_clicked()
{
    qDebug() << QTime::currentTime() << "hide application window";
    this->close();

    qDebug() << QTime::currentTime() << "show sport Window";
    this->sportWindow->setGeometry(this->geometry());  
    this->sportWindow->show();
}

void ApplicationWindow::on_manualPushbutton_clicked()
{
    qDebug() << QTime::currentTime() << "hide application window";
    this->close();

    qDebug() << QTime::currentTime() << "show manual Window";
    this->manualWindow->setGeometry(this->geometry());  
    this->manualWindow->show();
}

void ApplicationWindow::on_healthManagerPushButton_clicked()
{
    qDebug() << QTime::currentTime() << "hide application window";
    this->close();

    qDebug() << QTime::currentTime() << "show health manager Window";
    this->healthManagerWindow->setGeometry(this->geometry());  
    this->healthManagerWindow->show();
}

void ApplicationWindow::on_equipmentConnectPushButton_clicked()
{
    qDebug() << QTime::currentTime() << "show health manager Window";
    this->equipmentConnect->close();
    this->equipmentConnect->show();
}

void ApplicationWindow::healthManagerBackToApplication()
{
    this->show();
}
void ApplicationWindow::manualBackToApplication()
{
    this->show();
}
void ApplicationWindow::sportBackToApplication()
{
    this->show();
}