#include "comunicacao.h"


Computador Comunicacao::getOrigem() const
{
    return origem;
}

void Comunicacao::setOrigem(const Computador &value)
{
    origem = value;
}

Computador Comunicacao::getDestino() const
{
    return destino;
}

void Comunicacao::setDestino(const Computador &value)
{
    destino = value;
}
Comunicacao::Comunicacao()
{

}

QString Comunicacao::toString()
{

}

