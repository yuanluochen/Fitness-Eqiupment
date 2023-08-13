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

/**
 * @brief 添加设备标签
 * 
 * @param type 设备类型
 * @return 设备标签地址 
 */
QListWidgetItem *SportWindow::addEquipmentItem(equipmentItemCard::equipmentType type)
{
    EquipmentItem *equipmentItem = new EquipmentItem(type);
    QListWidgetItem *item = new QListWidgetItem;
    ui->equipmentListWidget->addItem(item);
    ui->equipmentListWidget->setItemWidget(item, equipmentItem);
    return item;
}

/**
 * @brief 删除设备标签
 * 
 * @param it 设备标签地址
 */
void SportWindow::removeEquipmentItem(QListWidgetItem* it)
{
    ui->equipmentListWidget->removeItemWidget(it);
    delete it;
    it = nullptr;
}

/**
 * @brief 设置心率数值
 * 
 * @param num 心率数值
 */
void SportWindow::setHeartRateData(double num)
{
    if (num >= 0)
    {
        ui->heartRateDataLabel->setNum(num);
        //设置为白色
        QPalette pe;
        pe.setColor(QPalette::WindowText, Qt::white);
        ui->heartRateDataLabel->setPalette(pe);
    }
}

/**
 * @brief 设置血氧数值 
 * 
 * @param num 血氧数值
 */
void SportWindow::setBooldOxygenData(double num)
{
    if (num >= 0 && num <= 100)
    {
        ui->bloodOxygenDataLabel->setNum(num);
        //设置为白色
        QPalette pe;
        pe.setColor(QPalette::WindowText, Qt::white);
        ui->bloodOxygenDataLabel->setPalette(pe);
    }
}

