/****************************************************************************
** Meta object code from reading C++ file 'employee.h'
**
** Created: Sun Jul 14 20:04:57 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "employee.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'employee.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_employee[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      31,    9,    9,    9, 0x08,
      53,    9,    9,    9, 0x08,
      76,    9,    9,    9, 0x08,
      90,    9,    9,    9, 0x08,
     101,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_employee[] = {
    "employee\0\0on_openBtn_clicked()\0"
    "on_the_next_clicked()\0readPendingDatagrams()\0"
    "send_asknew()\0addFiles()\0playOrPause()\0"
};

const QMetaObject employee::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_employee,
      qt_meta_data_employee, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &employee::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *employee::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *employee::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_employee))
        return static_cast<void*>(const_cast< employee*>(this));
    return QDialog::qt_metacast(_clname);
}

int employee::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_openBtn_clicked(); break;
        case 1: on_the_next_clicked(); break;
        case 2: readPendingDatagrams(); break;
        case 3: send_asknew(); break;
        case 4: addFiles(); break;
        case 5: playOrPause(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
