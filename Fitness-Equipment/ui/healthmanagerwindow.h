#ifndef HEALTHMANAGERWINDOW_H
#define HEALTHMANAGERWINDOW_H

#include <QWidget>
#include "application/SerialPort/serialportservice.h"
#include <QListWidgetItem>
#include <stdint.h>
#include <QVector>
#include <QSerialPort>
#include <QThread>
#include <QTimer>
#include "ui/equipmentconnect.h"

// 图表
#include <QtCharts>
QT_CHARTS_USE_NAMESPACE


namespace Ui {
class HealthManagerWindow;
}

class HealthManagerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit HealthManagerWindow(QWidget *parent = nullptr);
    ~HealthManagerWindow();
private:
    void showMontorReceiveData();

private slots:
    void on_returnBefore_clicked();
    void montorReceive(ReceivePack receivePack);

signals:
    void backToApplication();
private:
    Ui::HealthManagerWindow *ui;

    ReceivePack montorReceiveData;

    // 监测定时器
    QTimer *detectionTim;
};

#endif // HEALTHMANAGERWINDOW_H
