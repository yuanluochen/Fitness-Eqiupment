#ifndef EQUIPMENTITEM_H
#define EQUIPMENTITEM_H

#include <QWidget>


//设备ui卡
namespace EquipmentItemCard{

//健身泵图标
#define FITNESS_EQUIPMENT_ICON ":/icon/EquipmentItem/fitnessEquipment.png"
//手环图标
#define MONITORING_EQUIPMENT_ICON ":/icon/EquipmentItem/monitoringEquipment.png"
//自行车图标
#define BICYCLE_EQUIPMENT_ICON ":/icon/EquipmentItem/bicycleEquipment.png"


//健身泵名称
#define FITNESS_EQUIPMENT_NAME "健康健身设备"
//手环名称
#define MONITORING_EQUIPMENT_NAME "健康监测手环"
//自行车
#define BICYCLE_EQUIPMENT_NAME "健康运动单车"


//设备类型
enum equipmentType
{
    FITNESS,   //健身设备
    MONITORING,//监测手环
    BICYCLE,   //单车
};

//设备数据结构体
struct equipMentItemCardData
{
    //设备名称
    QString EquipmentName;
    //设备图标
    QImage ICON;
};

};



namespace Ui {
class EquipmentItem;
}

class EquipmentItem : public QWidget
{
    Q_OBJECT

public:
    explicit EquipmentItem(QWidget *parent = nullptr);
    explicit EquipmentItem(EquipmentItemCard::equipmentType type, QWidget *parent = nullptr);
    ~EquipmentItem();

private slots:
    void on_pushButton_clicked();

private:
    Ui::EquipmentItem *ui;
};

#endif // EQUIPMENTITEM_H
