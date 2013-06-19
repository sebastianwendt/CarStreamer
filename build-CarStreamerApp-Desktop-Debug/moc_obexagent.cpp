/****************************************************************************
** Meta object code from reading C++ file 'obexagent.h'
**
** Created: Wed Jun 19 19:39:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CarStreamerApp/obex/obexagent.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'obexagent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ObexAgentAdaptor[] = {

 // content:
       6,       // revision
       0,       // classname
       2,   14, // classinfo
       4,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
      36,   17,
     516,   52,

 // slots: signature, parameters, type, tag, flags
     542,  537,  536,  536, 0x0a,
     579,  568,  536,  536, 0x0a,
     627,  610,  536,  536, 0x0a,
     664,  536,  536,  536, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ObexAgentAdaptor[] = {
    "ObexAgentAdaptor\0org.openobex.Agent\0"
    "D-Bus Interface\0"
    "  <interface name=\"org.openobex.Agent\">\n    <method name=\"Release\""
    "/>\n    <method name=\"Progress\">\n      <arg direction=\"in\" type=\""
    "o\" name=\"path\"/>\n      <arg direction=\"in\" type=\"t\" name=\"tra"
    "nsferred\"/>\n    </method>\n    <method name=\"Complete\">\n      <ar"
    "g direction=\"in\" type=\"o\" name=\"path\"/>\n    </method>\n    <met"
    "hod name=\"Error\">\n      <arg direction=\"in\" type=\"o\" name=\"pat"
    "h\"/>\n      <arg direction=\"in\" type=\"s\" name=\"error\"/>\n    </"
    "method>\n  </interface>\n\0"
    "D-Bus Introspection\0\0path\0"
    "Complete(QDBusObjectPath)\0path,error\0"
    "Error(QDBusObjectPath,QString)\0"
    "path,transferred\0Progress(QDBusObjectPath,qulonglong)\0"
    "Release()\0"
};

void ObexAgentAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ObexAgentAdaptor *_t = static_cast<ObexAgentAdaptor *>(_o);
        switch (_id) {
        case 0: _t->Complete((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 1: _t->Error((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->Progress((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        case 3: _t->Release(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ObexAgentAdaptor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ObexAgentAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_ObexAgentAdaptor,
      qt_meta_data_ObexAgentAdaptor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ObexAgentAdaptor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ObexAgentAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ObexAgentAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ObexAgentAdaptor))
        return static_cast<void*>(const_cast< ObexAgentAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int ObexAgentAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
