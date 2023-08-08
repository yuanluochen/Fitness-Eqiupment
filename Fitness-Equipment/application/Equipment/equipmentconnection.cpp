#include "equipmentconnection.h"


#include "QDebug"

/**
 * @brief openEquipment 设备开启函数，输出船
 * @param EquipmentName 设备名称
 * @param baudRate 波特率
 * @param dataBits 数据位
 * @param parity 校验位
 * @param stopBits 停止位
 * @param openMode 串口模式
 */
void openEquipment(QString EquipmentName, qint32 baudRate, QSerialPort::DataBits dataBits, QSerialPort::Parity parity, QSerialPort::StopBits stopBits, QIODevice::OpenMode openMode);


equipmentConnection::EquipmentSearch::EquipmentSearch(QObject *parent) : QThread(parent)
{
}

void  equipmentConnection::EquipmentSearch::run()
{
    QStringList allAvailableEquipmentList;
    //搜索可用串口并判断是否存在可用串口
    if (!searchSerialPort(allAvailableEquipmentList))
        qDebug() << "not search equipment, exit EquipmentConnect thread";

    qDebug() << "thread task finished, exit EquipmentConnect thread";

    //遍历开启串口
    for (QStringList::iterator it = allAvailableEquipmentList.begin(); it != allAvailableEquipmentList.end(); it++)
    {
        qDebug() << "try equipment: >>" << *it << "<<";
        openEquipment(*it, QSerialPort::Baud115200, QSerialPort::Data8, QSerialPort::NoParity, QSerialPort::OneStop, QSerialPort::ReadOnly);
    }


}

/**
 * @brief 搜索可用串口， 将可用串口放入serialPortName中
 * @param serialPortName 存放可用串口名称的链表
 * @return none
 */
bool equipmentConnection::EquipmentSearch::searchSerialPort(QStringList &serialPortName)
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


void openEquipment(QString EquipmentName, qint32 baudRate, QSerialPort::DataBits dataBits, QSerialPort::Parity parity, QSerialPort::StopBits stopBits, QIODevice::OpenMode openMode)
{
    QSerialPort * Equipment = new QSerialPort;
    Equipment->setPortName(EquipmentName);
    Equipment->setBaudRate(baudRate);
    Equipment->setDataBits(dataBits);
    Equipment->setParity(parity);
    Equipment->setStopBits(stopBits);
    if (Equipment->open(openMode))
    {
        qDebug() << "serial port " << EquipmentName << " open";
    }
}
