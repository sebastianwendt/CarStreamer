/****************************************************************************
** Meta object code from reading C++ file 'obexsession.h'
**
** Created: Wed Jun 19 19:39:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CarStreamerApp/obex/obexsession.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'obexsession.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OrgOpenobexFileTransferInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      58,   54,   34,   33, 0x0a,
      88,   80,   34,   33, 0x0a,
     114,   54,   34,   33, 0x0a,
     136,   54,   34,   33, 0x0a,
     152,   80,   34,   33, 0x0a,
     212,   33,  177,   33, 0x0a,
     225,   80,   34,   33, 0x0a,
     251,   80,   34,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OrgOpenobexFileTransferInterface[] = {
    "OrgOpenobexFileTransferInterface\0\0"
    "QDBusPendingReply<>\0in0\0ChangeFolder(QString)\0"
    "in0,in1\0CopyFile(QString,QString)\0"
    "CreateFolder(QString)\0Delete(QString)\0"
    "GetFile(QString,QString)\0"
    "QDBusPendingReply<QVariantMapList>\0"
    "ListFolder()\0MoveFile(QString,QString)\0"
    "PutFile(QString,QString)\0"
};

void OrgOpenobexFileTransferInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OrgOpenobexFileTransferInterface *_t = static_cast<OrgOpenobexFileTransferInterface *>(_o);
        switch (_id) {
        case 0: { QDBusPendingReply<> _r = _t->ChangeFolder((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 1: { QDBusPendingReply<> _r = _t->CopyFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<> _r = _t->CreateFolder((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<> _r = _t->Delete((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<> _r = _t->GetFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 5: { QDBusPendingReply<QVariantMapList> _r = _t->ListFolder();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QVariantMapList>*>(_a[0]) = _r; }  break;
        case 6: { QDBusPendingReply<> _r = _t->MoveFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 7: { QDBusPendingReply<> _r = _t->PutFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OrgOpenobexFileTransferInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OrgOpenobexFileTransferInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgOpenobexFileTransferInterface,
      qt_meta_data_OrgOpenobexFileTransferInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OrgOpenobexFileTransferInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OrgOpenobexFileTransferInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OrgOpenobexFileTransferInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OrgOpenobexFileTransferInterface))
        return static_cast<void*>(const_cast< OrgOpenobexFileTransferInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgOpenobexFileTransferInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_OrgOpenobexSessionInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   49,   29,   28, 0x0a,
      82,   28,   29,   28, 0x0a,
     121,   28,   90,   28, 0x0a,
     137,   49,   29,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OrgOpenobexSessionInterface[] = {
    "OrgOpenobexSessionInterface\0\0"
    "QDBusPendingReply<>\0in0\0"
    "AssignAgent(QDBusObjectPath)\0Close()\0"
    "QDBusPendingReply<QVariantMap>\0"
    "GetProperties()\0ReleaseAgent(QDBusObjectPath)\0"
};

void OrgOpenobexSessionInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OrgOpenobexSessionInterface *_t = static_cast<OrgOpenobexSessionInterface *>(_o);
        switch (_id) {
        case 0: { QDBusPendingReply<> _r = _t->AssignAgent((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 1: { QDBusPendingReply<> _r = _t->Close();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<QVariantMap> _r = _t->GetProperties();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QVariantMap>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<> _r = _t->ReleaseAgent((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OrgOpenobexSessionInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OrgOpenobexSessionInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgOpenobexSessionInterface,
      qt_meta_data_OrgOpenobexSessionInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OrgOpenobexSessionInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OrgOpenobexSessionInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OrgOpenobexSessionInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OrgOpenobexSessionInterface))
        return static_cast<void*>(const_cast< OrgOpenobexSessionInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgOpenobexSessionInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
