#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    // w.show();
    //显示最大窗口
    w.showMaximized();
    return a.exec();
}
