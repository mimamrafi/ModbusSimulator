// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include <QModbusTcpServer>

#ifndef CUSTOM_MODBUSSERVER_H
#define CUSTOM_MODBUSSERVER_H

//! [custom_server]
class ModbusServer : public QModbusTcpServer
{
    Q_OBJECT
    Q_DISABLE_COPY_MOVE(ModbusServer)

public:
    ModbusServer(QObject *parent = nullptr);

private:
    QModbusResponse processPrivateRequest(const QModbusPdu &request) override;
};
//! [custom_server]

#endif // CUSTOM_MODBUSSERVER_H
