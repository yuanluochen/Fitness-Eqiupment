#ifndef APPLICATIONWINDOWS_H
#define APPLICATIONWINDOWS_H

#include <QWidget>

namespace Ui {
class Application;
}

class ApplicationWindows : public QWidget
{
    Q_OBJECT

public:
    explicit ApplicationWindows(QWidget *parent = nullptr);
    ~ApplicationWindows();

private slots:
    void on_returnBefore_clicked();

private:
    Ui::Application *ui;
};

#endif // APPLICATIONWINDOWS_H
