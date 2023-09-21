/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

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

class Ui_Client
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QSpinBox *serverEdit;
    QComboBox *connectType;
    QSpacerItem *horizontalSpacer;
    QLineEdit *portEdit;
    QLabel *label_27;
    QLabel *label_2;
    QPushButton *connectButton;
    QLabel *label;
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

    void setupUi(QWidget *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName("Client");
        Client->resize(563, 334);
        verticalLayout = new QVBoxLayout(Client);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        serverEdit = new QSpinBox(Client);
        serverEdit->setObjectName("serverEdit");
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serverEdit->sizePolicy().hasHeightForWidth());
        serverEdit->setSizePolicy(sizePolicy);
        serverEdit->setMinimum(1);
        serverEdit->setMaximum(247);

        gridLayout->addWidget(serverEdit, 0, 6, 1, 1);

        connectType = new QComboBox(Client);
        connectType->addItem(QString());
        connectType->addItem(QString());
        connectType->setObjectName("connectType");

        gridLayout->addWidget(connectType, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        portEdit = new QLineEdit(Client);
        portEdit->setObjectName("portEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(portEdit->sizePolicy().hasHeightForWidth());
        portEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(portEdit, 0, 3, 1, 1);

        label_27 = new QLabel(Client);
        label_27->setObjectName("label_27");
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_27, 0, 5, 1, 1);

        label_2 = new QLabel(Client);
        label_2->setObjectName("label_2");
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        connectButton = new QPushButton(Client);
        connectButton->setObjectName("connectButton");
        sizePolicy.setHeightForWidth(connectButton->sizePolicy().hasHeightForWidth());
        connectButton->setSizePolicy(sizePolicy);
        connectButton->setCheckable(false);
        connectButton->setAutoDefault(false);

        gridLayout->addWidget(connectButton, 0, 7, 1, 1);

        label = new QLabel(Client);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBox_2 = new QGroupBox(Client);
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

        writeGroupBox = new QGroupBox(Client);
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
        label_6 = new QLabel(Client);
        label_6->setObjectName("label_6");

        horizontalLayout->addWidget(label_6);

        writeTable = new QComboBox(Client);
        writeTable->setObjectName("writeTable");

        horizontalLayout->addWidget(writeTable);

        horizontalSpacer_2 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        readButton = new QPushButton(Client);
        readButton->setObjectName("readButton");
        sizePolicy.setHeightForWidth(readButton->sizePolicy().hasHeightForWidth());
        readButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(readButton);

        writeButton = new QPushButton(Client);
        writeButton->setObjectName("writeButton");

        horizontalLayout->addWidget(writeButton);

        readWriteButton = new QPushButton(Client);
        readWriteButton->setObjectName("readWriteButton");
        readWriteButton->setEnabled(false);

        horizontalLayout->addWidget(readWriteButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Client);

        connectButton->setDefault(true);
        readSize->setCurrentIndex(9);
        writeSize->setCurrentIndex(9);


        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QWidget *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Form", nullptr));
        connectType->setItemText(0, QCoreApplication::translate("Client", "Serial", nullptr));
        connectType->setItemText(1, QCoreApplication::translate("Client", "TCP", nullptr));

        label_27->setText(QCoreApplication::translate("Client", "Server Address:", nullptr));
        label_2->setText(QCoreApplication::translate("Client", "Port:", nullptr));
        connectButton->setText(QCoreApplication::translate("Client", "Connect", nullptr));
        label->setText(QCoreApplication::translate("Client", "Connection type:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Client", "Read", nullptr));
        label_4->setText(QCoreApplication::translate("Client", "Start address:", nullptr));
        label_5->setText(QCoreApplication::translate("Client", "Number of values:", nullptr));
        readSize->setItemText(0, QCoreApplication::translate("Client", "1", nullptr));
        readSize->setItemText(1, QCoreApplication::translate("Client", "2", nullptr));
        readSize->setItemText(2, QCoreApplication::translate("Client", "3", nullptr));
        readSize->setItemText(3, QCoreApplication::translate("Client", "4", nullptr));
        readSize->setItemText(4, QCoreApplication::translate("Client", "5", nullptr));
        readSize->setItemText(5, QCoreApplication::translate("Client", "6", nullptr));
        readSize->setItemText(6, QCoreApplication::translate("Client", "7", nullptr));
        readSize->setItemText(7, QCoreApplication::translate("Client", "8", nullptr));
        readSize->setItemText(8, QCoreApplication::translate("Client", "9", nullptr));
        readSize->setItemText(9, QCoreApplication::translate("Client", "10", nullptr));

        label_9->setText(QCoreApplication::translate("Client", "Result:", nullptr));
        writeGroupBox->setTitle(QCoreApplication::translate("Client", "Write", nullptr));
        label_7->setText(QCoreApplication::translate("Client", "Start address:", nullptr));
        label_8->setText(QCoreApplication::translate("Client", "Number of values:", nullptr));
        writeSize->setItemText(0, QCoreApplication::translate("Client", "1", nullptr));
        writeSize->setItemText(1, QCoreApplication::translate("Client", "2", nullptr));
        writeSize->setItemText(2, QCoreApplication::translate("Client", "3", nullptr));
        writeSize->setItemText(3, QCoreApplication::translate("Client", "4", nullptr));
        writeSize->setItemText(4, QCoreApplication::translate("Client", "5", nullptr));
        writeSize->setItemText(5, QCoreApplication::translate("Client", "6", nullptr));
        writeSize->setItemText(6, QCoreApplication::translate("Client", "7", nullptr));
        writeSize->setItemText(7, QCoreApplication::translate("Client", "8", nullptr));
        writeSize->setItemText(8, QCoreApplication::translate("Client", "9", nullptr));
        writeSize->setItemText(9, QCoreApplication::translate("Client", "10", nullptr));

        label_3->setText(QString());
        label_6->setText(QCoreApplication::translate("Client", "Table:", nullptr));
        readButton->setText(QCoreApplication::translate("Client", "Read", nullptr));
        writeButton->setText(QCoreApplication::translate("Client", "Write", nullptr));
        readWriteButton->setText(QCoreApplication::translate("Client", "Read-Write", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
