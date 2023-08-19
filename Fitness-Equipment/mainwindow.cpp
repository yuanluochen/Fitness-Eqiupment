#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "ui/applicationwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->applicationWindow = new ApplicationWindow;
    connect(this->applicationWindow, &ApplicationWindow::backToMain, this, &MainWindow::applicationBackToMain);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_enterSystem_clicked()
{
    qDebug() << QTime::currentTime() << "hide main window";
    this->close();

    qDebug() << QTime::currentTime() << "show application Window";
    this->applicationWindow->setGeometry(this->geometry());  
    this->applicationWindow->show();
}

void MainWindow::applicationBackToMain()
{
    qDebug() << QTime::currentTime() << "show main window";
    this->show();
}
