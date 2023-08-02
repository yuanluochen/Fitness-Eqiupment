#ifndef MANUALWINDOW_H
#define MANUALWINDOW_H

#include <QWidget>

namespace Ui {
class ManualWindow;
}

class ManualWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ManualWindow(QWidget *parent = nullptr);
    ~ManualWindow();

private slots:
    void on_returnBefore_clicked();

private:
    Ui::ManualWindow *ui;
};

#endif // MANUALWINDOW_H
