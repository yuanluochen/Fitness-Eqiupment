#include "applicationwindow.h"
#include "ui_applicationwindow.h"
#include "mainwindow.h"
#include "userLib/userLib_ui.h"
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
}

ApplicationWindow::~ApplicationWindow()
{
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