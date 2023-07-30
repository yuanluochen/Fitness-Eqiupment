#include "application.h"
#include "ui_application.h"
#include "mainwindow.h"

Application::Application(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Application)
{
    ui->setupUi(this);
}

Application::~Application()
{
    delete ui;
}

void Application::on_returnBefore_clicked()
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
