#include "sportwindow.h"
#include "ui_sportwindow.h"

#include "ui/applicationwindow.h"

#include "userLib/userLib_ui.h"
#include <QSerialPortInfo>
#include <QSerialPort>
#include <QDebug>
#include <QThread>
#include <QListWidgetItem>

SportWindow::SportWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SportWindow)
{
    ui->setupUi(this);

    //实例化线程对象
    this->equipmentSearch = new equipmentConnection::EquipmentSearch;
    //进入页面自动连接设备
    connectEquipment();
    
}

SportWindow::~SportWindow()
{
    delete ui;
}

void SportWindow::on_returnBefore_clicked()
{
    //析构线程对象
    delete this->equipmentSearch;

    CREATE_NEW_WINDOW(ApplicationWindow, this);
}

void SportWindow::on_searchPushButton_clicked()
{
    connectEquipment();
}

/**
 * @brief 开启线程连接设备函数
 */
void SportWindow::connectEquipment()
{
    ui->equipmentStatusLabel->setText("正在搜索设备中");
    //判断线程对象是否为空
    if (this->equipmentSearch == nullptr)
    {
        return;
    }
    //开启设备连接线程
    this->equipmentSearch->start();

    //接收发送可用设备列表
    QObject::connect(this->equipmentSearch, &equipmentConnection::EquipmentSearch::sendMontoringEquipmentList, this, [=](QStringList availableList)
    {
        if (!availableList.empty())
        {
            ui->equipmentStatusLabel->setText("发现设备，正在连接设备");
        }
        else
        {
            ui->equipmentStatusLabel->setText("没有发现设备");
        }
    });
}

QListWidgetItem *SportWindow::addEquipmentItem(EquipmentItemCard::equipmentType type)
{
    EquipmentItem *equipmentItem = new EquipmentItem(type);
    QListWidgetItem *item = new QListWidgetItem;
    ui->EquipmentListWidget->addItem(item);
    ui->EquipmentListWidget->setItemWidget(item, equipmentItem);
    return item;
}
