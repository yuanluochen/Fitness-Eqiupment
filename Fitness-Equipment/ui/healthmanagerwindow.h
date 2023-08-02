#ifndef HEALTHMANAGERWINDOW_H
#define HEALTHMANAGERWINDOW_H

#include <QWidget>

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

private slots:
    void on_returnBefore_clicked();

private:
    Ui::HealthManagerWindow *ui;
};

#endif // HEALTHMANAGERWINDOW_H
