/****************************************************************************
** Meta object code from reading C++ file 'agentadaptor.h'
**
** Created: Wed Jun 19 20:01:44 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CarStreamerApp/agentadaptor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'agentadaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AgentAdaptor[] = {

 // content:
       6,       // revision
       0,       // classname
       1,   14, // classinfo
       8,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
      29,   13,

 // slots: signature, parameters, type, tag, flags
      58,   46,   45,   45, 0x0a,
      93,   45,   45,   45, 0x0a,
     107,  102,   45,   45, 0x0a,
     157,  134,   45,   45, 0x0a,
     199,   45,   45,   45, 0x0a,
     224,  209,   45,   45, 0x0a,
     278,  271,  266,   45, 0x0a,
     318,  271,  310,   45, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AgentAdaptor[] = {
    "AgentAdaptor\0org.bluez.Agent\0"
    "D-Bus Interface\0\0device,uuid\0"
    "Authorize(QDBusObjectPath,QString)\0"
    "Cancel()\0mode\0ConfirmModeChange(QString)\0"
    "device,passkey,entered\0"
    "DisplayPasskey(QDBusObjectPath,uint,uint)\0"
    "Release()\0device,passkey\0"
    "RequestConfirmation(QDBusObjectPath,uint)\0"
    "uint\0device\0RequestPasskey(QDBusObjectPath)\0"
    "QString\0RequestPinCode(QDBusObjectPath)\0"
};

void AgentAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AgentAdaptor *_t = static_cast<AgentAdaptor *>(_o);
        switch (_id) {
        case 0: _t->Authorize((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->Cancel(); break;
        case 2: _t->ConfirmModeChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->DisplayPasskey((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 4: _t->Release(); break;
        case 5: _t->RequestConfirmation((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 6: { uint _r = _t->RequestPasskey((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->RequestPinCode((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AgentAdaptor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AgentAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_AgentAdaptor,
      qt_meta_data_AgentAdaptor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AgentAdaptor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AgentAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AgentAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AgentAdaptor))
        return static_cast<void*>(const_cast< AgentAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int AgentAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
