#ifndef EQUIPSETTINGWINDOW_H
#define EQUIPSETTINGWINDOW_H

#include <QWidget>

namespace Ui {
class EquipSettingWindow;
}

class EquipSettingWindow : public QWidget
{
    Q_OBJECT

public:
    explicit EquipSettingWindow(QWidget *parent = nullptr);
    ~EquipSettingWindow();

private slots:
    void on_returnBefore_clicked();

    void on_pushButton_clicked();

private:
    Ui::EquipSettingWindow *ui;
};

#endif // EQUIPSETTINGWINDOW_H
