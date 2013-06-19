/****************************************************************************
** Meta object code from reading C++ file 'blueadapter.h'
**
** Created: Wed Jun 19 20:01:47 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CarStreamerApp/blueadapter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blueadapter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OrgBluezAdapterInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   26,   25,   25, 0x05,
      61,   26,   25,   25, 0x05,
      96,   88,   25,   25, 0x05,
     129,   26,   25,   25, 0x05,
     160,   88,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     218,   26,  198,   25, 0x0a,
     283,   26,  248,   25, 0x0a,
     317,  305,  248,   25, 0x0a,
     369,   26,  248,   25, 0x0a,
     420,   25,  389,   25, 0x0a,
     479,   25,  436,   25, 0x0a,
     493,   88,  198,   25, 0x0a,
     532,   25,  198,   25, 0x0a,
     549,   26,  198,   25, 0x0a,
     579,   25,  198,   25, 0x0a,
     596,   88,  198,   25, 0x0a,
     630,   25,  198,   25, 0x0a,
     647,   25,  198,   25, 0x0a,
     663,   26,  198,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OrgBluezAdapterInterface[] = {
    "OrgBluezAdapterInterface\0\0in0\0"
    "DeviceCreated(QDBusObjectPath)\0"
    "DeviceDisappeared(QString)\0in0,in1\0"
    "DeviceFound(QString,QVariantMap)\0"
    "DeviceRemoved(QDBusObjectPath)\0"
    "PropertyChanged(QString,QDBusVariant)\0"
    "QDBusPendingReply<>\0CancelDeviceCreation(QString)\0"
    "QDBusPendingReply<QDBusObjectPath>\0"
    "CreateDevice(QString)\0in0,in1,in2\0"
    "CreatePairedDevice(QString,QDBusObjectPath,QString)\0"
    "FindDevice(QString)\0QDBusPendingReply<QVariantMap>\0"
    "GetProperties()\0"
    "QDBusPendingReply<QList<QDBusObjectPath> >\0"
    "ListDevices()\0RegisterAgent(QDBusObjectPath,QString)\0"
    "ReleaseSession()\0RemoveDevice(QDBusObjectPath)\0"
    "RequestSession()\0SetProperty(QString,QDBusVariant)\0"
    "StartDiscovery()\0StopDiscovery()\0"
    "UnregisterAgent(QDBusObjectPath)\0"
};

void OrgBluezAdapterInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OrgBluezAdapterInterface *_t = static_cast<OrgBluezAdapterInterface *>(_o);
        switch (_id) {
        case 0: _t->DeviceCreated((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 1: _t->DeviceDisappeared((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->DeviceFound((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 3: _t->DeviceRemoved((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 4: _t->PropertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2]))); break;
        case 5: { QDBusPendingReply<> _r = _t->CancelDeviceCreation((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 6: { QDBusPendingReply<QDBusObjectPath> _r = _t->CreateDevice((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = _r; }  break;
        case 7: { QDBusPendingReply<QDBusObjectPath> _r = _t->CreatePairedDevice((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = _r; }  break;
        case 8: { QDBusPendingReply<QDBusObjectPath> _r = _t->FindDevice((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = _r; }  break;
        case 9: { QDBusPendingReply<QVariantMap> _r = _t->GetProperties();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QVariantMap>*>(_a[0]) = _r; }  break;
        case 10: { QDBusPendingReply<QList<QDBusObjectPath> > _r = _t->ListDevices();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QList<QDBusObjectPath> >*>(_a[0]) = _r; }  break;
        case 11: { QDBusPendingReply<> _r = _t->RegisterAgent((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 12: { QDBusPendingReply<> _r = _t->ReleaseSession();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 13: { QDBusPendingReply<> _r = _t->RemoveDevice((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 14: { QDBusPendingReply<> _r = _t->RequestSession();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 15: { QDBusPendingReply<> _r = _t->SetProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 16: { QDBusPendingReply<> _r = _t->StartDiscovery();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 17: { QDBusPendingReply<> _r = _t->StopDiscovery();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 18: { QDBusPendingReply<> _r = _t->UnregisterAgent((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OrgBluezAdapterInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OrgBluezAdapterInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgBluezAdapterInterface,
      qt_meta_data_OrgBluezAdapterInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OrgBluezAdapterInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OrgBluezAdapterInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OrgBluezAdapterInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OrgBluezAdapterInterface))
        return static_cast<void*>(const_cast< OrgBluezAdapterInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgBluezAdapterInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void OrgBluezAdapterInterface::DeviceCreated(const QDBusObjectPath & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OrgBluezAdapterInterface::DeviceDisappeared(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OrgBluezAdapterInterface::DeviceFound(const QString & _t1, const QVariantMap & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OrgBluezAdapterInterface::DeviceRemoved(const QDBusObjectPath & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OrgBluezAdapterInterface::PropertyChanged(const QString & _t1, const QDBusVariant & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
