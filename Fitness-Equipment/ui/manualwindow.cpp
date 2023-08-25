#include "manualwindow.h"
#include "ui_manualwindow.h"

#include "ui/applicationwindow.h"

#include "userLib/userLib_ui.h"
#include <QDebug>

ManualWindow::ManualWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManualWindow)
{
    ui->setupUi(this);
}

ManualWindow::~ManualWindow()
{

    qDebug() << QTime::currentTime() << "destruct manual window";
    delete ui;
}

void ManualWindow::on_returnBefore_clicked()
{
    emit backToApplication();
    this->close();
}
