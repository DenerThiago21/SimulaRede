#include "computador.h"


QString Computador::getTipo() const
{
    return tipo;
}

void Computador::setTipo(const QString &value)
{
    tipo = value;
}

QString Computador::getNome() const
{
    return nome;
}

void Computador::setNome(const QString &value)
{
    nome = value;
}

QString Computador::getIp() const
{
    return ip;
}

void Computador::setIp(const QString &value)
{
    ip = value;
}

Computador::Computador()
{
    
}

QString Computador::toString()
{
    return "tipo de Computador: "+tipo+"\n"
            +"nome do Computador: "+nome+"\n"
            +"ip do Computador: "+ip+"\n";
    
}

