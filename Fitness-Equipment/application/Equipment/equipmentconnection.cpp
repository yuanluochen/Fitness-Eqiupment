#include "equipmentconnection.h"
#include "QSerialPort"
#include "QSerialPortInfo"
#include "QDebug"

equipmentConnection::EquipmentConnection::EquipmentConnection(QObject *parent) : QThread(parent)
{

}

void  equipmentConnection::EquipmentConnection::run()
{
    QStringList allAvailableEquipmentList;
    //搜索可用串口并判断是否存在可用串口
    if (!searchSerialPort(allAvailableEquipmentList))
        qDebug() << "not search equipment, exit EquipmentConnect thread";

    qDebug() << "thread task finished, exit EquipmentConnect thread";

}

/**
 * @brief 搜索可用串口， 将可用串口放入serialPortName中
 * @param serialPortName 存放可用串口名称的链表
 * @return none
 */
bool equipmentConnection::EquipmentConnection::searchSerialPort(QStringList &serialPortName)
{
    //判断是否存在串口
    if (QSerialPortInfo::availablePorts().empty())
    {
        //不存在
        qDebug() << "no available port";
        return false;
    }
    else
    {
        //存在
        qDebug() << "start search serial port";
        for (const QSerialPortInfo &info: QSerialPortInfo::availablePorts())
        {
            //导入列表
            serialPortName << info.portName();
        }
        qDebug() << "search finished, find serial port:" << serialPortName;
        return true;
    }
}
