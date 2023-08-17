#ifndef EQUIPMENTCONNECT_H
#define EQUIPMENTCONNECT_H

#include <QWidget>

namespace Ui {
class EquipmentConnect;
}

class EquipmentConnect : public QWidget
{
    Q_OBJECT

public:
    explicit EquipmentConnect(QWidget *parent = nullptr);
    ~EquipmentConnect();

private:
    Ui::EquipmentConnect *ui;
};

#endif // EQUIPMENTCONNECT_H
