/****************************************************************************
** Meta object code from reading C++ file 'headset.h'
**
** Created: Wed Jun 19 20:01:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CarStreamerApp/headset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'headset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OrgBluezHeadsetInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,
      44,   25,   25,   25, 0x05,
      61,   25,   25,   25, 0x05,
      73,   25,   25,   25, 0x05,
      92,   88,   25,   25, 0x05,
     122,   25,   25,   25, 0x05,
     140,  132,   25,   25, 0x05,
     178,   88,   25,   25, 0x05,
     205,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     235,   25,  215,   25, 0x0a,
     248,   25,  215,   25, 0x0a,
     258,   25,  215,   25, 0x0a,
     297,   25,  271,   25, 0x0a,
     348,   25,  317,   25, 0x0a,
     364,   25,  271,   25, 0x0a,
     381,   25,  215,   25, 0x0a,
     420,   25,  396,   25, 0x0a,
     434,   25,  396,   25, 0x0a,
     446,   25,  215,   25, 0x0a,
     453,   88,  215,   25, 0x0a,
     479,  132,  215,   25, 0x0a,
     513,   88,  215,   25, 0x0a,
     536,   25,  215,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OrgBluezHeadsetInterface[] = {
    "OrgBluezHeadsetInterface\0\0AnswerRequested()\0"
    "CallTerminated()\0Connected()\0"
    "Disconnected()\0in0\0MicrophoneGainChanged(ushort)\0"
    "Playing()\0in0,in1\0"
    "PropertyChanged(QString,QDBusVariant)\0"
    "SpeakerGainChanged(ushort)\0Stopped()\0"
    "QDBusPendingReply<>\0CancelCall()\0"
    "Connect()\0Disconnect()\0QDBusPendingReply<ushort>\0"
    "GetMicrophoneGain()\0QDBusPendingReply<QVariantMap>\0"
    "GetProperties()\0GetSpeakerGain()\0"
    "IndicateCall()\0QDBusPendingReply<bool>\0"
    "IsConnected()\0IsPlaying()\0Play()\0"
    "SetMicrophoneGain(ushort)\0"
    "SetProperty(QString,QDBusVariant)\0"
    "SetSpeakerGain(ushort)\0Stop()\0"
};

void OrgBluezHeadsetInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OrgBluezHeadsetInterface *_t = static_cast<OrgBluezHeadsetInterface *>(_o);
        switch (_id) {
        case 0: _t->AnswerRequested(); break;
        case 1: _t->CallTerminated(); break;
        case 2: _t->Connected(); break;
        case 3: _t->Disconnected(); break;
        case 4: _t->MicrophoneGainChanged((*reinterpret_cast< ushort(*)>(_a[1]))); break;
        case 5: _t->Playing(); break;
        case 6: _t->PropertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2]))); break;
        case 7: _t->SpeakerGainChanged((*reinterpret_cast< ushort(*)>(_a[1]))); break;
        case 8: _t->Stopped(); break;
        case 9: { QDBusPendingReply<> _r = _t->CancelCall();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 10: { QDBusPendingReply<> _r = _t->Connect();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 11: { QDBusPendingReply<> _r = _t->Disconnect();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 12: { QDBusPendingReply<ushort> _r = _t->GetMicrophoneGain();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<ushort>*>(_a[0]) = _r; }  break;
        case 13: { QDBusPendingReply<QVariantMap> _r = _t->GetProperties();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QVariantMap>*>(_a[0]) = _r; }  break;
        case 14: { QDBusPendingReply<ushort> _r = _t->GetSpeakerGain();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<ushort>*>(_a[0]) = _r; }  break;
        case 15: { QDBusPendingReply<> _r = _t->IndicateCall();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 16: { QDBusPendingReply<bool> _r = _t->IsConnected();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        case 17: { QDBusPendingReply<bool> _r = _t->IsPlaying();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        case 18: { QDBusPendingReply<> _r = _t->Play();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 19: { QDBusPendingReply<> _r = _t->SetMicrophoneGain((*reinterpret_cast< ushort(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 20: { QDBusPendingReply<> _r = _t->SetProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 21: { QDBusPendingReply<> _r = _t->SetSpeakerGain((*reinterpret_cast< ushort(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 22: { QDBusPendingReply<> _r = _t->Stop();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OrgBluezHeadsetInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OrgBluezHeadsetInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgBluezHeadsetInterface,
      qt_meta_data_OrgBluezHeadsetInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OrgBluezHeadsetInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OrgBluezHeadsetInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OrgBluezHeadsetInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OrgBluezHeadsetInterface))
        return static_cast<void*>(const_cast< OrgBluezHeadsetInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgBluezHeadsetInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void OrgBluezHeadsetInterface::AnswerRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void OrgBluezHeadsetInterface::CallTerminated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void OrgBluezHeadsetInterface::Connected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void OrgBluezHeadsetInterface::Disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void OrgBluezHeadsetInterface::MicrophoneGainChanged(ushort _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OrgBluezHeadsetInterface::Playing()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void OrgBluezHeadsetInterface::PropertyChanged(const QString & _t1, const QDBusVariant & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OrgBluezHeadsetInterface::SpeakerGainChanged(ushort _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void OrgBluezHeadsetInterface::Stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
QT_END_MOC_NAMESPACE
