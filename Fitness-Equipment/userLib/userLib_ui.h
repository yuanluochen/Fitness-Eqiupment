#ifndef USERLIB_UI_H
#define USERLIB_UI_H

#include <QDebug>
#include <QTime>

#define HIGH_FREQUENCY_NUM 9

// 创建新窗口
#define CREATE_NEW_WINDOW(newType, curPoint)                                         \
{                                                                                    \
    curPoint->close();                                                               \
    newType *newPoint = new newType;                                                 \
    newPoint->setGeometry(curPoint->geometry());                                     \
    newPoint->show();                                                                \
    qDebug() << QTime::currentTime() << "close current window and cteate new window";\
}                                                                                    \

class HighFrequency
{
public:
    HighFrequency();
private:
    float val[HIGH_FREQUENCY_NUM];
    float input; 
    float output;
public:
    float calcHighFrequency(float input);
    
};

#endif // USERLIB_UI_H
