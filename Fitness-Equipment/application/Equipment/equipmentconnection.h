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


//监测设备接收数据包
struct receivePack
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

}

class EquipmentSearch : public QThread
{
    Q_OBJECT
public:
    explicit EquipmentSearch(QObject *parent = nullptr);
    //搜索可用串口
    bool searchSerialPort(QStringList &serialPortName);
protected:
    void run() override;

signals:
    void sendAvailableEquipmentNameList(QStringList availableEquipmentNameList);

private:
    //可用设备名称列表
    QStringList availableEquipmentNameList;
};

}



#endif // EQUIPMENTCONNECTION_H
