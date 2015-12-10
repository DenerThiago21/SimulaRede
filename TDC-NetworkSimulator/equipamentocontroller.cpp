#include "equipamentocontroller.h"

EquipamentoController::EquipamentoController()
{

}

bool EquipamentoController::cadastrar(QString tipo, QString marca, QString modelo)
{
    Equipamento *equipamento= new Equipamento();
    equipamento->setMarca(marca);
    equipamento->setModelo(modelo);
    equipamento->setTipo(tipo);

    listaEquipamento.append(equipamento);

    return true;
}

QString EquipamentoController::listar()
{
    QString txt;
    for(int i = 0; i < listaEquipamento.size(); i++)
    {
        txt += (listaEquipamento.at(i)->toString())+"\n\n";
    }
    return txt;
}

