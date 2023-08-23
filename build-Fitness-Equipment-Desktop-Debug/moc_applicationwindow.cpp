/****************************************************************************
** Meta object code from reading C++ file 'applicationwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Fitness-Equipment/ui/applicationwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'applicationwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApplicationWindow_t {
    QByteArrayData data[11];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApplicationWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApplicationWindow_t qt_meta_stringdata_ApplicationWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ApplicationWindow"
QT_MOC_LITERAL(1, 18, 10), // "backToMain"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 23), // "on_returnBefore_clicked"
QT_MOC_LITERAL(4, 54, 26), // "on_sportPushButton_clicked"
QT_MOC_LITERAL(5, 81, 27), // "on_manualPushbutton_clicked"
QT_MOC_LITERAL(6, 109, 34), // "on_healthManagerPushButton_cl..."
QT_MOC_LITERAL(7, 144, 37), // "on_equipmentConnectPushButton..."
QT_MOC_LITERAL(8, 182, 30), // "healthManagerBackToApplication"
QT_MOC_LITERAL(9, 213, 23), // "manualBackToApplication"
QT_MOC_LITERAL(10, 237, 22) // "sportBackToApplication"

    },
    "ApplicationWindow\0backToMain\0\0"
    "on_returnBefore_clicked\0"
    "on_sportPushButton_clicked\0"
    "on_manualPushbutton_clicked\0"
    "on_healthManagerPushButton_clicked\0"
    "on_equipmentConnectPushButton_clicked\0"
    "healthManagerBackToApplication\0"
    "manualBackToApplication\0sportBackToApplication"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApplicationWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ApplicationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ApplicationWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backToMain(); break;
        case 1: _t->on_returnBefore_clicked(); break;
        case 2: _t->on_sportPushButton_clicked(); break;
        case 3: _t->on_manualPushbutton_clicked(); break;
        case 4: _t->on_healthManagerPushButton_clicked(); break;
        case 5: _t->on_equipmentConnectPushButton_clicked(); break;
        case 6: _t->healthManagerBackToApplication(); break;
        case 7: _t->manualBackToApplication(); break;
        case 8: _t->sportBackToApplication(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ApplicationWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApplicationWindow::backToMain)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ApplicationWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ApplicationWindow.data,
    qt_meta_data_ApplicationWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ApplicationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApplicationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApplicationWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ApplicationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ApplicationWindow::backToMain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
