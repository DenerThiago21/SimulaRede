/********************************************************************************
** Form generated from reading UI file 'frmcadequipamentos.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCADEQUIPAMENTOS_H
#define UI_FRMCADEQUIPAMENTOS_H

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

class Ui_FrmCadEquipamentos
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *cbTipo;
    QLineEdit *edMarca;
    QLineEdit *edModelo;
    QPushButton *btCadastrar;

    void setupUi(QWidget *FrmCadEquipamentos)
    {
        if (FrmCadEquipamentos->objectName().isEmpty())
            FrmCadEquipamentos->setObjectName(QStringLiteral("FrmCadEquipamentos"));
        FrmCadEquipamentos->resize(400, 300);
        label = new QLabel(FrmCadEquipamentos);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 311, 31));
        QFont font;
        font.setFamily(QStringLiteral("Tahoma"));
        font.setPointSize(14);
        font.setItalic(true);
        label->setFont(font);
        label_2 = new QLabel(FrmCadEquipamentos);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 90, 21, 16));
        label_3 = new QLabel(FrmCadEquipamentos);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 120, 31, 16));
        label_4 = new QLabel(FrmCadEquipamentos);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 150, 41, 16));
        cbTipo = new QComboBox(FrmCadEquipamentos);
        cbTipo->setObjectName(QStringLiteral("cbTipo"));
        cbTipo->setGeometry(QRect(70, 90, 301, 22));
        edMarca = new QLineEdit(FrmCadEquipamentos);
        edMarca->setObjectName(QStringLiteral("edMarca"));
        edMarca->setGeometry(QRect(70, 120, 301, 20));
        edModelo = new QLineEdit(FrmCadEquipamentos);
        edModelo->setObjectName(QStringLiteral("edModelo"));
        edModelo->setGeometry(QRect(70, 150, 301, 20));
        btCadastrar = new QPushButton(FrmCadEquipamentos);
        btCadastrar->setObjectName(QStringLiteral("btCadastrar"));
        btCadastrar->setGeometry(QRect(300, 190, 75, 23));

        retranslateUi(FrmCadEquipamentos);

        QMetaObject::connectSlotsByName(FrmCadEquipamentos);
    } // setupUi

    void retranslateUi(QWidget *FrmCadEquipamentos)
    {
        FrmCadEquipamentos->setWindowTitle(QApplication::translate("FrmCadEquipamentos", "Form", 0));
        label->setText(QApplication::translate("FrmCadEquipamentos", "Cadastro de Equipamentos de Rede", 0));
        label_2->setText(QApplication::translate("FrmCadEquipamentos", "Tipo", 0));
        label_3->setText(QApplication::translate("FrmCadEquipamentos", "Marca", 0));
        label_4->setText(QApplication::translate("FrmCadEquipamentos", "Modelo", 0));
        btCadastrar->setText(QApplication::translate("FrmCadEquipamentos", "Cadastrar", 0));
    } // retranslateUi

};

namespace Ui {
    class FrmCadEquipamentos: public Ui_FrmCadEquipamentos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCADEQUIPAMENTOS_H
