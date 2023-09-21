/********************************************************************************
** Form generated from reading UI file 'client_settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_SETTINGSDIALOG_H
#define UI_CLIENT_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_11;
    QComboBox *parityCombo;
    QLabel *label_12;
    QComboBox *baudCombo;
    QLabel *label_13;
    QComboBox *dataBitsCombo;
    QLabel *label_14;
    QComboBox *stopBitsCombo;
    QLabel *label_15;
    QSpinBox *timeoutSpinner;
    QSpinBox *retriesSpinner;
    QLabel *label_10;
    QSpacerItem *verticalSpacer;
    QPushButton *applyButton;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName("SettingsDialog");
        SettingsDialog->resize(208, 375);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(SettingsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName("gridLayout_4");
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");

        gridLayout_4->addWidget(label_11, 0, 0, 1, 1);

        parityCombo = new QComboBox(groupBox);
        parityCombo->addItem(QString());
        parityCombo->addItem(QString());
        parityCombo->addItem(QString());
        parityCombo->addItem(QString());
        parityCombo->addItem(QString());
        parityCombo->setObjectName("parityCombo");

        gridLayout_4->addWidget(parityCombo, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");

        gridLayout_4->addWidget(label_12, 1, 0, 1, 1);

        baudCombo = new QComboBox(groupBox);
        baudCombo->addItem(QString());
        baudCombo->addItem(QString());
        baudCombo->addItem(QString());
        baudCombo->addItem(QString());
        baudCombo->addItem(QString());
        baudCombo->addItem(QString());
        baudCombo->addItem(QString());
        baudCombo->addItem(QString());
        baudCombo->setObjectName("baudCombo");

        gridLayout_4->addWidget(baudCombo, 1, 1, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");

        gridLayout_4->addWidget(label_13, 2, 0, 1, 1);

        dataBitsCombo = new QComboBox(groupBox);
        dataBitsCombo->addItem(QString());
        dataBitsCombo->addItem(QString());
        dataBitsCombo->addItem(QString());
        dataBitsCombo->addItem(QString());
        dataBitsCombo->setObjectName("dataBitsCombo");

        gridLayout_4->addWidget(dataBitsCombo, 2, 1, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");

        gridLayout_4->addWidget(label_14, 3, 0, 1, 1);

        stopBitsCombo = new QComboBox(groupBox);
        stopBitsCombo->addItem(QString());
        stopBitsCombo->addItem(QString());
        stopBitsCombo->addItem(QString());
        stopBitsCombo->setObjectName("stopBitsCombo");

        gridLayout_4->addWidget(stopBitsCombo, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        label_15 = new QLabel(SettingsDialog);
        label_15->setObjectName("label_15");

        verticalLayout->addWidget(label_15);

        timeoutSpinner = new QSpinBox(SettingsDialog);
        timeoutSpinner->setObjectName("timeoutSpinner");
        timeoutSpinner->setAccelerated(true);
        timeoutSpinner->setMinimum(-1);
        timeoutSpinner->setMaximum(5000);
        timeoutSpinner->setSingleStep(20);
        timeoutSpinner->setValue(200);

        verticalLayout->addWidget(timeoutSpinner);

        retriesSpinner = new QSpinBox(SettingsDialog);
        retriesSpinner->setObjectName("retriesSpinner");
        retriesSpinner->setValue(3);

        verticalLayout->addWidget(retriesSpinner);

        label_10 = new QLabel(SettingsDialog);
        label_10->setObjectName("label_10");

        verticalLayout->addWidget(label_10);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        applyButton = new QPushButton(SettingsDialog);
        applyButton->setObjectName("applyButton");

        verticalLayout->addWidget(applyButton);


        retranslateUi(SettingsDialog);

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SettingsDialog", "Serial Parameters", nullptr));
        label_11->setText(QCoreApplication::translate("SettingsDialog", "Parity:", nullptr));
        parityCombo->setItemText(0, QCoreApplication::translate("SettingsDialog", "No", nullptr));
        parityCombo->setItemText(1, QCoreApplication::translate("SettingsDialog", "Even", nullptr));
        parityCombo->setItemText(2, QCoreApplication::translate("SettingsDialog", "Odd", nullptr));
        parityCombo->setItemText(3, QCoreApplication::translate("SettingsDialog", "Space", nullptr));
        parityCombo->setItemText(4, QCoreApplication::translate("SettingsDialog", "Mark", nullptr));

        label_12->setText(QCoreApplication::translate("SettingsDialog", "Baud Rate:", nullptr));
        baudCombo->setItemText(0, QCoreApplication::translate("SettingsDialog", "1200", nullptr));
        baudCombo->setItemText(1, QCoreApplication::translate("SettingsDialog", "2400", nullptr));
        baudCombo->setItemText(2, QCoreApplication::translate("SettingsDialog", "4800", nullptr));
        baudCombo->setItemText(3, QCoreApplication::translate("SettingsDialog", "9600", nullptr));
        baudCombo->setItemText(4, QCoreApplication::translate("SettingsDialog", "19200", nullptr));
        baudCombo->setItemText(5, QCoreApplication::translate("SettingsDialog", "38400", nullptr));
        baudCombo->setItemText(6, QCoreApplication::translate("SettingsDialog", "57600", nullptr));
        baudCombo->setItemText(7, QCoreApplication::translate("SettingsDialog", "115200", nullptr));

        label_13->setText(QCoreApplication::translate("SettingsDialog", "Data Bits:", nullptr));
        dataBitsCombo->setItemText(0, QCoreApplication::translate("SettingsDialog", "5", nullptr));
        dataBitsCombo->setItemText(1, QCoreApplication::translate("SettingsDialog", "6", nullptr));
        dataBitsCombo->setItemText(2, QCoreApplication::translate("SettingsDialog", "7", nullptr));
        dataBitsCombo->setItemText(3, QCoreApplication::translate("SettingsDialog", "8", nullptr));

        label_14->setText(QCoreApplication::translate("SettingsDialog", "Stop Bits:", nullptr));
        stopBitsCombo->setItemText(0, QCoreApplication::translate("SettingsDialog", "1", nullptr));
        stopBitsCombo->setItemText(1, QCoreApplication::translate("SettingsDialog", "3", nullptr));
        stopBitsCombo->setItemText(2, QCoreApplication::translate("SettingsDialog", "2", nullptr));

        label_15->setText(QCoreApplication::translate("SettingsDialog", "Response Timeout:", nullptr));
        timeoutSpinner->setSuffix(QCoreApplication::translate("SettingsDialog", " ms", nullptr));
        label_10->setText(QCoreApplication::translate("SettingsDialog", "Number of retries:", nullptr));
        applyButton->setText(QCoreApplication::translate("SettingsDialog", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_SETTINGSDIALOG_H
