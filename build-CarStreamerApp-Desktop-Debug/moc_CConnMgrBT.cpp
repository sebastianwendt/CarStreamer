/****************************************************************************
** Meta object code from reading C++ file 'CConnMgrBT.h'
**
** Created: Wed Jun 19 21:01:35 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CarStreamerApp/CConnMgrBT.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CConnMgrBT.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CConnMgrBT[] = {

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
      24,   12,   11,   11, 0x0a,
      57,   12,   11,   11, 0x0a,
      89,   11,   11,   11, 0x0a,
     121,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CConnMgrBT[] = {
    "CConnMgrBT\0\0AdapterPath\0"
    "AdapterInserted(QDBusObjectPath)\0"
    "AdapterRemoved(QDBusObjectPath)\0"
    "NewDeviceFound(QDBusObjectPath)\0"
    "LostDevice(QDBusObjectPath)\0"
};

void CConnMgrBT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CConnMgrBT *_t = static_cast<CConnMgrBT *>(_o);
        switch (_id) {
        case 0: _t->AdapterInserted((*reinterpret_cast< QDBusObjectPath(*)>(_a[1]))); break;
        case 1: _t->AdapterRemoved((*reinterpret_cast< QDBusObjectPath(*)>(_a[1]))); break;
        case 2: _t->NewDeviceFound((*reinterpret_cast< QDBusObjectPath(*)>(_a[1]))); break;
        case 3: _t->LostDevice((*reinterpret_cast< QDBusObjectPath(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CConnMgrBT::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CConnMgrBT::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CConnMgrBT,
      qt_meta_data_CConnMgrBT, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CConnMgrBT::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CConnMgrBT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CConnMgrBT::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CConnMgrBT))
        return static_cast<void*>(const_cast< CConnMgrBT*>(this));
    return QObject::qt_metacast(_clname);
}

int CConnMgrBT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
