#ifndef SPORTWINDOW_H
#define SPORTWINDOW_H

#include <QWidget>

namespace Ui {
class SportWindow;
}

class SportWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SportWindow(QWidget *parent = nullptr);
    ~SportWindow();

private slots:
    void on_returnBefore_clicked();

    void on_searchPushButton_clicked();

private:
    Ui::SportWindow *ui;
};

#endif // SPORTWINDOW_H
