#ifndef COMPUTADOR_H
#define COMPUTADOR_H
#include <QString>
#include <QVector>

class Computador
{
private:
    QString tipo;
    QString nome;
    QString ip;
public:
    Computador();
    virtual QString toString();
    QString getTipo() const;
    void setTipo(const QString &value);
    QString getNome() const;
    void setNome(const QString &value);
    QString getIp() const;
    void setIp(const QString &value);
};

#endif // COMPUTADOR_H
