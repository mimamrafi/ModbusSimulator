/********************************************************************************
** Form generated from reading UI file 'clientwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWindow
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_27;
    QPushButton *connectButton;
    QSpacerItem *horizontalSpacer;
    QSpinBox *serverEdit;
    QComboBox *connectType;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *portEdit;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QSpinBox *readAddress;
    QLabel *label_5;
    QComboBox *readSize;
    QLabel *label_9;
    QListWidget *readValue;
    QGroupBox *writeGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QTreeView *writeValueTable;
    QSpinBox *writeAddress;
    QLabel *label_8;
    QComboBox *writeSize;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QComboBox *writeTable;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *readButton;
    QPushButton *writeButton;
    QPushButton *readWriteButton;

    void setupUi(QWidget *ClientWindow)
    {
        if (ClientWindow->objectName().isEmpty())
            ClientWindow->setObjectName("ClientWindow");
        ClientWindow->resize(575, 421);
        verticalLayout = new QVBoxLayout(ClientWindow);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(7, 7, 7, 7);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_27 = new QLabel(ClientWindow);
        label_27->setObjectName("label_27");
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_27, 0, 5, 1, 1);

        connectButton = new QPushButton(ClientWindow);
        connectButton->setObjectName("connectButton");
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(connectButton->sizePolicy().hasHeightForWidth());
        connectButton->setSizePolicy(sizePolicy1);
        connectButton->setCheckable(false);
        connectButton->setAutoDefault(false);

        gridLayout->addWidget(connectButton, 0, 7, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        serverEdit = new QSpinBox(ClientWindow);
        serverEdit->setObjectName("serverEdit");
        sizePolicy1.setHeightForWidth(serverEdit->sizePolicy().hasHeightForWidth());
        serverEdit->setSizePolicy(sizePolicy1);
        serverEdit->setMinimum(1);
        serverEdit->setMaximum(247);

        gridLayout->addWidget(serverEdit, 0, 6, 1, 1);

        connectType = new QComboBox(ClientWindow);
        connectType->addItem(QString());
        connectType->addItem(QString());
        connectType->setObjectName("connectType");

        gridLayout->addWidget(connectType, 0, 1, 1, 1);

        label_2 = new QLabel(ClientWindow);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label = new QLabel(ClientWindow);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        portEdit = new QLineEdit(ClientWindow);
        portEdit->setObjectName("portEdit");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(portEdit->sizePolicy().hasHeightForWidth());
        portEdit->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(portEdit, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBox_2 = new QGroupBox(ClientWindow);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setMinimumSize(QSize(250, 0));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        readAddress = new QSpinBox(groupBox_2);
        readAddress->setObjectName("readAddress");
        readAddress->setMaximum(9);

        gridLayout_3->addWidget(readAddress, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        readSize = new QComboBox(groupBox_2);
        readSize->addItem(QString());
        readSize->addItem(QString());
        readSize->addItem(QString());
        readSize->addItem(QString());
        readSize->addItem(QString());
        readSize->addItem(QString());
        readSize->addItem(QString());
        readSize->addItem(QString());
        readSize->addItem(QString());
        readSize->addItem(QString());
        readSize->setObjectName("readSize");

        gridLayout_3->addWidget(readSize, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);

        readValue = new QListWidget(groupBox_2);
        readValue->setObjectName("readValue");
        readValue->setMinimumSize(QSize(0, 0));

        gridLayout_3->addWidget(readValue, 3, 0, 1, 2);


        horizontalLayout_2->addWidget(groupBox_2);

        writeGroupBox = new QGroupBox(ClientWindow);
        writeGroupBox->setObjectName("writeGroupBox");
        writeGroupBox->setMinimumSize(QSize(225, 0));
        gridLayout_2 = new QGridLayout(writeGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        label_7 = new QLabel(writeGroupBox);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        writeValueTable = new QTreeView(writeGroupBox);
        writeValueTable->setObjectName("writeValueTable");
        writeValueTable->setProperty("showDropIndicator", QVariant(true));
        writeValueTable->setAlternatingRowColors(true);
        writeValueTable->setRootIsDecorated(false);
        writeValueTable->setUniformRowHeights(true);
        writeValueTable->setItemsExpandable(false);
        writeValueTable->setExpandsOnDoubleClick(false);
        writeValueTable->header()->setVisible(true);

        gridLayout_2->addWidget(writeValueTable, 3, 0, 1, 2);

        writeAddress = new QSpinBox(writeGroupBox);
        writeAddress->setObjectName("writeAddress");
        writeAddress->setMaximum(9);

        gridLayout_2->addWidget(writeAddress, 0, 1, 1, 1);

        label_8 = new QLabel(writeGroupBox);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        writeSize = new QComboBox(writeGroupBox);
        writeSize->addItem(QString());
        writeSize->addItem(QString());
        writeSize->addItem(QString());
        writeSize->addItem(QString());
        writeSize->addItem(QString());
        writeSize->addItem(QString());
        writeSize->addItem(QString());
        writeSize->addItem(QString());
        writeSize->addItem(QString());
        writeSize->addItem(QString());
        writeSize->setObjectName("writeSize");

        gridLayout_2->addWidget(writeSize, 1, 1, 1, 1);

        label_3 = new QLabel(writeGroupBox);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);


        horizontalLayout_2->addWidget(writeGroupBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_6 = new QLabel(ClientWindow);
        label_6->setObjectName("label_6");

        horizontalLayout->addWidget(label_6);

        writeTable = new QComboBox(ClientWindow);
        writeTable->setObjectName("writeTable");

        horizontalLayout->addWidget(writeTable);

        horizontalSpacer_2 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        readButton = new QPushButton(ClientWindow);
        readButton->setObjectName("readButton");
        sizePolicy1.setHeightForWidth(readButton->sizePolicy().hasHeightForWidth());
        readButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(readButton);

        writeButton = new QPushButton(ClientWindow);
        writeButton->setObjectName("writeButton");

        horizontalLayout->addWidget(writeButton);

        readWriteButton = new QPushButton(ClientWindow);
        readWriteButton->setObjectName("readWriteButton");
        readWriteButton->setEnabled(false);

        horizontalLayout->addWidget(readWriteButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ClientWindow);

        connectButton->setDefault(true);
        readSize->setCurrentIndex(9);
        writeSize->setCurrentIndex(9);


        QMetaObject::connectSlotsByName(ClientWindow);
    } // setupUi

    void retranslateUi(QWidget *ClientWindow)
    {
        ClientWindow->setWindowTitle(QCoreApplication::translate("ClientWindow", "Form", nullptr));
        label_27->setText(QCoreApplication::translate("ClientWindow", "Server Address:", nullptr));
        connectButton->setText(QCoreApplication::translate("ClientWindow", "Connect", nullptr));
        connectType->setItemText(0, QCoreApplication::translate("ClientWindow", "Serial", nullptr));
        connectType->setItemText(1, QCoreApplication::translate("ClientWindow", "TCP", nullptr));

        label_2->setText(QCoreApplication::translate("ClientWindow", "Port:", nullptr));
        label->setText(QCoreApplication::translate("ClientWindow", "Connection type:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ClientWindow", "Read", nullptr));
        label_4->setText(QCoreApplication::translate("ClientWindow", "Start address:", nullptr));
        label_5->setText(QCoreApplication::translate("ClientWindow", "Number of values:", nullptr));
        readSize->setItemText(0, QCoreApplication::translate("ClientWindow", "1", nullptr));
        readSize->setItemText(1, QCoreApplication::translate("ClientWindow", "2", nullptr));
        readSize->setItemText(2, QCoreApplication::translate("ClientWindow", "3", nullptr));
        readSize->setItemText(3, QCoreApplication::translate("ClientWindow", "4", nullptr));
        readSize->setItemText(4, QCoreApplication::translate("ClientWindow", "5", nullptr));
        readSize->setItemText(5, QCoreApplication::translate("ClientWindow", "6", nullptr));
        readSize->setItemText(6, QCoreApplication::translate("ClientWindow", "7", nullptr));
        readSize->setItemText(7, QCoreApplication::translate("ClientWindow", "8", nullptr));
        readSize->setItemText(8, QCoreApplication::translate("ClientWindow", "9", nullptr));
        readSize->setItemText(9, QCoreApplication::translate("ClientWindow", "10", nullptr));

        label_9->setText(QCoreApplication::translate("ClientWindow", "Result:", nullptr));
        writeGroupBox->setTitle(QCoreApplication::translate("ClientWindow", "Write", nullptr));
        label_7->setText(QCoreApplication::translate("ClientWindow", "Start address:", nullptr));
        label_8->setText(QCoreApplication::translate("ClientWindow", "Number of values:", nullptr));
        writeSize->setItemText(0, QCoreApplication::translate("ClientWindow", "1", nullptr));
        writeSize->setItemText(1, QCoreApplication::translate("ClientWindow", "2", nullptr));
        writeSize->setItemText(2, QCoreApplication::translate("ClientWindow", "3", nullptr));
        writeSize->setItemText(3, QCoreApplication::translate("ClientWindow", "4", nullptr));
        writeSize->setItemText(4, QCoreApplication::translate("ClientWindow", "5", nullptr));
        writeSize->setItemText(5, QCoreApplication::translate("ClientWindow", "6", nullptr));
        writeSize->setItemText(6, QCoreApplication::translate("ClientWindow", "7", nullptr));
        writeSize->setItemText(7, QCoreApplication::translate("ClientWindow", "8", nullptr));
        writeSize->setItemText(8, QCoreApplication::translate("ClientWindow", "9", nullptr));
        writeSize->setItemText(9, QCoreApplication::translate("ClientWindow", "10", nullptr));

        label_3->setText(QString());
        label_6->setText(QCoreApplication::translate("ClientWindow", "Table:", nullptr));
        readButton->setText(QCoreApplication::translate("ClientWindow", "Read", nullptr));
        writeButton->setText(QCoreApplication::translate("ClientWindow", "Write", nullptr));
        readWriteButton->setText(QCoreApplication::translate("ClientWindow", "Read-Write", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWindow: public Ui_ClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
