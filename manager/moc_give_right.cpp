/****************************************************************************
** Meta object code from reading C++ file 'give_right.h'
**
** Created: Sun Jul 14 01:17:48 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "give_right.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'give_right.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_give_right[] = {

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
      35,   11,   11,   11, 0x08,
      60,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_give_right[] = {
    "give_right\0\0readPendingDatagrams()\0"
    "send_applicate_manager()\0"
    "send_disapplicate_manager()\0"
};

const QMetaObject give_right::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_give_right,
      qt_meta_data_give_right, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &give_right::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *give_right::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *give_right::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_give_right))
        return static_cast<void*>(const_cast< give_right*>(this));
    return QDialog::qt_metacast(_clname);
}

int give_right::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: readPendingDatagrams(); break;
        case 1: send_applicate_manager(); break;
        case 2: send_disapplicate_manager(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
