#include "sportwindow.h"
#include "ui_sportwindow.h"

#include "ui/applicationwindow.h"

#include "userLib/userLib_ui.h"

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
