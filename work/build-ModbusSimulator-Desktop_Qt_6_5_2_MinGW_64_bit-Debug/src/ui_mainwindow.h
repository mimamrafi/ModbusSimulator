/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *PB_Server;
    QPushButton *PB_Custom;
    QPushButton *PB_Client;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(276, 178);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        PB_Server = new QPushButton(centralwidget);
        PB_Server->setObjectName("PB_Server");
        PB_Server->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(PB_Server);

        PB_Custom = new QPushButton(centralwidget);
        PB_Custom->setObjectName("PB_Custom");
        PB_Custom->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(PB_Custom);

        PB_Client = new QPushButton(centralwidget);
        PB_Client->setObjectName("PB_Client");
        PB_Client->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(PB_Client);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 276, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Modbus Simulator", nullptr));
        PB_Server->setText(QCoreApplication::translate("MainWindow", "Server", nullptr));
        PB_Custom->setText(QCoreApplication::translate("MainWindow", "Custom", nullptr));
        PB_Client->setText(QCoreApplication::translate("MainWindow", "Client", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
