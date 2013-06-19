#ifndef CCONNMGRBT_H
#define CCONNMGRBT_H

#include <QObject>
#include <bluemanager.h>
#include <blueadapter.h>
#include <bluedevice.h>
#include <audiosource.h>
#include <QDBusConnection>

class CConnMgrBT : public QObject
{
    Q_OBJECT
public:
    explicit CConnMgrBT(QObject *parent = 0);
    
signals:
    
public slots:
    void AdapterInserted(QDBusObjectPath AdapterPath);
    void AdapterRemoved(QDBusObjectPath AdapterPath);
    void NewDeviceFound(QDBusObjectPath);
    void LostDevice(QDBusObjectPath);

    bool ConnectDevice(QDBusObjectPath);
    bool TryConnectNextDevice();

private:
    OrgBluezManagerInterface *mpManager;
    QDBusConnection *mDBusConn;

    OrgBluezAdapterInterface *mpAdapter;
    OrgBluezAudioSourceInterface *mpCurrentAudioDevice;

    void SetDiscoverable(bool visible);
    void SetPairable(bool pairable);
    void SetBTName(QString Name);

    QList <QDBusObjectPath> mBTDeviceList;
    
    qint32 mCurrentBTDeviceListIndex;

};

#endif // CCONNMGRBT_H
