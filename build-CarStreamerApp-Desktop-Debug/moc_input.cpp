/****************************************************************************
** Meta object code from reading C++ file 'input.h'
**
** Created: Wed Jun 19 20:01:54 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CarStreamerApp/input.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'input.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OrgBluezInputInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      90,   23,   70,   23, 0x0a,
     100,   23,   70,   23, 0x0a,
     144,   23,  113,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OrgBluezInputInterface[] = {
    "OrgBluezInputInterface\0\0in0,in1\0"
    "PropertyChanged(QString,QDBusVariant)\0"
    "QDBusPendingReply<>\0Connect()\0"
    "Disconnect()\0QDBusPendingReply<QVariantMap>\0"
    "GetProperties()\0"
};

void OrgBluezInputInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OrgBluezInputInterface *_t = static_cast<OrgBluezInputInterface *>(_o);
        switch (_id) {
        case 0: _t->PropertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2]))); break;
        case 1: { QDBusPendingReply<> _r = _t->Connect();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<> _r = _t->Disconnect();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<QVariantMap> _r = _t->GetProperties();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QVariantMap>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OrgBluezInputInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OrgBluezInputInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgBluezInputInterface,
      qt_meta_data_OrgBluezInputInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OrgBluezInputInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OrgBluezInputInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OrgBluezInputInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OrgBluezInputInterface))
        return static_cast<void*>(const_cast< OrgBluezInputInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgBluezInputInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OrgBluezInputInterface::PropertyChanged(const QString & _t1, const QDBusVariant & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
