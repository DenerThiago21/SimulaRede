#ifndef TIPOEQUIPAMENTO_H
#define TIPOEQUIPAMENTO_H
#include <QString>

class tipoEquipamento
{
private:
    QString tipo;
public:
    tipoEquipamento(QString);
    virtual QString toString();

    QString getTipo() const;
    void setTipo(const QString &value);
};

#endif // TIPOEQUIPAMENTO_H
