#include "computadorcontroller.h"
//QVector<Computador*> listaComputador = 0;

ComputadorController::ComputadorController()
{

}

bool ComputadorController::cadastrar(QString tipo, QString nome, QString ip)
{
    Computador *computador = new Computador();
    computador->setTipo(tipo);
    computador->setNome(nome);
    computador->setIp(ip);

    listaComputador.append(computador);

    return true;
}

QString ComputadorController::listar()
{
    QString txt;
    for(int i = 0; i < listaComputador.size(); i++)
    {
        txt += (listaComputador.at(i)->toString())+"\n\n";
    }
    return txt;
}

