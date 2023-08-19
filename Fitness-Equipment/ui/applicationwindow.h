#ifndef APPLICATIONWINDOW_H
#define APPLICATIONWINDOW_H

#include <QWidget>
#include "mainwindow.h"
#include "ui/sportwindow.h"
#include "ui/manualwindow.h"
#include "ui/healthmanagerwindow.h"
#include "ui/equipmentconnect.h"

namespace Ui {
class ApplicationWindow;
}

class ApplicationWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ApplicationWindow(QWidget *parent = nullptr);
    ~ApplicationWindow();

private slots:
    void on_returnBefore_clicked();

    void on_sportPushButton_clicked();

    void on_manualPushbutton_clicked();

    void on_healthManagerPushButton_clicked();

    void on_equipmentConnectPushButton_clicked();

private:
    Ui::ApplicationWindow *ui;
    SportWindow *sportWindow;
    ManualWindow *manualWindow;
    HealthManagerWindow *healthManagerWindow;
    EquipmentConnect *equipmentConnect;
};

#endif // APPLICATIONWINDOW_H
