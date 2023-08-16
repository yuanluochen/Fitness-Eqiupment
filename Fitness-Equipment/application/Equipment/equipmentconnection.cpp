#include "equipmentconnection.h"
#include <QDebug>
#include "userLib/UnitreeMotorSDK_A1Go1_Sup220423/include/serialPort/SerialPort.h"


/**
 * @brief openEquipment 设备开启函数，输出船
 * @brief equipmentSerialPort 设备串口
 * @param equipmentName 设备名称
 * @param baudRate 波特率
 * @param dataBits 数据位
 * @param parity 校验位
 * @param stopBits 停止位
 * @param openMode 串口模式
 */
void openEquipment(QSerialPort* equipmentSerialPort, QString equipmentName, qint32 baudRate, QSerialPort::DataBits dataBits, QSerialPort::Parity parity, QSerialPort::StopBits stopBits, QIODevice::OpenMode openMode);

equipmentConnection::EquipmentSearch::EquipmentSearch(QObject *parent) : QThread(parent)
{
    //初始化状态为未验证
    this->montoringEquipmentCheckState = NOT_VALIDATE;
}

void equipmentConnection::EquipmentSearch::run()
{
    QStringList allAvailableEquipmentList;
    //搜索可用串口并判断是否存在可用串口
    if (!searchSerialPort(allAvailableEquipmentList))
        if (!searchSerialPort(allAvailableEquipmentList))
        qDebug() << "not search equipment, exit EquipmentConnect thread";

    qDebug() << "thread task finished, exit EquipmentConnect thread";

    //设备验证,验证完毕添加到对应的设备清单内
    equipmentCheck(allAvailableEquipmentList);

    //发送可用设备列表
    emit sendMontoringEquipmentList(availableMontoringEquipmentList);

    qDebug() << "search equipment finished";

}

