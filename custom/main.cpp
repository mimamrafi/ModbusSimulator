// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include "custom_mainwindow.h"

#include <QApplication>
#include <QLoggingCategory>

int main(int argc, char *argv[])
{
    // Uncomment the following line to enable logging
    // QLoggingCategory::setFilterRules(QStringLiteral("qt.modbus* = true"));

    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/images/HDS_Icon.png"));
    MainWindow w;
    w.show();

    return a.exec();
}
