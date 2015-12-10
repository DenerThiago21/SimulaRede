#ifndef EQUIPAMENTOCONTROLLER_H
#define EQUIPAMENTOCONTROLLER_H

#include <QVector>
#include "equipamento.h"
#include <QString>

class EquipamentoController
{
private:
    QVector<Equipamento*> listaEquipamento;
public:
    EquipamentoController();

    bool cadastrar(QString marca, QString modelo, QString tipo);
    QString listar();
};

#endif // EQUIPAMENTOCONTROLLER_H
