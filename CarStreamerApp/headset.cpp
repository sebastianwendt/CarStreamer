/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -p headset.h:headset.cpp headset.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "headset.h"

/*
 * Implementation of interface class OrgBluezHeadsetInterface
 */

OrgBluezHeadsetInterface::OrgBluezHeadsetInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

OrgBluezHeadsetInterface::~OrgBluezHeadsetInterface()
{
}

