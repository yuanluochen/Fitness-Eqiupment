#ifndef USERLIB_UI_H
#define USERLIB_UI_H

// 创建新窗口
#define CREATE_NEW_WINDOW(newType, curPoint)                 \
{                                                            \
    curPoint->close();                                       \
    newType *newPoint = new newType;                         \
    newPoint->setGeometry(curPoint->geometry());             \
    newPoint->show();                                        \
    qDebug("close current window and cteate new window");    \
}                                                            \


#endif // USERLIB_UI_H
