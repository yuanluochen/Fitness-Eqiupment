#include "equipsettingwindow.h"
#include "ui_equipsettingwindow.h"

#include "ui/applicationwindow.h"

#include "userLib/userLib_ui.h"
#include "QSerialPortInfo"

EquipSettingWindow::EquipSettingWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EquipSettingWindow)
{
    ui->setupUi(this);
}

EquipSettingWindow::~EquipSettingWindow()
{
    delete ui;
}

void EquipSettingWindow::on_returnBefore_clicked()
{
    CREATE_NEW_WINDOW(ApplicationWindow, this);
}

void EquipSettingWindow::on_pushButton_clicked()
{
    //search serial port
    //显示正在搜索

    //存放串口名链表

}
