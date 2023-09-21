/****************************************************************************
** Meta object code from reading C++ file 'server_mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../server/server_mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server_mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "onConnectButtonClicked",
    "",
    "onStateChanged",
    "state",
    "coilChanged",
    "id",
    "discreteInputChanged",
    "bitChanged",
    "QModbusDataUnit::RegisterType",
    "table",
    "value",
    "setRegister",
    "updateWidgets",
    "address",
    "size",
    "onCurrentConnectTypeChanged",
    "handleDeviceError",
    "QModbusDevice::Error",
    "newError"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[40];
    char stringdata0[11];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[6];
    char stringdata5[12];
    char stringdata6[3];
    char stringdata7[21];
    char stringdata8[11];
    char stringdata9[30];
    char stringdata10[6];
    char stringdata11[6];
    char stringdata12[12];
    char stringdata13[14];
    char stringdata14[8];
    char stringdata15[5];
    char stringdata16[28];
    char stringdata17[18];
    char stringdata18[21];
    char stringdata19[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 22),  // "onConnectButtonClicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 14),  // "onStateChanged"
        QT_MOC_LITERAL(50, 5),  // "state"
        QT_MOC_LITERAL(56, 11),  // "coilChanged"
        QT_MOC_LITERAL(68, 2),  // "id"
        QT_MOC_LITERAL(71, 20),  // "discreteInputChanged"
        QT_MOC_LITERAL(92, 10),  // "bitChanged"
        QT_MOC_LITERAL(103, 29),  // "QModbusDataUnit::RegisterType"
        QT_MOC_LITERAL(133, 5),  // "table"
        QT_MOC_LITERAL(139, 5),  // "value"
        QT_MOC_LITERAL(145, 11),  // "setRegister"
        QT_MOC_LITERAL(157, 13),  // "updateWidgets"
        QT_MOC_LITERAL(171, 7),  // "address"
        QT_MOC_LITERAL(179, 4),  // "size"
        QT_MOC_LITERAL(184, 27),  // "onCurrentConnectTypeChanged"
        QT_MOC_LITERAL(212, 17),  // "handleDeviceError"
        QT_MOC_LITERAL(230, 20),  // "QModbusDevice::Error"
        QT_MOC_LITERAL(251, 8)   // "newError"
    },
    "MainWindow",
    "onConnectButtonClicked",
    "",
    "onStateChanged",
    "state",
    "coilChanged",
    "id",
    "discreteInputChanged",
    "bitChanged",
    "QModbusDataUnit::RegisterType",
    "table",
    "value",
    "setRegister",
    "updateWidgets",
    "address",
    "size",
    "onCurrentConnectTypeChanged",
    "handleDeviceError",
    "QModbusDevice::Error",
    "newError"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    1,   69,    2, 0x08,    2 /* Private */,
       5,    1,   72,    2, 0x08,    4 /* Private */,
       7,    1,   75,    2, 0x08,    6 /* Private */,
       8,    3,   78,    2, 0x08,    8 /* Private */,
      12,    1,   85,    2, 0x08,   12 /* Private */,
      13,    3,   88,    2, 0x08,   14 /* Private */,
      16,    1,   95,    2, 0x08,   18 /* Private */,
      17,    1,   98,    2, 0x08,   20 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9, QMetaType::Bool,    6,   10,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Int,   10,   14,   15,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'onConnectButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'coilChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'discreteInputChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'bitChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModbusDataUnit::RegisterType, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setRegister'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'updateWidgets'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModbusDataUnit::RegisterType, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onCurrentConnectTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'handleDeviceError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModbusDevice::Error, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onConnectButtonClicked(); break;
        case 1: _t->onStateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->coilChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->discreteInputChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->bitChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModbusDataUnit::RegisterType>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 5: _t->setRegister((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->updateWidgets((*reinterpret_cast< std::add_pointer_t<QModbusDataUnit::RegisterType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 7: _t->onCurrentConnectTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->handleDeviceError((*reinterpret_cast< std::add_pointer_t<QModbusDevice::Error>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModbusDataUnit::RegisterType >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModbusDataUnit::RegisterType >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
