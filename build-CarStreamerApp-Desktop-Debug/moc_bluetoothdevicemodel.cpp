/****************************************************************************
** Meta object code from reading C++ file 'bluetoothdevicemodel.h'
**
** Created: Wed Jun 19 20:01:53 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CarStreamerApp/bluetoothdevicemodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetoothdevicemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BluetoothDevicesModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       5,  149, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   23,   22,   22, 0x05,
      60,   52,   22,   22, 0x05,
      99,   92,   22,   22, 0x05,
     143,  130,   22,   22, 0x05,
     184,  169,   22,   22, 0x05,
     217,  205,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
     244,   22,  240,   22, 0x0a,
     276,  269,  240,   22, 0x0a,
     298,   22,  240,   22, 0x2a,
     329,  318,  309,   22, 0x0a,
     364,  359,  351,   22, 0x0a,
     408,   22,  384,   22, 0x0a,
     423,   22,  418,   22, 0x0a,
     457,  452,  435,   22, 0x0a,
     478,  473,  435,   22, 0x0a,
     518,  505,   22,   22, 0x0a,
     536,   22,  418,   22, 0x0a,
     564,  546,   22,   22, 0x0a,
     587,   22,  418,   22, 0x0a,
     602,   22,  240,   22, 0x0a,
     624,   52,   22,   22, 0x0a,
     652,   22,   22,   22, 0x08,
     682,   22,   22,   22, 0x08,
     714,   22,   22,   22, 0x08,
     745,   22,   22,   22, 0x08,
     787,  776,   22,   22, 0x08,
     827,  776,   22,   22, 0x08,

 // properties: name, type, flags
      23,  418, 0x01495003,
     130,  418, 0x01495003,
     872,  240, 0x02495103,
     169,  418, 0x01495001,
     892,  418, 0x01495001,

 // properties: notify_signal_id
       0,
       3,
       1,
       4,
       5,

       0        // eod
};

static const char qt_meta_stringdata_BluetoothDevicesModel[] = {
    "BluetoothDevicesModel\0\0powered\0"
    "poweredChanged(bool)\0timeout\0"
    "discoverableTimeoutChanged(int)\0device\0"
    "devicePaired(BluetoothDevice*)\0"
    "discoverable\0discoverableChanged(bool)\0"
    "adapterPresent\0adapterChanged(bool)\0"
    "isConnected\0connectedChanged(bool)\0"
    "int\0columnCount(QModelIndex)\0parent\0"
    "rowCount(QModelIndex)\0rowCount()\0"
    "QVariant\0index,role\0data(QModelIndex,int)\0"
    "QString\0name\0devicePath(QString)\0"
    "QList<BluetoothDevice*>\0devices()\0"
    "bool\0connected()\0BluetoothDevice*\0"
    "path\0device(QString)\0addy\0"
    "deviceByHwAddress(QString)\0poweredValue\0"
    "makePowered(bool)\0powered()\0"
    "discoverableValue\0makeDiscoverable(bool)\0"
    "discoverable()\0discoverableTimeout()\0"
    "setDiscoverableTimeout(int)\0"
    "adapterAdded(QDBusObjectPath)\0"
    "adapterRemoved(QDBusObjectPath)\0"
    "deviceCreated(QDBusObjectPath)\0"
    "deviceRemoved(QDBusObjectPath)\0"
    "name,value\0devicePropertyChanged(QString,QVariant)\0"
    "adapterPropertyChanged(QString,QDBusVariant)\0"
    "discoverableTimeout\0connected\0"
};

void BluetoothDevicesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BluetoothDevicesModel *_t = static_cast<BluetoothDevicesModel *>(_o);
        switch (_id) {
        case 0: _t->poweredChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->discoverableTimeoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->devicePaired((*reinterpret_cast< BluetoothDevice*(*)>(_a[1]))); break;
        case 3: _t->discoverableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->adapterChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->connectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { int _r = _t->columnCount((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->rowCount((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->rowCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QVariant _r = _t->data((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->devicePath((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QList<BluetoothDevice*> _r = _t->devices();
            if (_a[0]) *reinterpret_cast< QList<BluetoothDevice*>*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->connected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { BluetoothDevice* _r = _t->device((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< BluetoothDevice**>(_a[0]) = _r; }  break;
        case 14: { BluetoothDevice* _r = _t->deviceByHwAddress((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< BluetoothDevice**>(_a[0]) = _r; }  break;
        case 15: _t->makePowered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: { bool _r = _t->powered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: _t->makeDiscoverable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: { bool _r = _t->discoverable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->discoverableTimeout();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: _t->setDiscoverableTimeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->adapterAdded((*reinterpret_cast< QDBusObjectPath(*)>(_a[1]))); break;
        case 22: _t->adapterRemoved((*reinterpret_cast< QDBusObjectPath(*)>(_a[1]))); break;
        case 23: _t->deviceCreated((*reinterpret_cast< QDBusObjectPath(*)>(_a[1]))); break;
        case 24: _t->deviceRemoved((*reinterpret_cast< QDBusObjectPath(*)>(_a[1]))); break;
        case 25: _t->devicePropertyChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 26: _t->adapterPropertyChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QDBusVariant(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BluetoothDevicesModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BluetoothDevicesModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_BluetoothDevicesModel,
      qt_meta_data_BluetoothDevicesModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BluetoothDevicesModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BluetoothDevicesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BluetoothDevicesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BluetoothDevicesModel))
        return static_cast<void*>(const_cast< BluetoothDevicesModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int BluetoothDevicesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = powered(); break;
        case 1: *reinterpret_cast< bool*>(_v) = discoverable(); break;
        case 2: *reinterpret_cast< int*>(_v) = discoverableTimeout(); break;
        case 3: *reinterpret_cast< bool*>(_v) = adapterPresent(); break;
        case 4: *reinterpret_cast< bool*>(_v) = connected(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: makePowered(*reinterpret_cast< bool*>(_v)); break;
        case 1: makeDiscoverable(*reinterpret_cast< bool*>(_v)); break;
        case 2: setDiscoverableTimeout(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BluetoothDevicesModel::poweredChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BluetoothDevicesModel::discoverableTimeoutChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BluetoothDevicesModel::devicePaired(BluetoothDevice * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BluetoothDevicesModel::discoverableChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BluetoothDevicesModel::adapterChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BluetoothDevicesModel::connectedChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
