/****************************************************************************
** Meta object code from reading C++ file 'receiver_interface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UI/receiver_interface.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'receiver_interface.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSReceiver_interfaceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSReceiver_interfaceENDCLASS = QtMocHelpers::stringData(
    "Receiver_interface",
    "on_Straight_Decode_Button_clicked",
    "",
    "on_plainTextEdit_textChanged",
    "on_Code_Decode_Button_clicked",
    "on_Change_Button_clicked",
    "on_Load_Tree_Button_clicked",
    "on_Close_Button_clicked",
    "on_Hide_Button_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSReceiver_interfaceENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[19];
    char stringdata1[34];
    char stringdata2[1];
    char stringdata3[29];
    char stringdata4[30];
    char stringdata5[25];
    char stringdata6[28];
    char stringdata7[24];
    char stringdata8[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSReceiver_interfaceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSReceiver_interfaceENDCLASS_t qt_meta_stringdata_CLASSReceiver_interfaceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "Receiver_interface"
        QT_MOC_LITERAL(19, 33),  // "on_Straight_Decode_Button_cli..."
        QT_MOC_LITERAL(53, 0),  // ""
        QT_MOC_LITERAL(54, 28),  // "on_plainTextEdit_textChanged"
        QT_MOC_LITERAL(83, 29),  // "on_Code_Decode_Button_clicked"
        QT_MOC_LITERAL(113, 24),  // "on_Change_Button_clicked"
        QT_MOC_LITERAL(138, 27),  // "on_Load_Tree_Button_clicked"
        QT_MOC_LITERAL(166, 23),  // "on_Close_Button_clicked"
        QT_MOC_LITERAL(190, 22)   // "on_Hide_Button_clicked"
    },
    "Receiver_interface",
    "on_Straight_Decode_Button_clicked",
    "",
    "on_plainTextEdit_textChanged",
    "on_Code_Decode_Button_clicked",
    "on_Change_Button_clicked",
    "on_Load_Tree_Button_clicked",
    "on_Close_Button_clicked",
    "on_Hide_Button_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSReceiver_interfaceENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Receiver_interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSReceiver_interfaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSReceiver_interfaceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSReceiver_interfaceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Receiver_interface, std::true_type>,
        // method 'on_Straight_Decode_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_plainTextEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Code_Decode_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Change_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Load_Tree_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Close_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Hide_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Receiver_interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Receiver_interface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Straight_Decode_Button_clicked(); break;
        case 1: _t->on_plainTextEdit_textChanged(); break;
        case 2: _t->on_Code_Decode_Button_clicked(); break;
        case 3: _t->on_Change_Button_clicked(); break;
        case 4: _t->on_Load_Tree_Button_clicked(); break;
        case 5: _t->on_Close_Button_clicked(); break;
        case 6: _t->on_Hide_Button_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Receiver_interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Receiver_interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSReceiver_interfaceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Receiver_interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
