#include "userLib/userLib_ui.h"
#include <QString>

HighFrequency::HighFrequency()
{
    for (int i = 0; i < HIGH_FREQUENCY_NUM; i++)
    {
        this->val[i] = 0;
    }    
    this->input = 0;
    this->output = 0;
}

//计算高频信号
float HighFrequency::calcHighFrequency(float input)
{
    //数值覆盖
    for (int i = HIGH_FREQUENCY_NUM; i > 0; i--)
    {
        this->val[i] = this->val[i - 1];
    }
    this->val[0] = input;

    float sum = 0;
    for (int i = 0; i < HIGH_FREQUENCY_NUM; i++)
    {
        sum += this->val[i];
    }
    float average = sum / HIGH_FREQUENCY_NUM;
    //获取高频分量
    this->output = this->val[(HIGH_FREQUENCY_NUM / 2) + 1] - average;
    return this->output;
}