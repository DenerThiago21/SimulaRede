/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSimulador;
    QAction *actionEquipamentos;
    QAction *actionComputadores;
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuSobre;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(556, 356);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(172, 210, 255);"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextOnly);
        actionSimulador = new QAction(MainWindow);
        actionSimulador->setObjectName(QStringLiteral("actionSimulador"));
        actionEquipamentos = new QAction(MainWindow);
        actionEquipamentos->setObjectName(QStringLiteral("actionEquipamentos"));
        actionComputadores = new QAction(MainWindow);
        actionComputadores->setObjectName(QStringLiteral("actionComputadores"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 9, 531, 291));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 556, 21));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        menuSobre = new QMenu(menuBar);
        menuSobre->setObjectName(QStringLiteral("menuSobre"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuSobre->menuAction());
        menuArquivo->addAction(actionEquipamentos);
        menuArquivo->addAction(actionComputadores);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TDC Netwaok Simulator", 0));
        actionSimulador->setText(QApplication::translate("MainWindow", "Simulador", 0));
        actionEquipamentos->setText(QApplication::translate("MainWindow", "Equipamentos", 0));
        actionComputadores->setText(QApplication::translate("MainWindow", "Computadores", 0));
        label->setText(QString());
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Cadastro", 0));
        menuSobre->setTitle(QApplication::translate("MainWindow", "Comunicacao", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
