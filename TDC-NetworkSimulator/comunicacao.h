#ifndef COMUNICACAO_H
#define COMUNICACAO_H

#include <QString>
#include "computador.h"
#include "mainwindow.h"

class Comunicacao
{
private:
    Computador origem;
    Computador destino;
public:
    Comunicacao();
    virtual QString toString();
    Computador getOrigem() const;
    void setOrigem(const Computador &value);
    Computador getDestino() const;
    void setDestino(const Computador &value);
};

#endif // COMUNICACAO_H
