/****************************************************************************
** Meta object code from reading C++ file 'register_1.h'
**
** Created: Sun Jul 14 05:41:01 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "register_1.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'register_1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_register_1[] = {

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
      12,   11,   11,   11, 0x08,
      40,   35,   11,   11, 0x08,
      64,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_register_1[] = {
    "register_1\0\0readPendingDatagrams()\0"
    "temp\0NV_sendmessage(QString)\0"
    "get_new_VIP_id()\0"
};

const QMetaObject register_1::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_register_1,
      qt_meta_data_register_1, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &register_1::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *register_1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *register_1::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_register_1))
        return static_cast<void*>(const_cast< register_1*>(this));
    return QDialog::qt_metacast(_clname);
}

int register_1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: readPendingDatagrams(); break;
        case 1: NV_sendmessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: get_new_VIP_id(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
