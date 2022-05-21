/********************************************************************************
** Form generated from reading UI file 'gatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GATEDIALOG_H
#define UI_GATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GateDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *nameEdit;
    QLineEdit *targetEdit;
    QPushButton *pushButton;
    QLineEdit *u0CEdit;
    QLineEdit *u10Edit;

    void setupUi(QDialog *GateDialog)
    {
        if (GateDialog->objectName().isEmpty())
            GateDialog->setObjectName(QStringLiteral("GateDialog"));
        GateDialog->resize(400, 240);
        buttonBox = new QDialogButtonBox(GateDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(0, 180, 401, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        label = new QLabel(GateDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 47, 13));
        label_2 = new QLabel(GateDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(5, 60, 71, 16));
        label_3 = new QLabel(GateDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 47, 13));
        label_4 = new QLabel(GateDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 140, 47, 13));
        nameEdit = new QLineEdit(GateDialog);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(80, 18, 200, 20));
        targetEdit = new QLineEdit(GateDialog);
        targetEdit->setObjectName(QStringLiteral("targetEdit"));
        targetEdit->setGeometry(QRect(80, 58, 90, 20));
        pushButton = new QPushButton(GateDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(204, 57, 75, 23));
        u0CEdit = new QLineEdit(GateDialog);
        u0CEdit->setObjectName(QStringLiteral("u0CEdit"));
        u0CEdit->setGeometry(QRect(80, 98, 90, 20));
        u10Edit = new QLineEdit(GateDialog);
        u10Edit->setObjectName(QStringLiteral("u10Edit"));
        u10Edit->setGeometry(QRect(80, 138, 90, 20));

        retranslateUi(GateDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GateDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GateDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GateDialog);
    } // setupUi

    void retranslateUi(QDialog *GateDialog)
    {
        GateDialog->setWindowTitle(QApplication::translate("GateDialog", "Edit gate", 0));
        label->setText(QApplication::translate("GateDialog", "Name:", 0));
        label_2->setText(QApplication::translate("GateDialog", "Target stage:", 0));
        label_3->setText(QApplication::translate("GateDialog", "U_0C:", 0));
        label_4->setText(QApplication::translate("GateDialog", "U_10:", 0));
        pushButton->setText(QApplication::translate("GateDialog", "Select stage", 0));
    } // retranslateUi

};

namespace Ui {
    class GateDialog: public Ui_GateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GATEDIALOG_H
