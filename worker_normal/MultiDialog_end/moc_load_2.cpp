/****************************************************************************
** Meta object code from reading C++ file 'load_2.h'
**
** Created: Sun Jul 14 08:14:17 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "load_2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'load_2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_load_2[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    8,    7,    7, 0x08,
      60,    7,    7,    7, 0x08,
      86,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_load_2[] = {
    "load_2\0\0,\0on_load_2_password_cursorPositionChanged(int,int)\0"
    "on_load_2_login_clicked()\0"
    "readPendingDatagrams()\0"
};

const QMetaObject load_2::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_load_2,
      qt_meta_data_load_2, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &load_2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *load_2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *load_2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_load_2))
        return static_cast<void*>(const_cast< load_2*>(this));
    return QDialog::qt_metacast(_clname);
}

int load_2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_load_2_password_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: on_load_2_login_clicked(); break;
        case 2: readPendingDatagrams(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
