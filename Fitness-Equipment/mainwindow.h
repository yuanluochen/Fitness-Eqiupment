#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui/applicationwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_enterSystem_clicked();
    
    void applicationBackToMain();
private:
    Ui::MainWindow *ui;
    ApplicationWindow *applicationWindow;
};
#endif // MAINWINDOW_H
