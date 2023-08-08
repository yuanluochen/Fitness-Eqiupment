#include "equipsettingwindow.h"
#include "ui_equipsettingwindow.h"

#include "ui/applicationwindow.h"
#include "ui/equipmentitem.h"

#include "userLib/userLib_ui.h"
#include "QSerialPortInfo"
#include "QDebug"

EquipSettingWindow::EquipSettingWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EquipSettingWindow)
{
    ui->setupUi(this);
    //设置列项添加
//    ui->FitnessEquipmentListWidget->setWrapping(true);
    ui->FitnessEquipmentListWidget->setFlow(QListView::LeftToRight);

    EquipmentItem *item = new EquipmentItem(EquipmentItemCard::FITNESS);
    QListWidgetItem *listWidgetItem = new QListWidgetItem;
    ui->FitnessEquipmentListWidget->addItem(listWidgetItem);
    ui->FitnessEquipmentListWidget->setItemWidget(listWidgetItem, item);


}

EquipSettingWindow::~EquipSettingWindow()
{
    delete ui;
}

void EquipSettingWindow::on_returnBefore_clicked()
{
    CREATE_NEW_WINDOW(ApplicationWindow, this);
}

void EquipSettingWindow::on_searchPushButton_clicked()
{

}
