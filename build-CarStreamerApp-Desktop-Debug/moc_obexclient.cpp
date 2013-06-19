/****************************************************************************
** Meta object code from reading C++ file 'obexclient.h'
**
** Created: Wed Jun 19 19:39:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CarStreamerApp/obex/obexclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'obexclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OrgOpenobexClientInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      67,   63,   28,   27, 0x0a,
     126,  114,   94,   27, 0x0a,
     204,   63,  177,   27, 0x0a,
     241,  233,   94,   27, 0x0a,
     279,  114,   94,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OrgOpenobexClientInterface[] = {
    "OrgOpenobexClientInterface\0\0"
    "QDBusPendingReply<QDBusObjectPath>\0"
    "in0\0CreateSession(QVariantMap)\0"
    "QDBusPendingReply<>\0in0,in1,in2\0"
    "ExchangeBusinessCards(QVariantMap,QString,QString)\0"
    "QDBusPendingReply<QString>\0"
    "GetCapabilities(QVariantMap)\0in0,in1\0"
    "PullBusinessCard(QVariantMap,QString)\0"
    "SendFiles(QVariantMap,QStringList,QDBusObjectPath)\0"
};

void OrgOpenobexClientInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OrgOpenobexClientInterface *_t = static_cast<OrgOpenobexClientInterface *>(_o);
        switch (_id) {
        case 0: { QDBusPendingReply<QDBusObjectPath> _r = _t->CreateSession((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = _r; }  break;
        case 1: { QDBusPendingReply<> _r = _t->ExchangeBusinessCards((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<QString> _r = _t->GetCapabilities((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<> _r = _t->PullBusinessCard((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<> _r = _t->SendFiles((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OrgOpenobexClientInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OrgOpenobexClientInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgOpenobexClientInterface,
      qt_meta_data_OrgOpenobexClientInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OrgOpenobexClientInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OrgOpenobexClientInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OrgOpenobexClientInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OrgOpenobexClientInterface))
        return static_cast<void*>(const_cast< OrgOpenobexClientInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgOpenobexClientInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
