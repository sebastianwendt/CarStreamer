/****************************************************************************
** Meta object code from reading C++ file 'asyncagent.h'
**
** Created: Wed Jun 19 20:01:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CarStreamerApp/asyncagent.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'asyncagent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AsyncAgent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   12,   11,   11, 0x0a,
      61,   53,   11,   11, 0x0a,
      88,   80,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AsyncAgent[] = {
    "AsyncAgent\0\0confirmed\0"
    "replyRequestConfirmation(bool)\0passkey\0"
    "replyPasskey(uint)\0pidCode\0"
    "replyRequestPidCode(QString)\0"
};

void AsyncAgent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AsyncAgent *_t = static_cast<AsyncAgent *>(_o);
        switch (_id) {
        case 0: _t->replyRequestConfirmation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->replyPasskey((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->replyRequestPidCode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AsyncAgent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AsyncAgent::staticMetaObject = {
    { &BluetoothBaseAgent::staticMetaObject, qt_meta_stringdata_AsyncAgent,
      qt_meta_data_AsyncAgent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AsyncAgent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AsyncAgent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AsyncAgent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AsyncAgent))
        return static_cast<void*>(const_cast< AsyncAgent*>(this));
    return BluetoothBaseAgent::qt_metacast(_clname);
}

int AsyncAgent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BluetoothBaseAgent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
