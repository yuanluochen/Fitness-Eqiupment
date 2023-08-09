#ifndef EQUIPMENTCONNECTION_H
#define EQUIPMENTCONNECTION_H

#include <QObject>
#include <QThread>
#include <cstdint>
#include <QSerialPort>
#include <QSerialPortInfo>


namespace equipmentConnection {

//监测设备数据
namespace montoringEquipment{

//数据头
#define MONTORING_EQUIPMENT_HEADER 0xFA
//数据尾
#define MONTORING_EQUIPMENT_TAIL 0xAF

//监测设备接收数据包
struct receivePack_t
{
    uint8_t header;
    //肌电信号
    uint16_t GSR;
    //加速度
    int16_t accelX;
    int16_t accelY;
    int16_t accelZ;
    //角速度
    int16_t angularVelocityX;
    int16_t angularVelocityY;
    int16_t angularVelocityZ;
    //心率
    uint8_t heartRate;
    //血氧
    uint8_t bloodOxygen;
    //校验和
    uint8_t checkSum;

    uint8_t tail;
}__attribute__((packed));

enum packReceiveStatus_e
{
    UNLOAD, //未读取
    LOAD,	//已读取
};


struct equipmentReceive_t
{
    //数据接收状态
    packReceiveStatus_e receiveStatus;
    receivePack_t receivePackData;
};

}


/**
 * @brief 设备验证状态
 */
enum equipmentCheckState_e
{
    NOT_VALIDATE, //未验证
    VALIDATE,     //验证通过
    PASS,        //未验证通过
};

#define MAX_CHECK_TIME 10000

class EquipmentSearch : public QThread
{
    Q_OBJECT
public:
    explicit EquipmentSearch(QObject *parent = nullptr);
    //搜索可用串口
    bool searchSerialPort(QStringList &serialPortName);
    //设备校验
    void equipmentCheck(QStringList &serialPortList);

private:
    void montorCheck(QString serialPortName);


protected:
    void run() override;

signals:
    //发送验证清单
    void sendMontoringEquipmentList(QStringList equipmentList);


private slots:
    //设备校验
    void montoringEquipmentCheck();
    public:
    //可用监测设备列表
    QStringList availableMontoringEquipmentList;
    //可用健身设备列表
    QStringList availableFitnessEquipmentList;

private:
    //可用设备名称列表
    QStringList availableEquipmentNameList;
    //测试临时串口对象，用于临时验证设备
    QSerialPort *testSerialPort;
    //设备验证状态
    equipmentCheckState_e montoringEquipmentCheckState;
};

}



#endif // EQUIPMENTCONNECTION_H
