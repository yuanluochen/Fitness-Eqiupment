#ifndef SPORTWINDOW_H
#define SPORTWINDOW_H

#include <QWidget>
#include "application/Equipment/equipmentconnection.h"
#include <QVector>
#include <QListWidgetItem>

#include "equipmentitem.h"

namespace Ui {
class SportWindow;
}


namespace equipmentStatus{

enum equipmentStatus
{

};

}

class SportWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SportWindow(QWidget *parent = nullptr);
    ~SportWindow();

    QListWidgetItem *addEquipmentItem(equipmentItemCard::equipmentType type);
    void removeEquipmentItem(QListWidgetItem* it);
private:
    void connectEquipment();
    void setHeartRateData(double num);
    void setBooldOxygenData(double num);
private slots:
    void on_returnBefore_clicked();

    void on_searchPushButton_clicked();

public:

private:
    Ui::SportWindow *ui;
    //设备连接线程
    equipmentConnection::EquipmentSearch *equipmentSearch;

};

#endif // SPORTWINDOW_H
