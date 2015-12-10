#include "equipamento.h"


QString Equipamento::getTipo() const
{
    return tipo;
}

void Equipamento::setTipo(const QString &value)
{
    tipo = value;
}
Equipamento::Equipamento()
{

}

QString Equipamento::toString()
{
    return "tipo Equipamento: "+tipo+"\n"
            +"marca: "+marca+"\n"
            +"modelo: "+modelo+"\n";

}
QString Equipamento::getMarca() const
{
    return marca;
}

void Equipamento::setMarca(const QString &value)
{
    marca = value;
}

QString Equipamento::getModelo() const
{
    return modelo;
}

void Equipamento::setModelo(const QString &value)
{
    modelo = value;
}



