/****************************************************************************
** Meta object code from reading C++ file 'bluetoothdevice.h'
**
** Created: Wed Jun 19 20:01:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CarStreamerApp/bluetoothdevice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetoothdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BluetoothDevice[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
      11,  159, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   17,   16,   16, 0x05,
      52,   17,   16,   16, 0x05,
      80,   17,   16,   16, 0x05,
     119,  108,   16,   16, 0x05,
     159,  153,   16,   16, 0x05,
     194,  188,   16,   16, 0x05,
     215,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     231,   16,   16,   16, 0x0a,
     240,   16,   16,   16, 0x0a,
     255,   16,   16,   16, 0x0a,
     281,   16,  273,   16, 0x0a,
     297,   16,   16,   16, 0x0a,
     312,   16,   16,   16, 0x0a,
     325,   16,   16,   16, 0x0a,
     348,   16,  343,   16, 0x0a,
     358,  188,   16,   16, 0x0a,
     387,   16,  375,   16, 0x0a,
     406,  398,  343,   16, 0x0a,
     434,   16,  343,   16, 0x0a,
     446,   16,  343,   16, 0x0a,
     463,   16,  343,   16, 0x0a,
     480,   16,  273,   16, 0x0a,
     488,   16,  273,   16, 0x0a,
     495,   16,  273,   16, 0x0a,
     505,   16,  273,   16, 0x0a,
     512,   16,  273,   16, 0x0a,
     519,  108,   16,   16, 0x08,
     557,  108,   16,   16, 0x08,
     602,  108,   16,   16, 0x08,

 // properties: name, type, flags
     647,  343, 0x01495001,
     657,  343, 0x01495001,
     672,  343, 0x01495001,
     687,  343, 0x01495103,
     695,  343, 0x01495001,
     702,  375, 0x0b495001,
     711,  273, 0x0a095001,
     717,  273, 0x0a095001,
     722,  273, 0x0a095001,
     730,  273, 0x0a095001,
     735,  273, 0x0a095001,

 // properties: notify_signal_id
       0,
       1,
       2,
       5,
       6,
       4,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

static const char qt_meta_stringdata_BluetoothDevice[] = {
    "BluetoothDevice\0\0isConnected\0"
    "connectedChanged(bool)\0"
    "audioConnectedChanged(bool)\0"
    "inputConnectedChanged(bool)\0name,value\0"
    "propertyChanged(QString,QVariant)\0"
    "uuids\0profilesChanged(QStringList)\0"
    "trust\0trustedChanged(bool)\0pairedChanged()\0"
    "unpair()\0connectAudio()\0connectAudioSrc()\0"
    "QString\0connectSerial()\0connectInput()\0"
    "disconnect()\0disconnectAudio()\0bool\0"
    "trusted()\0setTrusted(bool)\0QStringList\0"
    "profiles()\0profile\0isProfileSupported(QString)\0"
    "connected()\0audioConnected()\0"
    "inputConnected()\0alias()\0name()\0"
    "address()\0icon()\0path()\0"
    "propertyChanged(QString,QDBusVariant)\0"
    "audioPropertiesChanged(QString,QDBusVariant)\0"
    "inputPropertiesChanged(QString,QDBusVariant)\0"
    "connected\0audioConnected\0inputConnected\0"
    "trusted\0paired\0profiles\0alias\0name\0"
    "address\0icon\0path\0"
};

void BluetoothDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BluetoothDevice *_t = static_cast<BluetoothDevice *>(_o);
        switch (_id) {
        case 0: _t->connectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->audioConnectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->inputConnectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->propertyChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 4: _t->profilesChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 5: _t->trustedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->pairedChanged(); break;
        case 7: _t->unpair(); break;
        case 8: _t->connectAudio(); break;
        case 9: _t->connectAudioSrc(); break;
        case 10: { QString _r = _t->connectSerial();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: _t->connectInput(); break;
        case 12: _t->disconnect(); break;
        case 13: _t->disconnectAudio(); break;
        case 14: { bool _r = _t->trusted();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: _t->setTrusted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: { QStringList _r = _t->profiles();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isProfileSupported((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->connected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->audioConnected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->inputConnected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { QString _r = _t->alias();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 22: { QString _r = _t->name();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: { QString _r = _t->address();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: { QString _r = _t->icon();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 25: { QString _r = _t->path();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 26: _t->propertyChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QDBusVariant(*)>(_a[2]))); break;
        case 27: _t->audioPropertiesChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QDBusVariant(*)>(_a[2]))); break;
        case 28: _t->inputPropertiesChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QDBusVariant(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BluetoothDevice::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BluetoothDevice::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BluetoothDevice,
      qt_meta_data_BluetoothDevice, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BluetoothDevice::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BluetoothDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BluetoothDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BluetoothDevice))
        return static_cast<void*>(const_cast< BluetoothDevice*>(this));
    return QObject::qt_metacast(_clname);
}

int BluetoothDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = connected(); break;
        case 1: *reinterpret_cast< bool*>(_v) = audioConnected(); break;
        case 2: *reinterpret_cast< bool*>(_v) = inputConnected(); break;
        case 3: *reinterpret_cast< bool*>(_v) = trusted(); break;
        case 4: *reinterpret_cast< bool*>(_v) = paired(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = profiles(); break;
        case 6: *reinterpret_cast< QString*>(_v) = alias(); break;
        case 7: *reinterpret_cast< QString*>(_v) = name(); break;
        case 8: *reinterpret_cast< QString*>(_v) = address(); break;
        case 9: *reinterpret_cast< QString*>(_v) = icon(); break;
        case 10: *reinterpret_cast< QString*>(_v) = path(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 3: setTrusted(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BluetoothDevice::connectedChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BluetoothDevice::audioConnectedChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BluetoothDevice::inputConnectedChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BluetoothDevice::propertyChanged(QString _t1, QVariant _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BluetoothDevice::profilesChanged(QStringList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BluetoothDevice::trustedChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void BluetoothDevice::pairedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
