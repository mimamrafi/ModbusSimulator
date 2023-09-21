/****************************************************************************
** Meta object code from reading C++ file 'clientwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ModbusSimulator/src/clientwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSClientWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSClientWindowENDCLASS = QtMocHelpers::stringData(
    "ClientWindow",
    "onConnectButtonClicked",
    "",
    "onModbusStateChanged",
    "state",
    "onReadButtonClicked",
    "onReadReady",
    "onWriteButtonClicked",
    "onReadWriteButtonClicked",
    "onConnectTypeChanged",
    "onWriteTableChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClientWindowENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[13];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[6];
    char stringdata5[20];
    char stringdata6[12];
    char stringdata7[21];
    char stringdata8[25];
    char stringdata9[21];
    char stringdata10[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClientWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClientWindowENDCLASS_t qt_meta_stringdata_CLASSClientWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "ClientWindow"
        QT_MOC_LITERAL(13, 22),  // "onConnectButtonClicked"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 20),  // "onModbusStateChanged"
        QT_MOC_LITERAL(58, 5),  // "state"
        QT_MOC_LITERAL(64, 19),  // "onReadButtonClicked"
        QT_MOC_LITERAL(84, 11),  // "onReadReady"
        QT_MOC_LITERAL(96, 20),  // "onWriteButtonClicked"
        QT_MOC_LITERAL(117, 24),  // "onReadWriteButtonClicked"
        QT_MOC_LITERAL(142, 20),  // "onConnectTypeChanged"
        QT_MOC_LITERAL(163, 19)   // "onWriteTableChanged"
    },
    "ClientWindow",
    "onConnectButtonClicked",
    "",
    "onModbusStateChanged",
    "state",
    "onReadButtonClicked",
    "onReadReady",
    "onWriteButtonClicked",
    "onReadWriteButtonClicked",
    "onConnectTypeChanged",
    "onWriteTableChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClientWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    1,   63,    2, 0x08,    2 /* Private */,
       5,    0,   66,    2, 0x08,    4 /* Private */,
       6,    0,   67,    2, 0x08,    5 /* Private */,
       7,    0,   68,    2, 0x08,    6 /* Private */,
       8,    0,   69,    2, 0x08,    7 /* Private */,
       9,    1,   70,    2, 0x08,    8 /* Private */,
      10,    1,   73,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject ClientWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSClientWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClientWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClientWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClientWindow, std::true_type>,
        // method 'onConnectButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onModbusStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onReadButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReadReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWriteButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReadWriteButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConnectTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onWriteTableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void ClientWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onConnectButtonClicked(); break;
        case 1: _t->onModbusStateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->onReadButtonClicked(); break;
        case 3: _t->onReadReady(); break;
        case 4: _t->onWriteButtonClicked(); break;
        case 5: _t->onReadWriteButtonClicked(); break;
        case 6: _t->onConnectTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->onWriteTableChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ClientWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClientWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ClientWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
