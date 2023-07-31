#ifndef SPORTWINDOWS_H
#define SPORTWINDOWS_H

#include <QWidget>

namespace Ui {
class SportWindows;
}

class SportWindows : public QWidget
{
    Q_OBJECT

public:
    explicit SportWindows(QWidget *parent = nullptr);
    ~SportWindows();

private:
    Ui::SportWindows *ui;
};

#endif // SPORTWINDOWS_H
