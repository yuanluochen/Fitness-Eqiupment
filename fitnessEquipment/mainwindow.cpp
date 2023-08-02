#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    qDebug("clicked enterSystem pushButton");
    //close windows
    this->close();
    qDebug("close MainWindow");
    //cteate new windows
    // set windows size from current windows
    qDebug("create applicationWindows");
}
