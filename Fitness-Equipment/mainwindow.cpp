#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui/applicationwindow.h"

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
    // create new window object
    ApplicationWindow* applicationWindow = new ApplicationWindow;
    // set geometry
    applicationWindow->setGeometry(this->geometry());
    // close main Window
    this->close();
    //show application window
    applicationWindow->show();
}
