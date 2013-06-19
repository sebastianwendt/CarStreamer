#include "CConnMgrBT.h"
#include <QDebug>
#include <QString>
#include <QDBusObjectPath>

//echo 0 | sudo tee /proc/sys/kernel/yama/ptrace_scope

#include <unistd.h>

CConnMgrBT::CConnMgrBT(QObject *parent) :
    QObject(parent)
{

    mpAdapter = NULL;
    mpCurrentAudioDevice = NULL;
    mBTDeviceList.clear();
    mCurrentBTDeviceListIndex = 0;

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

    TryConnectNextDevice();
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
   if (mpCurrentAudioDevice)
   {
       if ((mpCurrentAudioDevice->path() != path.path()))
       {
         mpCurrentAudioDevice->Disconnect();
         delete mpCurrentAudioDevice;
         mpCurrentAudioDevice = NULL;
         ConnectDevice(path);
       }
   }
   else
   {
       ConnectDevice(path);
   }

}

void CConnMgrBT::LostDevice(QDBusObjectPath path)
{
   mBTDeviceList.clear();
   mBTDeviceList = mpAdapter->ListDevices();
   if (mpCurrentAudioDevice)
   {
       if (mpCurrentAudioDevice->path() == path.path())
       {
           mpCurrentAudioDevice->Disconnect();
           delete mpCurrentAudioDevice;
           mpCurrentAudioDevice = NULL;
           TryConnectNextDevice();
       }
   }
}



bool CConnMgrBT::ConnectDevice(QDBusObjectPath path)
{

    QVariantMap vm;
    QVariant var;
    quint32 retry = 0;
    if (mpCurrentAudioDevice)
    {
            mpCurrentAudioDevice->Disconnect();
            delete mpCurrentAudioDevice;
            mpCurrentAudioDevice = NULL;
    }

    qDebug() << "Try To Connect to Device " << path.path();

    mpCurrentAudioDevice = new OrgBluezAudioSourceInterface("org.bluez",path.path(),*mDBusConn,this);


    vm=mpCurrentAudioDevice->GetProperties();
    if (vm.isEmpty())
    {
        return false;
    }
    QMapIterator<QString, QVariant> i(vm);
    while (i.hasNext()) {
        i.next();
        qDebug() << i.key() << ": " << i.value().toString();
    }
    mpCurrentAudioDevice->Connect();
    while(retry < 5)
    {
        sleep(1);
        vm=mpCurrentAudioDevice->GetProperties();
       /* if (vm["State"]=="disconnected")
        {
            return false;
        }
        else*/ if (vm["State"]=="connected")
        {
            return true;
        }
        retry ++;
    }
    return true;
}


bool CConnMgrBT::TryConnectNextDevice()
{
    bool retVal = false;
    while (retVal == false)
    {
        if (!mBTDeviceList.isEmpty())
        {
          mCurrentBTDeviceListIndex++;
          if (mCurrentBTDeviceListIndex>=mBTDeviceList.count())
          {
             mCurrentBTDeviceListIndex = 0;
          }
          retVal = ConnectDevice(mBTDeviceList.at(mCurrentBTDeviceListIndex));
        }
        else
        {
            return false;
        }
    }
    return false;


}
