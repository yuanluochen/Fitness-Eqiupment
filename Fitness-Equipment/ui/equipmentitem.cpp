#include "equipmentitem.h"
#include "ui_equipmentitem.h"

EquipmentItem::EquipmentItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EquipmentItem)
{
    ui->setupUi(this);
}

EquipmentItem::~EquipmentItem()
{
    delete ui;
}

void EquipmentItem::on_pushButton_clicked()
{
    //关闭窗口
    this->close();
}
