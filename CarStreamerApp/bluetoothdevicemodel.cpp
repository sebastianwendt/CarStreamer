/*  -*- Mode: C++ -*-
 *
 * meego handset bluetooth
 * Copyright © 2010, Intel Corporation.
 *
 * This program is licensed under the terms and conditions of the
 * Apache License, version 2.0.  The full text of the Apache License is at
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 */

#include "bluetoothdevicemodel.h"

BluetoothDevicesModel::BluetoothDevicesModel(QObject *parent) :
	QAbstractListModel(parent), m_connected(false), adapter(NULL)
{
	manager = new OrgBluezManagerInterface(
			"org.bluez",
			"/", QDBusConnection::systemBus(), this);

	connect(manager,SIGNAL(AdapterAdded(QDBusObjectPath)),this,SLOT(adapterAdded(QDBusObjectPath)));
	connect(manager,SIGNAL(AdapterRemoved(QDBusObjectPath)),this,SLOT(adapterRemoved(QDBusObjectPath)));
	adapterAdded(QDBusObjectPath());

	QMetaObject properties = BluetoothDevice::staticMetaObject;

	for(int i=0; i<properties.propertyCount();i++)
	{
		m_roleNames[i]=properties.property(i).name();
	}

	m_roleNames[m_roleNames.keys().count()+1] = "bluetoothDevice";

#if QT_VERSION < QT_VERSION_CHECK(5, 0, 0)
	setRoleNames(m_roleNames);
#endif
}

#if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0)
QHash<int, QByteArray> BluetoothDevicesModel::roleNames() const
{
    return m_roleNames;
}
#endif

int BluetoothDevicesModel::rowCount(const QModelIndex &) const
{
	return m_devices.size();
}

QVariant BluetoothDevicesModel::data(const QModelIndex &index, int role) const
{
	qDebug()<<"requested role: "<<roleNames()[role];

	if(!index.isValid() || index.row() < 0)
	{
		qDebug()<<"index is not valid: "<<index.row()<<","<<index.column();
		return QVariant(); ///this is retarded but it has to be done.
	}

	if(roleNames()[role] == "bluetoothDevice")
	{
		return QVariant::fromValue<QObject*>((QObject*)m_devices[index.row()]);
	}

	QString roleName = roleNames()[role];
	QMetaObject object = BluetoothDevice::staticMetaObject;

	for(int i=0; i<object.propertyCount(); i++)
	{
		if(object.property(i).name() == roleName)
		{

			return object.property(i).read(m_devices[index.row()]);
		}
	}
	return QVariant();
}

QString BluetoothDevicesModel::devicePath(QString devicename)
{
	foreach(BluetoothDevice* device, m_devices)
	{
		if(device->name() == devicename)
			return device->path();
	}
	return "";
}

BluetoothDevice* BluetoothDevicesModel::device(QString path)
{
	foreach(BluetoothDevice* device, m_devices)
	{
		if(device->path() == path)
			return device;
	}
	qDebug()<<"Device not found for path: "<<path;
	return NULL;
}

BluetoothDevice *BluetoothDevicesModel::deviceByHwAddress(QString addy)
{
	foreach(BluetoothDevice* device, m_devices)
	{
		if(device->address().toLower() == addy.toLower())
			return device;
	}

	qDebug()<<"Device not found for adddy: "<<addy;
	return NULL;
}

void BluetoothDevicesModel::makePowered(bool poweredValue)
{
	if(adapter) adapter->SetProperty("Powered", QDBusVariant(poweredValue));
}

bool BluetoothDevicesModel::powered()
{
	if(adapter)
	{
		QVariantMap props = adapter->GetProperties();
		return props["Powered"].toBool();
	}

	return false;
}

void BluetoothDevicesModel::makeDiscoverable(bool discoverableValue)
{
	if(adapter) adapter->SetProperty("Discoverable", QDBusVariant(discoverableValue));
}

bool BluetoothDevicesModel::discoverable()
{
	if(adapter)
	{
		QVariantMap props = adapter->GetProperties();
		return props["Discoverable"].toBool();
	}

	return false;
}

int BluetoothDevicesModel::discoverableTimeout()
{
	if(adapter)
	{
		QVariantMap props = adapter->GetProperties();
		return props["DiscoverableTimeout"].toInt();
	}

	return -1;
}

