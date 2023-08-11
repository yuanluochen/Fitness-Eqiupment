#ifndef APPLICATIONWINDOW_H
#define APPLICATIONWINDOW_H

#include <QWidget>

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

private:
    Ui::ApplicationWindow *ui;
};

#endif // APPLICATIONWINDOW_H
