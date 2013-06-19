/****************************************************************************
** Meta object code from reading C++ file 'bluemanager.h'
**
** Created: Wed Jun 19 20:01:45 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CarStreamerApp/bluemanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OrgBluezManagerInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   26,   25,   25, 0x05,
      60,   26,   25,   25, 0x05,
      92,   26,   25,   25, 0x05,
     139,  131,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     212,   25,  177,   25, 0x0a,
     229,   26,  177,   25, 0x0a,
     281,   25,  250,   25, 0x0a,
     340,   25,  297,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OrgBluezManagerInterface[] = {
    "OrgBluezManagerInterface\0\0in0\0"
    "AdapterAdded(QDBusObjectPath)\0"
    "AdapterRemoved(QDBusObjectPath)\0"
    "DefaultAdapterChanged(QDBusObjectPath)\0"
    "in0,in1\0PropertyChanged(QString,QDBusVariant)\0"
    "QDBusPendingReply<QDBusObjectPath>\0"
    "DefaultAdapter()\0FindAdapter(QString)\0"
    "QDBusPendingReply<QVariantMap>\0"
    "GetProperties()\0"
    "QDBusPendingReply<QList<QDBusObjectPath> >\0"
    "ListAdapters()\0"
};

void OrgBluezManagerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OrgBluezManagerInterface *_t = static_cast<OrgBluezManagerInterface *>(_o);
        switch (_id) {
        case 0: _t->AdapterAdded((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 1: _t->AdapterRemoved((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 2: _t->DefaultAdapterChanged((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 3: _t->PropertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2]))); break;
        case 4: { QDBusPendingReply<QDBusObjectPath> _r = _t->DefaultAdapter();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = _r; }  break;
        case 5: { QDBusPendingReply<QDBusObjectPath> _r = _t->FindAdapter((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = _r; }  break;
        case 6: { QDBusPendingReply<QVariantMap> _r = _t->GetProperties();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QVariantMap>*>(_a[0]) = _r; }  break;
        case 7: { QDBusPendingReply<QList<QDBusObjectPath> > _r = _t->ListAdapters();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QList<QDBusObjectPath> >*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OrgBluezManagerInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OrgBluezManagerInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgBluezManagerInterface,
      qt_meta_data_OrgBluezManagerInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OrgBluezManagerInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OrgBluezManagerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OrgBluezManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OrgBluezManagerInterface))
        return static_cast<void*>(const_cast< OrgBluezManagerInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgBluezManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void OrgBluezManagerInterface::AdapterAdded(const QDBusObjectPath & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OrgBluezManagerInterface::AdapterRemoved(const QDBusObjectPath & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OrgBluezManagerInterface::DefaultAdapterChanged(const QDBusObjectPath & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OrgBluezManagerInterface::PropertyChanged(const QString & _t1, const QDBusVariant & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
