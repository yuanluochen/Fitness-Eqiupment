/****************************************************************************
** Meta object code from reading C++ file 'equipmentconnect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Fitness-Equipment/ui/equipmentconnect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'equipmentconnect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EquipmentConnect_t {
    QByteArrayData data[16];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EquipmentConnect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EquipmentConnect_t qt_meta_stringdata_EquipmentConnect = {
    {
QT_MOC_LITERAL(0, 0, 16), // "EquipmentConnect"
QT_MOC_LITERAL(1, 17, 27), // "sendMontorDataToSportWindow"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 11), // "ReceivePack"
QT_MOC_LITERAL(4, 58, 11), // "receivePack"
QT_MOC_LITERAL(5, 70, 35), // "sendMontorDataToHealthManager..."
QT_MOC_LITERAL(6, 106, 33), // "sendUnitreeMotorDataToSportWi..."
QT_MOC_LITERAL(7, 140, 14), // "UnitreeReceive"
QT_MOC_LITERAL(8, 155, 13), // "montorReceive"
QT_MOC_LITERAL(9, 169, 4), // "data"
QT_MOC_LITERAL(10, 174, 19), // "UnitreeMotorReceive"
QT_MOC_LITERAL(11, 194, 21), // "checkEquipmentConnect"
QT_MOC_LITERAL(12, 216, 27), // "on_searchPushButton_clicked"
QT_MOC_LITERAL(13, 244, 22), // "getAvailableSerialPort"
QT_MOC_LITERAL(14, 267, 23), // "connectFitnessEquipment"
QT_MOC_LITERAL(15, 291, 10) // "serialPort"

    },
    "EquipmentConnect\0sendMontorDataToSportWindow\0"
    "\0ReceivePack\0receivePack\0"
    "sendMontorDataToHealthManagerWindow\0"
    "sendUnitreeMotorDataToSportWindow\0"
    "UnitreeReceive\0montorReceive\0data\0"
    "UnitreeMotorReceive\0checkEquipmentConnect\0"
    "on_searchPushButton_clicked\0"
    "getAvailableSerialPort\0connectFitnessEquipment\0"
    "serialPort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EquipmentConnect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   68,    2, 0x08 /* Private */,
      10,    1,   71,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    0,   76,    2, 0x08 /* Private */,
      14,    1,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void, 0x80000000 | 7,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Bool, QMetaType::QString,   15,

       0        // eod
};

void EquipmentConnect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EquipmentConnect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMontorDataToSportWindow((*reinterpret_cast< ReceivePack(*)>(_a[1]))); break;
        case 1: _t->sendMontorDataToHealthManagerWindow((*reinterpret_cast< ReceivePack(*)>(_a[1]))); break;
        case 2: _t->sendUnitreeMotorDataToSportWindow((*reinterpret_cast< UnitreeReceive(*)>(_a[1]))); break;
        case 3: _t->montorReceive((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: _t->UnitreeMotorReceive((*reinterpret_cast< UnitreeReceive(*)>(_a[1]))); break;
        case 5: _t->checkEquipmentConnect(); break;
        case 6: _t->on_searchPushButton_clicked(); break;
        case 7: { QStringList _r = _t->getAvailableSerialPort();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->connectFitnessEquipment((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EquipmentConnect::*)(ReceivePack );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EquipmentConnect::sendMontorDataToSportWindow)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EquipmentConnect::*)(ReceivePack );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EquipmentConnect::sendMontorDataToHealthManagerWindow)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EquipmentConnect::*)(UnitreeReceive );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EquipmentConnect::sendUnitreeMotorDataToSportWindow)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EquipmentConnect::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EquipmentConnect.data,
    qt_meta_data_EquipmentConnect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EquipmentConnect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EquipmentConnect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EquipmentConnect.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EquipmentConnect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void EquipmentConnect::sendMontorDataToSportWindow(ReceivePack _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EquipmentConnect::sendMontorDataToHealthManagerWindow(ReceivePack _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EquipmentConnect::sendUnitreeMotorDataToSportWindow(UnitreeReceive _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
