/********************************************************************************
** Form generated from reading UI file 'custom_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOM_MAINWINDOW_H
#define UI_CUSTOM_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionConnect;
    QAction *actionDisconnect;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *addressPort;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_28;
    QSpinBox *serverAddress;
    QPushButton *connectButton;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *server;
    QFormLayout *formLayout_2;
    QLabel *address;
    QLabel *label_3;
    QLabel *label_21;
    QLineEdit *register_0;
    QLabel *label_22;
    QLineEdit *register_1;
    QLabel *label_23;
    QLineEdit *register_2;
    QLabel *label_11;
    QLineEdit *register_3;
    QLabel *label_8;
    QLineEdit *register_4;
    QLabel *label_12;
    QLineEdit *register_5;
    QLabel *label_13;
    QLineEdit *register_6;
    QLabel *label_14;
    QLineEdit *register_7;
    QLabel *label_15;
    QLineEdit *register_8;
    QLabel *label_16;
    QLineEdit *register_9;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_5;
    QSpinBox *startAddress;
    QLabel *label_6;
    QComboBox *numberOfRegisters;
    QTreeView *registersTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *readButton;
    QPushButton *writeButton;
    QMenuBar *menubar;
    QMenu *menuDevice;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(620, 599);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName("actionConnect");
        actionConnect->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName("actionDisconnect");
        actionDisconnect->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        addressPort = new QLineEdit(centralwidget);
        addressPort->setObjectName("addressPort");
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addressPort->sizePolicy().hasHeightForWidth());
        addressPort->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(addressPort, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(13, 17, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        label_28 = new QLabel(centralwidget);
        label_28->setObjectName("label_28");
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_28, 0, 3, 1, 1);

        serverAddress = new QSpinBox(centralwidget);
        serverAddress->setObjectName("serverAddress");
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(serverAddress->sizePolicy().hasHeightForWidth());
        serverAddress->setSizePolicy(sizePolicy3);
        serverAddress->setMinimum(1);
        serverAddress->setMaximum(247);

        gridLayout->addWidget(serverAddress, 0, 4, 1, 1);

        connectButton = new QPushButton(centralwidget);
        connectButton->setObjectName("connectButton");
        sizePolicy3.setHeightForWidth(connectButton->sizePolicy().hasHeightForWidth());
        connectButton->setSizePolicy(sizePolicy3);
        connectButton->setCheckable(false);
        connectButton->setAutoDefault(false);

        gridLayout->addWidget(connectButton, 0, 5, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 6);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        QFont font;
        font.setBold(true);
        label_9->setFont(font);

        gridLayout_2->addWidget(label_9, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 2, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setWordWrap(true);

        gridLayout_2->addWidget(label_7, 0, 3, 2, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setFont(font);

        gridLayout_2->addWidget(label_10, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        server = new QGroupBox(centralwidget);
        server->setObjectName("server");
        formLayout_2 = new QFormLayout(server);
        formLayout_2->setObjectName("formLayout_2");
        address = new QLabel(server);
        address->setObjectName("address");
        sizePolicy2.setHeightForWidth(address->sizePolicy().hasHeightForWidth());
        address->setSizePolicy(sizePolicy2);
        address->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, address);

        label_3 = new QLabel(server);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, label_3);

        label_21 = new QLabel(server);
        label_21->setObjectName("label_21");
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_21);

        register_0 = new QLineEdit(server);
        register_0->setObjectName("register_0");
        register_0->setMaxLength(32767);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, register_0);

        label_22 = new QLabel(server);
        label_22->setObjectName("label_22");
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_22);

        register_1 = new QLineEdit(server);
        register_1->setObjectName("register_1");
        register_1->setMaxLength(32767);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, register_1);

        label_23 = new QLabel(server);
        label_23->setObjectName("label_23");
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_23);

        register_2 = new QLineEdit(server);
        register_2->setObjectName("register_2");
        register_2->setMaxLength(32767);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, register_2);

        label_11 = new QLabel(server);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_11);

        register_3 = new QLineEdit(server);
        register_3->setObjectName("register_3");
        register_3->setMaxLength(32767);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, register_3);

        label_8 = new QLabel(server);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_8);

        register_4 = new QLineEdit(server);
        register_4->setObjectName("register_4");
        register_4->setMaxLength(32767);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, register_4);

        label_12 = new QLabel(server);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_12);

        register_5 = new QLineEdit(server);
        register_5->setObjectName("register_5");
        register_5->setMaxLength(32767);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, register_5);

        label_13 = new QLabel(server);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_13);

        register_6 = new QLineEdit(server);
        register_6->setObjectName("register_6");
        register_6->setMaxLength(32767);

        formLayout_2->setWidget(7, QFormLayout::FieldRole, register_6);

        label_14 = new QLabel(server);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_14);

        register_7 = new QLineEdit(server);
        register_7->setObjectName("register_7");
        register_7->setMaxLength(32767);

        formLayout_2->setWidget(8, QFormLayout::FieldRole, register_7);

        label_15 = new QLabel(server);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(9, QFormLayout::LabelRole, label_15);

        register_8 = new QLineEdit(server);
        register_8->setObjectName("register_8");
        register_8->setMaxLength(32767);

        formLayout_2->setWidget(9, QFormLayout::FieldRole, register_8);

        label_16 = new QLabel(server);
        label_16->setObjectName("label_16");
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(10, QFormLayout::LabelRole, label_16);

        register_9 = new QLineEdit(server);
        register_9->setObjectName("register_9");
        register_9->setMaxLength(32767);

        formLayout_2->setWidget(10, QFormLayout::FieldRole, register_9);


        horizontalLayout_2->addWidget(server);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        startAddress = new QSpinBox(groupBox);
        startAddress->setObjectName("startAddress");
        startAddress->setMaximum(9);

        formLayout->setWidget(0, QFormLayout::FieldRole, startAddress);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        numberOfRegisters = new QComboBox(groupBox);
        numberOfRegisters->addItem(QString());
        numberOfRegisters->addItem(QString());
        numberOfRegisters->addItem(QString());
        numberOfRegisters->addItem(QString());
        numberOfRegisters->addItem(QString());
        numberOfRegisters->addItem(QString());
        numberOfRegisters->addItem(QString());
        numberOfRegisters->addItem(QString());
        numberOfRegisters->addItem(QString());
        numberOfRegisters->addItem(QString());
        numberOfRegisters->setObjectName("numberOfRegisters");

        formLayout->setWidget(1, QFormLayout::FieldRole, numberOfRegisters);

        registersTable = new QTreeView(groupBox);
        registersTable->setObjectName("registersTable");
        registersTable->setProperty("showDropIndicator", QVariant(true));
        registersTable->setAlternatingRowColors(true);
        registersTable->setRootIsDecorated(false);
        registersTable->setUniformRowHeights(true);
        registersTable->setItemsExpandable(false);
        registersTable->setExpandsOnDoubleClick(false);
        registersTable->header()->setVisible(true);

        formLayout->setWidget(2, QFormLayout::SpanningRole, registersTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_3 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        readButton = new QPushButton(groupBox);
        readButton->setObjectName("readButton");
        sizePolicy3.setHeightForWidth(readButton->sizePolicy().hasHeightForWidth());
        readButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(readButton);

        writeButton = new QPushButton(groupBox);
        writeButton->setObjectName("writeButton");

        horizontalLayout->addWidget(writeButton);


        formLayout->setLayout(3, QFormLayout::SpanningRole, horizontalLayout);


        horizontalLayout_2->addWidget(groupBox);


        gridLayout_3->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 620, 25));
        menuDevice = new QMenu(menubar);
        menuDevice->setObjectName("menuDevice");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuDevice->menuAction());
        menuDevice->addAction(actionConnect);
        menuDevice->addAction(actionDisconnect);
        menuDevice->addSeparator();
        menuDevice->addAction(actionExit);

        retranslateUi(MainWindow);

        connectButton->setDefault(true);
        numberOfRegisters->setCurrentIndex(9);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Modbus Custom", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        actionDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Address & Port:", nullptr));
        addressPort->setText(QCoreApplication::translate("MainWindow", "127.0.0.1:50200", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Server Address:", nullptr));
        connectButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Custom Function code (Read):", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "0x41", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "The Modbus specification reserves two ranges of user-defined function codes, i.e. 0x41 to 0x48 and from 0x64 to 0x6e.", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Custom Function code (Write):", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "0x42", nullptr));
        server->setTitle(QCoreApplication::translate("MainWindow", "Server", nullptr));
        address->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Registers", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        register_0->setPlaceholderText(QCoreApplication::translate("MainWindow", "Hexadecimal A-F, a-f, 0-9.", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        register_1->setPlaceholderText(QCoreApplication::translate("MainWindow", "Hexadecimal A-F, a-f, 0-9.", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        register_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Hexadecimal A-F, a-f, 0-9.", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        register_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "Hexadecimal A-F, a-f, 0-9.", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        register_4->setPlaceholderText(QCoreApplication::translate("MainWindow", "Hexadecimal A-F, a-f, 0-9.", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        register_5->setPlaceholderText(QCoreApplication::translate("MainWindow", "Hexadecimal A-F, a-f, 0-9.", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        register_6->setPlaceholderText(QCoreApplication::translate("MainWindow", "Hexadecimal A-F, a-f, 0-9.", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        register_7->setPlaceholderText(QCoreApplication::translate("MainWindow", "Hexadecimal A-F, a-f, 0-9.", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        register_8->setPlaceholderText(QCoreApplication::translate("MainWindow", "Hexadecimal A-F, a-f, 0-9.", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        register_9->setPlaceholderText(QCoreApplication::translate("MainWindow", "Hexadecimal A-F, a-f, 0-9.", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Client", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Start address:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Number of registers:", nullptr));
        numberOfRegisters->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        numberOfRegisters->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        numberOfRegisters->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        numberOfRegisters->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        numberOfRegisters->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        numberOfRegisters->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        numberOfRegisters->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        numberOfRegisters->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));
        numberOfRegisters->setItemText(8, QCoreApplication::translate("MainWindow", "9", nullptr));
        numberOfRegisters->setItemText(9, QCoreApplication::translate("MainWindow", "10", nullptr));

        readButton->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        writeButton->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
        menuDevice->setTitle(QCoreApplication::translate("MainWindow", "Device", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOM_MAINWINDOW_H
