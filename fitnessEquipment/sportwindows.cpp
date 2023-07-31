#include "sportwindows.h"
#include "ui_sportwindows.h"

SportWindows::SportWindows(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SportWindows)
{
    ui->setupUi(this);
}

SportWindows::~SportWindows()
{
    delete ui;
}