void BluetoothDevicesModel::setDiscoverableTimeout(int timeout)
{
	if(adapter)
	{
		QDBusReply<void> reply = adapter->SetProperty("DiscoverableTimeout", QDBusVariant((uint)timeout));
		if(!reply.isValid())
		{
			qDebug()<<"error setting discoverable timeout: "<<reply.error().message();
		}
		else
		{
			qDebug()<<"Setting discoverable timeout to "<<timeout;
		}
	}
}

void BluetoothDevicesModel::adapterAdded(QDBusObjectPath path)
{
	if(adapter && adapter->path() == path.path()) return;

	QDBusObjectPath adapterpath = manager->DefaultAdapter();

	if(adapterpath.path() == "")
	{
		///we actually shouldn't ever get here.
		return;
	}

	adapter = new OrgBluezAdapterInterface(
			"org.bluez",
			adapterpath.path(),
			QDBusConnection::systemBus(), this);

	connect(adapter,
			SIGNAL(PropertyChanged(QString,QDBusVariant)),
			this,
			SLOT(adapterPropertyChanged(QString,QDBusVariant)));

	connect(adapter,
		SIGNAL(DeviceRemoved(QDBusObjectPath)),
		this,
		SLOT(deviceRemoved(QDBusObjectPath)));

	connect(adapter,
		SIGNAL(DeviceCreated(QDBusObjectPath)),
		this,
		SLOT(deviceCreated(QDBusObjectPath)));

	adapterChanged(true);

	QList<QDBusObjectPath> list = adapter->ListDevices();
	foreach(QDBusObjectPath item, list)
	{
		deviceCreated(item);
	}
}

void BluetoothDevicesModel::adapterRemoved(QDBusObjectPath)
{
	QDBusObjectPath adapterpath = manager->DefaultAdapter();

	if(adapterpath.path() == "")
	{
		beginRemoveRows(QModelIndex(), 0, m_devices.size()-1);
		foreach(BluetoothDevice* device, m_devices)
		{
			updateConnected(device->connected());
			device->deleteLater();
		}
		m_devices.clear();
		endRemoveRows();

		if(adapter) delete adapter;
		adapter = NULL;
		adapterChanged(false);
		return;
	}
}

void BluetoothDevicesModel::deviceCreated(QDBusObjectPath devicepath)
{
	BluetoothDevice* device = new BluetoothDevice(devicepath,this);

	updateConnected(device->connected());
	connect(device,SIGNAL(propertyChanged(QString,QVariant)),this,SLOT(devicePropertyChanged(QString,QVariant)));

	beginInsertRows(QModelIndex(),m_devices.size(),m_devices.size());
	m_devices.append(device);
	endInsertRows();
}

void BluetoothDevicesModel::deviceRemoved(QDBusObjectPath devicepath)
{
	for(int i=0; i<m_devices.size(); i++)
	{

		if(m_devices[i]->path() == devicepath.path())
		{
			beginRemoveRows(QModelIndex(), i, i);
			m_devices[i]->deleteLater();
			m_devices.removeAt(i);
			endRemoveRows();
		}
	}
}

void BluetoothDevicesModel::devicePropertyChanged(QString name, QVariant value)
{
	BluetoothDevice* device = qobject_cast<BluetoothDevice*>(sender());

	qDebug()<<"device property changed for "<<device->address()<<": "<<name<<" "<<value;

	if(name == "Paired" && value.toBool() == true)
	{
		emit devicePaired(device);
	}

	else if(name == "Connected")
	{
		updateConnected(value.toBool());
	}
	int row = m_devices.indexOf(device);
	if(row == -1) return; ///device doesn't exist.

	dataChanged(createIndex(row, 0),createIndex(row, 0));
}

void BluetoothDevicesModel::adapterPropertyChanged(QString name, QDBusVariant value)
{
	qDebug()<<"adapter property changed: "<<name<<" "<<value.variant();

	if(name == "Powered")
	{
		poweredChanged(value.variant().toBool());
	}
	else if(name == "Discoverable")
	{
		discoverableChanged(value.variant().toBool());
	}
	else if(name == "DiscoverableTimeout")
	{
		discoverableTimeoutChanged(value.variant().toInt());
	}
}

void BluetoothDevicesModel::updateConnected(bool deviceconnectedStatus)
{
	if(deviceconnectedStatus)
	{
		if(!m_connected)
		{
			m_connected = true;
			connectedChanged(m_connected);
		}
	}
	else
	{
		bool temp = false;
		foreach(BluetoothDevice* device, devices())
		{
			temp |= device->connected();
		}

		if(temp != m_connected)
		{
			m_connected = temp;
			connectedChanged(m_connected);
		}
	}
}
