#include "equipmentitem.h"
#include "ui_equipmentitem.h"
#include <QDebug>

EquipmentItem::EquipmentItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EquipmentItem)
{
    ui->setupUi(this);

}

EquipmentItem::EquipmentItem(equipmentItemCard::equipmentType type, QWidget *parent) : QWidget(parent), ui(new Ui::EquipmentItem)
{
    ui->setupUi(this);

    //设备卡图标
    QImage icon;
    //设备卡名称
    QString name;
    
    QPalette pe;
    //根据设备配置设备卡类型
    switch (type)
    {
    //健身设备
    case equipmentItemCard::FITNESS:
        icon.load(FITNESS_EQUIPMENT_ICON);
        name = FITNESS_EQUIPMENT_NAME;
        qDebug() << "set fitness equipment item parameter";
        break;
    //监测手环
    case equipmentItemCard::MONITORING:
        icon.load(MONITORING_EQUIPMENT_ICON);
        name = MONITORING_EQUIPMENT_NAME;
        qDebug() << "set monitoring equipment item parameter";
        break;
    //自行车
    case equipmentItemCard::BICYCLE:
        icon.load(BICYCLE_EQUIPMENT_ICON);
        name = BICYCLE_EQUIPMENT_NAME;
        qDebug() << "set bicycle card item parameter";
        break;
    }
    //设置参数到对应控件中
    ui->EquiPmentItemIcon->setPixmap(QPixmap::fromImage(icon.scaled(ui->EquiPmentItemIcon->width(), ui->EquiPmentItemIcon->height())));
    ui->EquipmentItemName->setText(name);
    ui->EquipmentItemName->setStyleSheet("color:white");
    pe.setColor(QPalette::WindowText, Qt::white);
    ui->EquipmentItemName->setPalette(pe);
    qDebug() << "create" << name << "item card";
}


EquipmentItem::~EquipmentItem()
{
    delete ui;
}

