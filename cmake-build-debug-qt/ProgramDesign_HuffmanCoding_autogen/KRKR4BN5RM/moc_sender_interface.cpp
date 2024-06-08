/****************************************************************************
** Meta object code from reading C++ file 'sender_interface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UI/sender_interface.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sender_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
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
struct qt_meta_stringdata_CLASSSender_interfaceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSender_interfaceENDCLASS = QtMocHelpers::stringData(
    "Sender_interface",
    "on_Close_Button_clicked",
    "",
    "on_Hide_Button_clicked",
    "on_Straight_Encode_Button_clicked",
    "on_plainTextEdit_textChanged",
    "on_Data_Encode_Button_clicked",
    "on_Open_FileFolder_clicked",
    "on_Change_Button_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSender_interfaceENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[17];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[34];
    char stringdata5[29];
    char stringdata6[30];
    char stringdata7[27];
    char stringdata8[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSender_interfaceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSender_interfaceENDCLASS_t qt_meta_stringdata_CLASSSender_interfaceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "Sender_interface"
        QT_MOC_LITERAL(17, 23),  // "on_Close_Button_clicked"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 22),  // "on_Hide_Button_clicked"
        QT_MOC_LITERAL(65, 33),  // "on_Straight_Encode_Button_cli..."
        QT_MOC_LITERAL(99, 28),  // "on_plainTextEdit_textChanged"
        QT_MOC_LITERAL(128, 29),  // "on_Data_Encode_Button_clicked"
        QT_MOC_LITERAL(158, 26),  // "on_Open_FileFolder_clicked"
        QT_MOC_LITERAL(185, 24)   // "on_Change_Button_clicked"
    },
    "Sender_interface",
    "on_Close_Button_clicked",
    "",
    "on_Hide_Button_clicked",
    "on_Straight_Encode_Button_clicked",
    "on_plainTextEdit_textChanged",
    "on_Data_Encode_Button_clicked",
    "on_Open_FileFolder_clicked",
    "on_Change_Button_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSender_interfaceENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Sender_interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSSender_interfaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSender_interfaceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSender_interfaceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Sender_interface, std::true_type>,
        // method 'on_Close_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Hide_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Straight_Encode_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_plainTextEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Data_Encode_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Open_FileFolder_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Change_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Sender_interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Sender_interface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Close_Button_clicked(); break;
        case 1: _t->on_Hide_Button_clicked(); break;
        case 2: _t->on_Straight_Encode_Button_clicked(); break;
        case 3: _t->on_plainTextEdit_textChanged(); break;
        case 4: _t->on_Data_Encode_Button_clicked(); break;
        case 5: _t->on_Open_FileFolder_clicked(); break;
        case 6: _t->on_Change_Button_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Sender_interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sender_interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSender_interfaceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Sender_interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