void equipmentConnection::EquipmentSearch::montoringEquipmentCheck()
{
    qDebug() << "montoringEquipment Recdive data";
    QByteArray receiveBuf =  this->testSerialPort->readAll();

    if (!receiveBuf.isEmpty())
    {
        montoringEquipment::receivePack_t tempBuf;
        //数据清空
        memset(&tempBuf, 0, sizeof(montoringEquipment::receivePack_t));
        memcpy(&tempBuf, receiveBuf.data(), sizeof(montoringEquipment::receivePack_t));

        //验证数据
        if (tempBuf.header == MONTORING_EQUIPMENT_HEADER && tempBuf.tail == MONTORING_EQUIPMENT_TAIL)
        {
            //设备验证通过，为监测设备
            this->montoringEquipmentCheckState = VALIDATE;
            qDebug() << "this serial port checked successful";
        }
        else
        {
            //设备不是监测设备，
            this->montoringEquipmentCheckState = PASS;
            qDebug() << "this serial port check fail";
        }
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

/**
 * @brief 设备校验
 * 
 * @param serialPortList  可用串口清单
 */
void equipmentConnection::EquipmentSearch::equipmentCheck(QStringList &serialPortList)
{
    for (QStringList::iterator it = serialPortList.begin(); it != serialPortList.end(); it++)
    {
        qDebug() << "try equipment: >>" << *it << "<<";
        //验证为监测设备
        montorCheck(*it);
    }
    qDebug() << "check finished";
}

/**
 * @brief 监测设备校验
 * 
 * @param serialPortName 串口设备名
 */
void equipmentConnection::EquipmentSearch::montorCheck(QString serialPortName)
{
    //初始化当前设备校验状态为未验证
    this->montoringEquipmentCheckState = NOT_VALIDATE;
    //实例化对象
    this->testSerialPort = new QSerialPort;
    //
    if (this->testSerialPort == nullptr)
    {
        qDebug() << "testSerialPort " << "create fail";
    }

    //开启串口
    openEquipment(this->testSerialPort, serialPortName, MONTORING_BAUD, MONTORING_DATABITS, MONTORING_PARITY, MONTORING_STOPBITS, MONTORING_OPENMODE);
    //连接信号
    QObject::connect(this->testSerialPort, &QSerialPort::readyRead, this, &EquipmentSearch::montoringEquipmentCheck);
    //验证时间
    int checkTime = 0;

    qDebug() << "equipmet check start";

    // 等待验证发生或超过最大验证时间
    while (this->montoringEquipmentCheckState == NOT_VALIDATE && checkTime++ <= MAX_CHECK_TIME)
    
        ;

    if (this->montoringEquipmentCheckState != NOT_VALIDATE)
    {
        //判断设备是否验证通过
        if (this->montoringEquipmentCheckState == VALIDATE)
        {
            //存入可用监测设备列表
            this->availableMontoringEquipmentList << serialPortName;
        }
    }

    if (checkTime >= MAX_CHECK_TIME)
        qDebug() << "not receive anything data from this equipment, check fail";

    //关闭串口
    this->testSerialPort->close();
    //释放内存
    delete this->testSerialPort;
    this->testSerialPort = nullptr;

}

/**
 * @brief 开启设备
 * 
 * @param equipmentSerialPort 串口对象
 * @param equipmentName 串口名
 * @param baudRate 波特率
 * @param dataBits 数据位
 * @param parity 校验位
 * @param stopBits 停止位
 * @param openMode 打开模式
 */
void openEquipment(QSerialPort* equipmentSerialPort, QString equipmentName, qint32 baudRate, QSerialPort::DataBits dataBits, QSerialPort::Parity parity, QSerialPort::StopBits stopBits, QIODevice::OpenMode openMode)
{
    equipmentSerialPort->setPortName(equipmentName);
    equipmentSerialPort->setBaudRate(baudRate);
    equipmentSerialPort->setDataBits(dataBits);
    equipmentSerialPort->setParity(parity);
    equipmentSerialPort->setStopBits(stopBits);
    equipmentSerialPort->setFlowControl(QSerialPort::NoFlowControl);
    
    

    if (equipmentSerialPort->open(openMode) == true)
    {
        qDebug() << "open " << "serial port " << equipmentName << "successful";
    }
    else
    {
        qDebug() << "open " << "serial port " << equipmentName << "fail";
    }
}


equipmentConnection::MontoringEquipmentThread::MontoringEquipmentThread(QString equipmentName, QObject *parent) : QThread(parent)
{
    this->equipment = new QSerialPort;
    //开辟串口
    openEquipment(this->equipment, equipmentName,  MONTORING_BAUD, MONTORING_DATABITS, MONTORING_PARITY, MONTORING_STOPBITS, MONTORING_OPENMODE);
    //连接串口接收槽
    QObject::connect(equipment, &QSerialPort::readyRead, this, &MontoringEquipmentThread::receivePack);
}

equipmentConnection::MontoringEquipmentThread::~MontoringEquipmentThread()
{
    if (equipment != nullptr)
    {
        //关闭串口
        this->equipment->close();
        delete this->equipment;
        this->equipment = nullptr;
    }
}

void equipmentConnection::MontoringEquipmentThread::run()
{
    qDebug() << "montoring equipment thread start";
    while(1)
    {
        ;
    }
}

void equipmentConnection::MontoringEquipmentThread::receivePack()
{
	QByteArray receiveBuf = equipment->readAll();
    if (!receiveBuf.isEmpty())
    {
        montoringEquipment::receivePack_t tempPack;
        memset(&tempPack, 0, sizeof(montoringEquipment::receivePack_t));
        //数据存放暂存区
        memcpy(&tempPack, receiveBuf.data(), sizeof(montoringEquipment::receivePack_t));
       	
        if (tempPack.header == MONTORING_EQUIPMENT_HEADER && tempPack.tail == MONTORING_EQUIPMENT_TAIL)
        {
            if (checkPack(tempPack))
            {
                memcpy(&this->receiveData, &tempPack, sizeof(equipmentConnection::montoringEquipment::receivePack_t));
                //上传数据
                emit sendReceivePack(this->receiveData);
            }
        }
    }
}

bool equipmentConnection::MontoringEquipmentThread::checkPack(const montoringEquipment::receivePack_t &recvPack)
{
    //除去头尾其他数据相将加
    int32_t sumVal = recvPack.GSR + recvPack.accelX + recvPack.accelY + recvPack.accelZ + recvPack.heartRate + recvPack.bloodOxygen + recvPack.angularVelocityX + recvPack.angularVelocityY + recvPack.angularVelocityZ;
    //数据提取
    int32_to_int8 valSwitch;
    valSwitch.int32Data = sumVal;
    //提取低8位数据与校验数据比较
    return (valSwitch.int8Data[0] == recvPack.checkSum);
}
