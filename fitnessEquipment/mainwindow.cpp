#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "application.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_enterSystem_clicked()
{
    Application* applicationWindow = new Application;
    applicationWindow->show();
}
