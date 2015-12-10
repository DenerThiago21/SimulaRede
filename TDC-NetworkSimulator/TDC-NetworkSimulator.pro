#-------------------------------------------------
#
# Project created by QtCreator 2015-10-17T19:19:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TDC-NetworkSimulator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    frmcadequipamentos.cpp \
    equipamento.cpp \
    frmcadcomputadores.cpp \
    computador.cpp \
    frmcomunicacaopc.cpp \
    comunicacao.cpp \
    computadorcontroller.cpp \
    equipamentocontroller.cpp

HEADERS  += mainwindow.h \
    frmcadequipamentos.h \
    equipamento.h \
    frmcadcomputadores.h \
    computador.h \
    frmcomunicacaopc.h \
    comunicacao.h \
    computadorcontroller.h \
    equipamentocontroller.h

FORMS    += mainwindow.ui \
    frmcadequipamentos.ui \
    frmcadcomputadores.ui \
    frmcomunicacaopc.ui
