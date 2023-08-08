#include "healthmanagerwindow.h"
#include "ui_healthmanagerwindow.h"

#include "ui/applicationwindow.h"

#include "userLib/userLib_ui.h"
#include <QDebug>

HealthManagerWindow::HealthManagerWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HealthManagerWindow)
{
    ui->setupUi(this);
}

HealthManagerWindow::~HealthManagerWindow()
{
    delete ui;
}

void HealthManagerWindow::on_returnBefore_clicked()
{
    CREATE_NEW_WINDOW(ApplicationWindow, this);
}
