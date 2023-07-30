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
    qDebug("clicked enterSystem pushButton");
    //close windows
    this->close();
    qDebug("close MainWindow");
    //cteate new windows
    Application* applicationWindow = new Application;\
    // set windows size from current windows
    applicationWindow->setGeometry(this->geometry());
    // show windows
    applicationWindow->show();
    qDebug("create applicationWindows");
}
