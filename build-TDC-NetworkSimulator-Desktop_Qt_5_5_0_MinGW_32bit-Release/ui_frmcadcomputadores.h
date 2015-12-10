/********************************************************************************
** Form generated from reading UI file 'frmcadcomputadores.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCADCOMPUTADORES_H
#define UI_FRMCADCOMPUTADORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmCadComputadores
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *edIp;
    QLineEdit *edNome;
    QComboBox *cbTipo;
    QPushButton *btCadastrar;
    QPushButton *btVoltar;
    QPushButton *pushButton;

    void setupUi(QWidget *FrmCadComputadores)
    {
        if (FrmCadComputadores->objectName().isEmpty())
            FrmCadComputadores->setObjectName(QStringLiteral("FrmCadComputadores"));
        FrmCadComputadores->resize(400, 300);
        label = new QLabel(FrmCadComputadores);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 20, 251, 21));
        QFont font;
        font.setFamily(QStringLiteral("Tahoma"));
        font.setPointSize(14);
        font.setItalic(true);
        label->setFont(font);
        label_2 = new QLabel(FrmCadComputadores);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 90, 21, 16));
        label_3 = new QLabel(FrmCadComputadores);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 120, 16, 16));
        label_4 = new QLabel(FrmCadComputadores);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 150, 31, 16));
        edIp = new QLineEdit(FrmCadComputadores);
        edIp->setObjectName(QStringLiteral("edIp"));
        edIp->setGeometry(QRect(70, 120, 281, 20));
        edNome = new QLineEdit(FrmCadComputadores);
        edNome->setObjectName(QStringLiteral("edNome"));
        edNome->setGeometry(QRect(70, 150, 281, 20));
        cbTipo = new QComboBox(FrmCadComputadores);
        cbTipo->setObjectName(QStringLiteral("cbTipo"));
        cbTipo->setGeometry(QRect(70, 90, 281, 22));
        btCadastrar = new QPushButton(FrmCadComputadores);
        btCadastrar->setObjectName(QStringLiteral("btCadastrar"));
        btCadastrar->setGeometry(QRect(280, 190, 75, 23));
        btVoltar = new QPushButton(FrmCadComputadores);
        btVoltar->setObjectName(QStringLiteral("btVoltar"));
        btVoltar->setGeometry(QRect(190, 190, 75, 23));
        pushButton = new QPushButton(FrmCadComputadores);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 190, 75, 23));

        retranslateUi(FrmCadComputadores);

        QMetaObject::connectSlotsByName(FrmCadComputadores);
    } // setupUi

    void retranslateUi(QWidget *FrmCadComputadores)
    {
        FrmCadComputadores->setWindowTitle(QApplication::translate("FrmCadComputadores", "Form", 0));
        label->setText(QApplication::translate("FrmCadComputadores", "Cadastro de Computadores", 0));
        label_2->setText(QApplication::translate("FrmCadComputadores", "tipo", 0));
        label_3->setText(QApplication::translate("FrmCadComputadores", "ip", 0));
        label_4->setText(QApplication::translate("FrmCadComputadores", "Nome", 0));
        btCadastrar->setText(QApplication::translate("FrmCadComputadores", "Cadastrar", 0));
        btVoltar->setText(QApplication::translate("FrmCadComputadores", "Voltar", 0));
        pushButton->setText(QApplication::translate("FrmCadComputadores", "Limpar", 0));
    } // retranslateUi

};

namespace Ui {
    class FrmCadComputadores: public Ui_FrmCadComputadores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCADCOMPUTADORES_H
