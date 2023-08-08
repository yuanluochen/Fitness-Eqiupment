#ifndef SPORTWINDOW_H
#define SPORTWINDOW_H

#include <QWidget>
#include "application/Equipment/equipmentconnection.h"

namespace Ui {
class SportWindow;
}

class SportWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SportWindow(QWidget *parent = nullptr);
    ~SportWindow();

private:
    void connectEquipment();
private slots:
    void on_returnBefore_clicked();

    void on_searchPushButton_clicked();


private:
    Ui::SportWindow *ui;
    //设备连接线程
    equipmentConnection::EquipmentSearch *equipmentSearch;

};

#endif // SPORTWINDOW_H
