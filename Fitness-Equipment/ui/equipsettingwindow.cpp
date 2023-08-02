#include "equipsettingwindow.h"
#include "ui_equipsettingwindow.h"

#include "ui/applicationwindow.h"

#include "userLib/userLib_ui.h"

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
