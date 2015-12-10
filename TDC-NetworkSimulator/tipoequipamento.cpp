#include "tipoequipamento.h"


tipoEquipamento::tipoEquipamento(QString)
{
    this->tipo = tipo;
}

QString tipoEquipamento::toString()
{
    return "tipo Equipamento: "+tipo+"\n";
}

QString tipoEquipamento::getTipo() const
{
    return tipo;
}

void tipoEquipamento::setTipo(const QString &value)
{
    tipo = value;
}


