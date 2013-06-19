/****************************************************************************
** Meta object code from reading C++ file 'bluetoothbaseagent.h'
**
** Created: Wed Jun 19 20:01:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CarStreamerApp/bluetoothbaseagent.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetoothbaseagent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BluetoothBaseAgent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   20,   19,   19, 0x0a,
      72,   19,   19,   19, 0x0a,
      88,   19,   19,   19, 0x0a,
      97,   19,   19,   19, 0x0a,
     143,  124,   19,   19, 0x0a,
     194,   19,   19,   19, 0x0a,
     215,  204,   19,   19, 0x0a,
     278,  271,  266,   19, 0x0a,
     327,  271,  319,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BluetoothBaseAgent[] = {
    "BluetoothBaseAgent\0\0device,\0"
    "authorize(OrgBluezDeviceInterface&,QString)\0"
    "registerAgent()\0cancel()\0"
    "confirmModeChange(QString)\0"
    "device,key,entered\0"
    "displayPasskey(OrgBluezDeviceInterface&,uint,uint)\0"
    "release()\0device,key\0"
    "requestConfirmation(OrgBluezDeviceInterface&,uint)\0"
    "uint\0device\0requestPasskey(OrgBluezDeviceInterface&)\0"
    "QString\0requestPidCode(OrgBluezDeviceInterface&)\0"
};

void BluetoothBaseAgent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BluetoothBaseAgent *_t = static_cast<BluetoothBaseAgent *>(_o);
        switch (_id) {
        case 0: _t->authorize((*reinterpret_cast< OrgBluezDeviceInterface(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->registerAgent(); break;
        case 2: _t->cancel(); break;
        case 3: _t->confirmModeChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->displayPasskey((*reinterpret_cast< OrgBluezDeviceInterface(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 5: _t->release(); break;
        case 6: _t->requestConfirmation((*reinterpret_cast< OrgBluezDeviceInterface(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 7: { uint _r = _t->requestPasskey((*reinterpret_cast< OrgBluezDeviceInterface(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->requestPidCode((*reinterpret_cast< OrgBluezDeviceInterface(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BluetoothBaseAgent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BluetoothBaseAgent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BluetoothBaseAgent,
      qt_meta_data_BluetoothBaseAgent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BluetoothBaseAgent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BluetoothBaseAgent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BluetoothBaseAgent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BluetoothBaseAgent))
        return static_cast<void*>(const_cast< BluetoothBaseAgent*>(this));
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(const_cast< BluetoothBaseAgent*>(this));
    return QObject::qt_metacast(_clname);
}

int BluetoothBaseAgent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
