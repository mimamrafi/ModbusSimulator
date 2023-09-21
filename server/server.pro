QT += serialbus widgets
requires(qtConfig(combobox))

qtConfig(modbus-serialport): QT += serialport

TARGET = modbusserver
TEMPLATE = app
CONFIG += c++11

SOURCES += \
    main.cpp \
    server_mainwindow.cpp \
    server_settingsdialog.cpp

HEADERS += \
    server_mainwindow.h \
    server_settingsdialog.h

FORMS += \
    server_mainwindow.ui \
    server_settingsdialog.ui

RESOURCES += \
    server.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/serialbus/modbus/server
INSTALLS += target

win32:RC_ICONS += images/HDS.ico
INSTALLS += target
VERSION = 0.4.0.1
TARGET = "HDS Server"
QMAKE_TARGET_COMPANY = PT.Hexa Daya Solusi
QMAKE_TARGET_PRODUCT = HDS_Server
QMAKE_TARGET_DESCRIPTION = description
QMAKE_TARGET_COPYRIGHT = copyright
