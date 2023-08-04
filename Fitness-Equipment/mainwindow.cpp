#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui/applicationwindow.h"

#include "userLib/userLib_ui.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_enterSystem_clicked()
{
    CREATE_NEW_WINDOW(ApplicationWindow, this);
}
