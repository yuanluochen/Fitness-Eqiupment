/****************************************************************************
** Meta object code from reading C++ file 'sportwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Fitness-Equipment/ui/sportwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sportwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SportWindow_t {
    QByteArrayData data[13];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SportWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SportWindow_t qt_meta_stringdata_SportWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SportWindow"
QT_MOC_LITERAL(1, 12, 23), // "on_returnBefore_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 27), // "on_searchPushButton_clicked"
QT_MOC_LITERAL(4, 65, 31), // "on_startSportPushButton_clicked"
QT_MOC_LITERAL(5, 97, 30), // "on_stopSportPushButton_clicked"
QT_MOC_LITERAL(6, 128, 13), // "montorReceive"
QT_MOC_LITERAL(7, 142, 4), // "data"
QT_MOC_LITERAL(8, 147, 11), // "montorCheck"
QT_MOC_LITERAL(9, 159, 40), // "on_sportStrengthReducePushBut..."
QT_MOC_LITERAL(10, 200, 38), // "on_sportTargetReducePushButto..."
QT_MOC_LITERAL(11, 239, 39), // "on_sportTargetPromotePushButt..."
QT_MOC_LITERAL(12, 279, 41) // "on_sportStrengthPromotePushBu..."

    },
    "SportWindow\0on_returnBefore_clicked\0"
    "\0on_searchPushButton_clicked\0"
    "on_startSportPushButton_clicked\0"
    "on_stopSportPushButton_clicked\0"
    "montorReceive\0data\0montorCheck\0"
    "on_sportStrengthReducePushButton_clicked\0"
    "on_sportTargetReducePushButton_clicked\0"
    "on_sportTargetPromotePushButton_clicked\0"
    "on_sportStrengthPromotePushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SportWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SportWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SportWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_returnBefore_clicked(); break;
        case 1: _t->on_searchPushButton_clicked(); break;
        case 2: _t->on_startSportPushButton_clicked(); break;
        case 3: _t->on_stopSportPushButton_clicked(); break;
        case 4: _t->montorReceive((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->montorCheck(); break;
        case 6: _t->on_sportStrengthReducePushButton_clicked(); break;
        case 7: _t->on_sportTargetReducePushButton_clicked(); break;
        case 8: _t->on_sportTargetPromotePushButton_clicked(); break;
        case 9: _t->on_sportStrengthPromotePushButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SportWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SportWindow.data,
    qt_meta_data_SportWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SportWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SportWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SportWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SportWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
