#include "equipmentconnect.h"
#include "ui_equipmentconnect.h"

EquipmentConnect::EquipmentConnect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EquipmentConnect)
{
    ui->setupUi(this);
}

EquipmentConnect::~EquipmentConnect()
{
    delete ui;
}
