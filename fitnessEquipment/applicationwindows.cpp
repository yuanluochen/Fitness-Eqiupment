#include "applicationwindows.h"
#include "ui_application.h"
#include "mainwindow.h"

ApplicationWindows::ApplicationWindows(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Application)
{
    ui->setupUi(this);
}

ApplicationWindows::~ApplicationWindows()
{
    delete ui;
}

void ApplicationWindows::on_returnBefore_clicked()
{
    //close this window
    this->close();
    qDebug("close application window");
    //create MainWindow
    MainWindow *mainWindow = new MainWindow;
    //set size is current size
    mainWindow->setGeometry(this->geometry());
    //show windows
    mainWindow->show();
}
