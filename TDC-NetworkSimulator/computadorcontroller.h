#ifndef COMPUTADORCONTROLLER_H
#define COMPUTADORCONTROLLER_H
#include <QVector>
#include <QString>
#include "computador.h"
#include "mainwindow.h"

class ComputadorController
{
private:

public:
    ComputadorController();
    QVector<Computador*> listaComputador;
    bool cadastrar(QString tipo, QString nome, QString ip);
    QString listar();
};

#endif // COMPUTADORCONTROLLER_H
