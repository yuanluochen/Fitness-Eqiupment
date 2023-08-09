/****************************************************************************
** Meta object code from reading C++ file 'equipmentconnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Fitness-Equipment/application/Equipment/equipmentconnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'equipmentconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_equipmentConnection__EquipmentSearch_t {
    QByteArrayData data[5];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_equipmentConnection__EquipmentSearch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_equipmentConnection__EquipmentSearch_t qt_meta_stringdata_equipmentConnection__EquipmentSearch = {
    {
QT_MOC_LITERAL(0, 0, 36), // "equipmentConnection::Equipmen..."
QT_MOC_LITERAL(1, 37, 26), // "sendMontoringEquipmentList"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 13), // "equipmentList"
QT_MOC_LITERAL(4, 79, 23) // "montoringEquipmentCheck"

    },
    "equipmentConnection::EquipmentSearch\0"
    "sendMontoringEquipmentList\0\0equipmentList\0"
    "montoringEquipmentCheck"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_equipmentConnection__EquipmentSearch[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void equipmentConnection::EquipmentSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EquipmentSearch *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMontoringEquipmentList((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->montoringEquipmentCheck(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EquipmentSearch::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EquipmentSearch::sendMontoringEquipmentList)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject equipmentConnection::EquipmentSearch::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_equipmentConnection__EquipmentSearch.data,
    qt_meta_data_equipmentConnection__EquipmentSearch,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *equipmentConnection::EquipmentSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *equipmentConnection::EquipmentSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_equipmentConnection__EquipmentSearch.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int equipmentConnection::EquipmentSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void equipmentConnection::EquipmentSearch::sendMontoringEquipmentList(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
