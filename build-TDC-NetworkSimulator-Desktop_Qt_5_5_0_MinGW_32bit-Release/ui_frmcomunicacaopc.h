/********************************************************************************
** Form generated from reading UI file 'frmcomunicacaopc.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCOMUNICACAOPC_H
#define UI_FRMCOMUNICACAOPC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmComunicacaoPC
{
public:
    QLabel *label;
    QComboBox *cbOrigem;
    QLabel *label_2;
    QComboBox *cbDestino;
    QPushButton *btPing;
    QPushButton *btVoltar;

    void setupUi(QWidget *FrmComunicacaoPC)
    {
        if (FrmComunicacaoPC->objectName().isEmpty())
            FrmComunicacaoPC->setObjectName(QStringLiteral("FrmComunicacaoPC"));
        FrmComunicacaoPC->resize(400, 300);
        label = new QLabel(FrmComunicacaoPC);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 60, 161, 16));
        cbOrigem = new QComboBox(FrmComunicacaoPC);
        cbOrigem->setObjectName(QStringLiteral("cbOrigem"));
        cbOrigem->setGeometry(QRect(50, 90, 301, 22));
        label_2 = new QLabel(FrmComunicacaoPC);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 130, 161, 16));
        cbDestino = new QComboBox(FrmComunicacaoPC);
        cbDestino->setObjectName(QStringLiteral("cbDestino"));
        cbDestino->setGeometry(QRect(48, 160, 301, 22));
        btPing = new QPushButton(FrmComunicacaoPC);
        btPing->setObjectName(QStringLiteral("btPing"));
        btPing->setGeometry(QRect(280, 210, 75, 23));
        btVoltar = new QPushButton(FrmComunicacaoPC);
        btVoltar->setObjectName(QStringLiteral("btVoltar"));
        btVoltar->setGeometry(QRect(200, 210, 75, 23));

        retranslateUi(FrmComunicacaoPC);

        QMetaObject::connectSlotsByName(FrmComunicacaoPC);
    } // setupUi

    void retranslateUi(QWidget *FrmComunicacaoPC)
    {
        FrmComunicacaoPC->setWindowTitle(QApplication::translate("FrmComunicacaoPC", "Form", 0));
        label->setText(QApplication::translate("FrmComunicacaoPC", "Escolha o computador de origem", 0));
        label_2->setText(QApplication::translate("FrmComunicacaoPC", "Escolha o computador de destino", 0));
        btPing->setText(QApplication::translate("FrmComunicacaoPC", "Realizar Ping", 0));
        btVoltar->setText(QApplication::translate("FrmComunicacaoPC", "Voltar", 0));
    } // retranslateUi

};

namespace Ui {
    class FrmComunicacaoPC: public Ui_FrmComunicacaoPC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCOMUNICACAOPC_H
