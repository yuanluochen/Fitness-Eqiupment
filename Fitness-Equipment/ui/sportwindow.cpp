#include "sportwindow.h"
#include "ui_sportwindow.h"

#include "ui/applicationwindow.h"

#include "userLib/userLib_ui.h"
#include <QSerialPortInfo>
#include <QSerialPort>
#include <QDebug>
#include <QThread>

SportWindow::SportWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SportWindow)
{
    ui->setupUi(this);

    //实例化线程对象
    this->equipmentSearch = new equipmentConnection::EquipmentSearch;

    //进入页面自动连接设备
    connectEquipment();
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
    connectEquipment();
}

/**
 * @brief 开启线程连接设备函数
 */
void SportWindow::connectEquipment()
{
    ui->equipmentStatusLabel->setText("正在搜索设备中");
    //判断线程对象是否为空
    if (this->equipmentSearch == nullptr)
    {
        return;
    }
    //开启设备连接线程
    this->equipmentSearch->start();
}
