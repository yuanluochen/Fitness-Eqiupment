#include "sportwindow.h"
#include "ui_sportwindow.h"

#include "ui/applicationwindow.h"

#include "userLib/userLib_ui.h"
#include "QSerialPortInfo"
#include "QSerialPort"
#include "QDebug"
#include "QThread"
#include "application/Equipment/equipmentconnection.h"

SportWindow::SportWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SportWindow)
{
    ui->setupUi(this);

}

SportWindow::~SportWindow()
{
    delete ui;
}

void SportWindow::on_returnBefore_clicked()
{
    CREATE_NEW_WINDOW(ApplicationWindow, this);
}

void SportWindow::on_searchPushButton_clicked()
{
    //创建设备连接线程对象
    equipmentConnection::EquipmentConnection *equipmentConnect = new equipmentConnection::EquipmentConnection;
    equipmentConnect->start();

}

