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
    QByteArrayData data[14];
    char stringdata0[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SportWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SportWindow_t qt_meta_stringdata_SportWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SportWindow"
QT_MOC_LITERAL(1, 12, 17), // "backToApplication"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "on_returnBefore_clicked"
QT_MOC_LITERAL(4, 55, 27), // "on_searchPushButton_clicked"
QT_MOC_LITERAL(5, 83, 31), // "on_startSportPushButton_clicked"
QT_MOC_LITERAL(6, 115, 30), // "on_stopSportPushButton_clicked"
QT_MOC_LITERAL(7, 146, 13), // "montorReceive"
QT_MOC_LITERAL(8, 160, 4), // "data"
QT_MOC_LITERAL(9, 165, 11), // "montorCheck"
QT_MOC_LITERAL(10, 177, 40), // "on_sportStrengthReducePushBut..."
QT_MOC_LITERAL(11, 218, 38), // "on_sportTargetReducePushButto..."
QT_MOC_LITERAL(12, 257, 39), // "on_sportTargetPromotePushButt..."
QT_MOC_LITERAL(13, 297, 41) // "on_sportStrengthPromotePushBu..."

    },
    "SportWindow\0backToApplication\0\0"
    "on_returnBefore_clicked\0"
    "on_searchPushButton_clicked\0"
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
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    8,
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
        case 0: _t->backToApplication(); break;
        case 1: _t->on_returnBefore_clicked(); break;
        case 2: _t->on_searchPushButton_clicked(); break;
        case 3: _t->on_startSportPushButton_clicked(); break;
        case 4: _t->on_stopSportPushButton_clicked(); break;
        case 5: _t->montorReceive((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->montorCheck(); break;
        case 7: _t->on_sportStrengthReducePushButton_clicked(); break;
        case 8: _t->on_sportTargetReducePushButton_clicked(); break;
        case 9: _t->on_sportTargetPromotePushButton_clicked(); break;
        case 10: _t->on_sportStrengthPromotePushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SportWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SportWindow::backToApplication)) {
                *result = 0;
                return;
            }
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SportWindow::backToApplication()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
