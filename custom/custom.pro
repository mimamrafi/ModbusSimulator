QT += serialbus widgets

TARGET = customcommand
TEMPLATE = app
CONFIG += c++11

SOURCES += main.cpp \
    custom_mainwindow.cpp \
    custom_modbusclient.cpp \
    custom_modbusserver.cpp \
    custom_registermodel.cpp

HEADERS += \
     custom_mainwindow.h \
     custom_modbusclient.h \
     custom_modbusserver.h \
     custom_registermodel.h

FORMS += \
    custom_mainwindow.ui

RESOURCES += images.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/serialbus/modbus/custom
INSTALLS += target

win32:RC_ICONS += images/HDS.ico
INSTALLS += target
VERSION = 0.4.0.1
TARGET = "HDS Modbus Custom"
QMAKE_TARGET_COMPANY = PT.Hexa Daya Solusi
QMAKE_TARGET_PRODUCT = HDS_Modbus_Custom
QMAKE_TARGET_DESCRIPTION = description
QMAKE_TARGET_COPYRIGHT = copyright
