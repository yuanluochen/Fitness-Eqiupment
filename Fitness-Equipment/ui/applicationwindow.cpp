#include "applicationwindow.h"
#include "ui_applicationwindow.h"

#include "mainwindow.h"
#include "ui/sportwindow.h"
#include "ui/equipsettingwindow.h"
#include "ui/manualwindow.h"

#include "userLib/userLib_ui.h"


ApplicationWindow::ApplicationWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ApplicationWindow)
{
    ui->setupUi(this);
}

ApplicationWindow::~ApplicationWindow()
{
    delete ui;
}

void ApplicationWindow::on_returnBefore_clicked()
{
    CREATE_NEW_WINDOW(MainWindow, this);
}

void ApplicationWindow::on_sportPushButton_clicked()
{
    CREATE_NEW_WINDOW(SportWindow, this);
}

void ApplicationWindow::on_settingPushButton_clicked()
{
    CREATE_NEW_WINDOW(EquipSettingWindow, this);
}

void ApplicationWindow::on_manualPushbutton_clicked()
{
    CREATE_NEW_WINDOW(ManualWindow, this);
}