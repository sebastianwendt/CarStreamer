#include "CConnMgrBT.h"
#include <QDebug>
#include <QString>
#include <QDBusObjectPath>

//echo 0 | sudo tee /proc/sys/kernel/yama/ptrace_scope

CConnMgrBT::CConnMgrBT(QObject *parent) :
    QObject(parent)
{

    mpAdapter = NULL;
    mBTDeviceList.clear();

    mDBusConn =  new QDBusConnection(QDBusConnection::systemBus());
    qDebug() << "D-Bus Connected: " << mDBusConn->isConnected();
    mpManager = new OrgBluezManagerInterface("org.bluez","/",*mDBusConn,this);
    connect (mpManager,SIGNAL(AdapterAdded(QDBusObjectPath)),this,SLOT(AdapterInserted(QDBusObjectPath)));
    connect (mpManager,SIGNAL(AdapterRemoved(QDBusObjectPath)),this,SLOT(AdapterRemoved(QDBusObjectPath)));

    QDBusObjectPath str = mpManager->DefaultAdapter();
    qDebug() << "Default BT Adapter: " << str.path();
    if (!str.path().isEmpty())
    {
        AdapterInserted(str);
    }

}


void CConnMgrBT::AdapterInserted(QDBusObjectPath AdapterPath)
{
    QVariantMap vm;
    QVariant var;
    qDebug("New Bluetooth Adapter found");

    mpAdapter = new OrgBluezAdapterInterface("org.bluez",AdapterPath.path(),*mDBusConn,this);

    SetDiscoverable(true);
    SetPairable(true);
    SetBTName("CarStreamer");

    vm = mpAdapter->GetProperties();

    QMapIterator<QString, QVariant> i(vm);
    while (i.hasNext()) {
        i.next();
        qDebug() << i.key() << ": " << i.value().toString();
    }

    mBTDeviceList = mpAdapter->ListDevices();
    QListIterator <QDBusObjectPath> it(mBTDeviceList);
    while(it.hasNext())
    {
        QDBusObjectPath dbobj = it.next();
        qDebug() << "Paired Devices:" << dbobj.path();
    }

    connect (mpAdapter,SIGNAL(DeviceCreated(QDBusObjectPath)),this,SLOT(NewDeviceFound(QDBusObjectPath)));
    connect (mpAdapter,SIGNAL(DeviceRemoved(QDBusObjectPath)),this, SLOT(LostDevice(QDBusObjectPath)));

}

void CConnMgrBT::AdapterRemoved(QDBusObjectPath AdapterPath)
{
    AdapterPath = AdapterPath;
    mBTDeviceList.clear();
    delete mpAdapter;
    mpAdapter = NULL;
}


void CConnMgrBT::SetDiscoverable(bool visible)
{
    //Set Adapter Discoverable
    QVariant var = visible;
    QDBusVariant dbvar;
    dbvar.setVariant(var);
    if (mpAdapter)
      mpAdapter->SetProperty("Discoverable",dbvar);
}

void CConnMgrBT::SetBTName(QString Name)
{
    //Set Adapter BT Name
    QVariant var = Name;
    QDBusVariant dbvar;
    var = Name;
    dbvar.setVariant(var);
    if (mpAdapter)
      mpAdapter->SetProperty("Name",dbvar);
}


void CConnMgrBT::SetPairable(bool pairable)
{
    //Set Adapter Pairable
    QVariant var = pairable;
    QDBusVariant dbvar;
    dbvar.setVariant(var);
    if (mpAdapter)
      mpAdapter->SetProperty("Pairable",dbvar);
}

void CConnMgrBT::NewDeviceFound(QDBusObjectPath path)
{
   mBTDeviceList.clear();
   mBTDeviceList = mpAdapter->ListDevices();
}

void CConnMgrBT::LostDevice(QDBusObjectPath path)
{
   mBTDeviceList.clear();
   mBTDeviceList = mpAdapter->ListDevices();
}

