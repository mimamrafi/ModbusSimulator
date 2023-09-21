QT += serialbus widgets
requires(qtConfig(combobox))

qtConfig(modbus-serialport): QT += serialport

TARGET = modbusclient
TEMPLATE = app
CONFIG += c++17

SOURCES += \
    client_mainwindow.cpp \
    client_settingsdialog.cpp \
    client_writeregistermodel.cpp \
    main.cpp

HEADERS += \
    client_mainwindow.h \
    client_settingsdialog.h \
    client_writeregistermodel.h

FORMS += \
    client_mainwindow.ui \
    client_settingsdialog.ui


RESOURCES += \
    client.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/serialbus/modbus/client
win32:RC_ICONS += images/HDS.ico
INSTALLS += target
VERSION = 0.4.0.1
TARGET = "HDS Client"
QMAKE_TARGET_COMPANY = PT.Hexa Daya Solusi
QMAKE_TARGET_PRODUCT = HDS_Client
QMAKE_TARGET_DESCRIPTION = description
QMAKE_TARGET_COPYRIGHT = copyright
