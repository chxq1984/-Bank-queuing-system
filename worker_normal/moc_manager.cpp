/****************************************************************************
** Meta object code from reading C++ file 'manager.h'
**
** Created: Sun Jul 14 01:17:46 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "manager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_manager[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      32,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_manager[] = {
    "manager\0\0readPendingDatagrams()\0"
    "send_askmessage()\0"
};

const QMetaObject manager::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_manager,
      qt_meta_data_manager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &manager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *manager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *manager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_manager))
        return static_cast<void*>(const_cast< manager*>(this));
    return QDialog::qt_metacast(_clname);
}

int manager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: readPendingDatagrams(); break;
        case 1: send_askmessage(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
