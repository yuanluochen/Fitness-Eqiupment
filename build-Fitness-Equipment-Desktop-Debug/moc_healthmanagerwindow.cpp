/****************************************************************************
** Meta object code from reading C++ file 'healthmanagerwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Fitness-Equipment/ui/healthmanagerwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'healthmanagerwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HealthManagerWindow_t {
    QByteArrayData data[16];
    char stringdata0[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HealthManagerWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HealthManagerWindow_t qt_meta_stringdata_HealthManagerWindow = {
    {
QT_MOC_LITERAL(0, 0, 19), // "HealthManagerWindow"
QT_MOC_LITERAL(1, 20, 17), // "backToApplication"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "goToSportWindow"
QT_MOC_LITERAL(4, 55, 11), // "sportTarget"
QT_MOC_LITERAL(5, 67, 13), // "sportStrength"
QT_MOC_LITERAL(6, 81, 23), // "on_returnBefore_clicked"
QT_MOC_LITERAL(7, 105, 13), // "montorReceive"
QT_MOC_LITERAL(8, 119, 11), // "ReceivePack"
QT_MOC_LITERAL(9, 131, 11), // "receivePack"
QT_MOC_LITERAL(10, 143, 22), // "montorConnectDetection"
QT_MOC_LITERAL(11, 166, 31), // "on_listWidget_currentRowChanged"
QT_MOC_LITERAL(12, 198, 10), // "currentRow"
QT_MOC_LITERAL(13, 209, 39), // "on_heartRateDetectionPushbutt..."
QT_MOC_LITERAL(14, 249, 34), // "on_saO2DetectionPushButton_cl..."
QT_MOC_LITERAL(15, 284, 37) // "on_FitnessDetectionPushButton..."

    },
    "HealthManagerWindow\0backToApplication\0"
    "\0goToSportWindow\0sportTarget\0sportStrength\0"
    "on_returnBefore_clicked\0montorReceive\0"
    "ReceivePack\0receivePack\0montorConnectDetection\0"
    "on_listWidget_currentRowChanged\0"
    "currentRow\0on_heartRateDetectionPushbutton_clicked\0"
    "on_saO2DetectionPushButton_clicked\0"
    "on_FitnessDetectionPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HealthManagerWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    2,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   65,    2, 0x08 /* Private */,
       7,    1,   66,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    1,   70,    2, 0x08 /* Private */,
      13,    0,   73,    2, 0x08 /* Private */,
      14,    0,   74,    2, 0x08 /* Private */,
      15,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HealthManagerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HealthManagerWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backToApplication(); break;
        case 1: _t->goToSportWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_returnBefore_clicked(); break;
        case 3: _t->montorReceive((*reinterpret_cast< ReceivePack(*)>(_a[1]))); break;
        case 4: _t->montorConnectDetection(); break;
        case 5: _t->on_listWidget_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_heartRateDetectionPushbutton_clicked(); break;
        case 7: _t->on_saO2DetectionPushButton_clicked(); break;
        case 8: _t->on_FitnessDetectionPushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HealthManagerWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HealthManagerWindow::backToApplication)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HealthManagerWindow::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HealthManagerWindow::goToSportWindow)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HealthManagerWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HealthManagerWindow.data,
    qt_meta_data_HealthManagerWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HealthManagerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HealthManagerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HealthManagerWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HealthManagerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void HealthManagerWindow::backToApplication()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void HealthManagerWindow::goToSportWindow(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
