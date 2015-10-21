/********************************************************************************
** Form generated from reading UI file 'sobredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOBREDIALOG_H
#define UI_SOBREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SobreDialog
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *SobreDialog)
    {
        if (SobreDialog->objectName().isEmpty())
            SobreDialog->setObjectName(QStringLiteral("SobreDialog"));
        SobreDialog->resize(400, 300);
        SobreDialog->setModal(true);
        label = new QLabel(SobreDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 331, 31));
        label_2 = new QLabel(SobreDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 60, 301, 20));

        retranslateUi(SobreDialog);

        QMetaObject::connectSlotsByName(SobreDialog);
    } // setupUi

    void retranslateUi(QDialog *SobreDialog)
    {
        SobreDialog->setWindowTitle(QApplication::translate("SobreDialog", "Sobre", 0));
        label->setText(QApplication::translate("SobreDialog", "TDC-Network Simulator is a learning network simulator ", 0));
        label_2->setText(QApplication::translate("SobreDialog", "that made for students, teachers and learners of the area", 0));
    } // retranslateUi

};

namespace Ui {
    class SobreDialog: public Ui_SobreDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOBREDIALOG_H
