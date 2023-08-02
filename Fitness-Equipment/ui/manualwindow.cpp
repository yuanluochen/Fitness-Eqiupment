#include "manualwindow.h"
#include "ui_manualwindow.h"

#include "ui/applicationwindow.h"

#include "userLib/userLib_ui.h"

ManualWindow::ManualWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManualWindow)
{
    ui->setupUi(this);
}

ManualWindow::~ManualWindow()
{
    delete ui;
}

void ManualWindow::on_returnBefore_clicked()
{
    CREATE_NEW_WINDOW(ApplicationWindow, this);
}