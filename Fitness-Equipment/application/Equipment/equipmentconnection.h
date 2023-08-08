#ifndef EQUIPMENTCONNECTION_H
#define EQUIPMENTCONNECTION_H

#include <QObject>
#include <QThread>


namespace equipmentConnection {

class EquipmentConnection : public QThread
{
    Q_OBJECT
public:
    explicit EquipmentConnection(QObject *parent = nullptr);
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
