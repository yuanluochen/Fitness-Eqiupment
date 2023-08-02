#ifndef USERLIB_UI_H
#define USERLIB_UI_H

// 创建新窗口
#define CREATE_NEW_WINDOW(newType, curPoint)     \
{                                                \
    newType *newPoint = new newType;             \
    newPoint->setGeometry(curPoint->geometry()); \
    curPoint->close();                           \
    newPoint->show();                            \
}                                                \


#endif // USERLIB_UI_H
