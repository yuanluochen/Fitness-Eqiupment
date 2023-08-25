#ifndef PACKET_H
#define PACKET_H
#include <cstdint>
#include "userLib/UnitreeMotorSDK_A1Go1_Sup220423/include/unitreeMotor/unitreeMotor.h"
//监测设备接收数据包
class ReceivePack
{
public:
    ReceivePack(){};
    ReceivePack(int16_t GSR, int16_t accelX, int16_t accelY, int16_t accelZ,
                int16_t angularVelocityX, int16_t angularVelocityY, int16_t angularVelocityZ,
                int8_t heartRate, int8_t bloodOxygen){
        this->GSR = GSR;
        this->accelX = accelX;
        this->accelY = accelY;
        this->accelZ = accelZ;
        this->angularVelocityX = angularVelocityX;
        this->angularVelocityY = angularVelocityY;
        this->angularVelocityZ = angularVelocityZ;
        this->heartRate = heartRate;
        this->bloodOxygen = bloodOxygen;
    };
    ReceivePack(const ReceivePack &obj){
        this->accelX = obj.accelX;
        this->accelY = obj.accelY;
        this->accelZ = obj.accelZ;
        this->angularVelocityX = obj.angularVelocityX;
        this->angularVelocityY = obj.angularVelocityY;
        this->angularVelocityZ = obj.angularVelocityZ;
        this->bloodOxygen = obj.bloodOxygen;
        this->GSR = obj.GSR;
        this->heartRate = obj.heartRate;
        this->update = obj.update;
    };
public:
    int16_t GSR;
    //加速度
    int16_t accelX;
    int16_t accelY;
    int16_t accelZ;
    //角速度
    int16_t angularVelocityX;
    int16_t angularVelocityY;
    int16_t angularVelocityZ;
    //心率
    int8_t heartRate;
    //血氧
    int8_t bloodOxygen;
    //更新标志
    bool update;
public:
    bool isSame(ReceivePack &obj){
        return (obj.accelX == this->accelX && obj.accelY == this->accelY && obj.accelZ == this->accelZ &&
                obj.angularVelocityX == this->angularVelocityX && obj.angularVelocityY == this->angularVelocityY && obj.angularVelocityZ == this->angularVelocityZ &&
                obj.bloodOxygen == this->bloodOxygen && obj.GSR == this->GSR && obj.heartRate == this->heartRate && this->update == obj.update);
    };
    bool isUpdate(){
        bool curState = this->update;
        this->update = false;
        return curState;
    };
    void clear(){
        this->accelX = 0;
        this->accelY = 0;
        this->accelZ = 0;
        this->angularVelocityX = 0;
        this->angularVelocityY = 0;
        this->angularVelocityZ = 0;
        this->bloodOxygen = 0;
        this->GSR = 0;
        this->heartRate = 0;
    };
    void assign(const ReceivePack &obj){
        this->accelX = obj.accelX;
        this->accelY = obj.accelY;
        this->accelZ = obj.accelZ;
        this->angularVelocityX = obj.angularVelocityX;
        this->angularVelocityY = obj.angularVelocityY;
        this->angularVelocityZ = obj.angularVelocityZ;
        this->bloodOxygen = obj.bloodOxygen;
        this->GSR = obj.GSR;
        this->heartRate = obj.heartRate;
        this->update = obj.update;
    };
};

// 电机接收数据
class UnitreeReceive
{
public:
    UnitreeReceive() {};
    UnitreeReceive(MOTOR_recv &data)
    {
        this->motor_id = data.motor_id;
        this->motor_id = data.mode;
        this->Temp = data.Temp;
        this->MError = data.MError;

        this->T = data.T;
        this->W = data.W;
        this->LW = data.LW;
        this->Acc = data.Acc;
        this->Pos = data.Pos;
        this->gyro[0] = data.gyro[0]; 
        this->gyro[1] = data.gyro[1]; 
        this->gyro[2] = data.gyro[2]; 
        this->acc[0] = data.acc[0];
        this->acc[1] = data.acc[1];
        this->acc[2] = data.acc[2];
    };

public:
    // 解读得出的电机数据
    unsigned char motor_id; // 电机ID
    unsigned char mode;     // 0:空闲, 5:开环转动, 10:闭环FOC控制
    int Temp;               // 温度
    unsigned char MError;   // 错误码

    float T;   // 当前实际电机输出力矩
    float W;   // 当前实际电机速度（高速）
    float LW;  // 当前实际电机速度（低速）
    int Acc;   // 电机转子加速度
    float Pos; // 当前电机位置（主控0点修正，电机关节还是以编码器0点为准）

    float gyro[3]; // 电机驱动板6轴传感器数据
    float acc[3];
public:
    void assign(MOTOR_recv &data)
    {
        this->motor_id = data.motor_id;
        this->motor_id = data.mode;
        this->Temp = data.Temp;
        this->MError = data.MError;

        this->T = data.T;
        this->W = data.W;
        this->LW = data.LW;
        this->Acc = data.Acc;
        this->Pos = data.Pos;
        this->gyro[0] = data.gyro[0]; 
        this->gyro[1] = data.gyro[1]; 
        this->gyro[2] = data.gyro[2]; 
        this->acc[0] = data.acc[0];
        this->acc[1] = data.acc[1];
        this->acc[2] = data.acc[2];

    }
    void assign(UnitreeReceive &data)
    {
        this->motor_id = data.motor_id;
        this->motor_id = data.mode;
        this->Temp = data.Temp;
        this->MError = data.MError;

        this->T = data.T;
        this->W = data.W;
        this->LW = data.LW;
        this->Acc = data.Acc;
        this->Pos = data.Pos;
        this->gyro[0] = data.gyro[0]; 
        this->gyro[1] = data.gyro[1]; 
        this->gyro[2] = data.gyro[2]; 
        this->acc[0] = data.acc[0];
        this->acc[1] = data.acc[1];
        this->acc[2] = data.acc[2];


    }
};
#endif // PACKET_H
