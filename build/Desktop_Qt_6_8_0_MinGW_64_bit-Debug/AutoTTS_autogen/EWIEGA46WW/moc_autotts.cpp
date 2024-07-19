/****************************************************************************
** Meta object code from reading C++ file 'autotts.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../autotts.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autotts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
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
struct qt_meta_stringdata_CLASSAutoTTSENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAutoTTSENDCLASS = QtMocHelpers::stringData(
    "AutoTTS",
    "on_ReadButton_clicked",
    "",
    "on_VolumeSlider_valueChanged",
    "value",
    "on_SeparatingTimeSlider_valueChanged",
    "on_StopButton_clicked",
    "on_VoiceSelector_currentIndexChanged",
    "index",
    "on_EdgeTTSSelectionButton_clicked",
    "on_LocalTTSSelectionButton_clicked",
    "on_RepeatInput_valueChanged",
    "arg1",
    "on_ImportButton_triggered",
    "on_SaveButton_triggered",
    "on_AboutButton_triggered",
    "on_HelpButton_triggered",
    "on_AboutQtButton_triggered"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAutoTTSENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    1,   93,    2, 0x08,    2 /* Private */,
       5,    1,   96,    2, 0x08,    4 /* Private */,
       6,    0,   99,    2, 0x08,    6 /* Private */,
       7,    1,  100,    2, 0x08,    7 /* Private */,
       9,    0,  103,    2, 0x08,    9 /* Private */,
      10,    0,  104,    2, 0x08,   10 /* Private */,
      11,    1,  105,    2, 0x08,   11 /* Private */,
      13,    0,  108,    2, 0x08,   13 /* Private */,
      14,    0,  109,    2, 0x08,   14 /* Private */,
      15,    0,  110,    2, 0x08,   15 /* Private */,
      16,    0,  111,    2, 0x08,   16 /* Private */,
      17,    0,  112,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AutoTTS::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSAutoTTSENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAutoTTSENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAutoTTSENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AutoTTS, std::true_type>,
        // method 'on_ReadButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_VolumeSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_SeparatingTimeSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_StopButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_VoiceSelector_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_EdgeTTSSelectionButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_LocalTTSSelectionButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_RepeatInput_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_ImportButton_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SaveButton_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_AboutButton_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_HelpButton_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_AboutQtButton_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AutoTTS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutoTTS *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_ReadButton_clicked(); break;
        case 1: _t->on_VolumeSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_SeparatingTimeSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_StopButton_clicked(); break;
        case 4: _t->on_VoiceSelector_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_EdgeTTSSelectionButton_clicked(); break;
        case 6: _t->on_LocalTTSSelectionButton_clicked(); break;
        case 7: _t->on_RepeatInput_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_ImportButton_triggered(); break;
        case 9: _t->on_SaveButton_triggered(); break;
        case 10: _t->on_AboutButton_triggered(); break;
        case 11: _t->on_HelpButton_triggered(); break;
        case 12: _t->on_AboutQtButton_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject *AutoTTS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoTTS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAutoTTSENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AutoTTS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
