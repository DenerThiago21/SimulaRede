    #ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H
#include <QString>
#include <QVector>

class Equipamento
{
private:
    QString marca;
    QString modelo;
    QString tipo;
public:
    Equipamento();
    virtual QString toString();
    QString getMarca() const;
    void setMarca(const QString &value);
    QString getModelo() const;
    void setModelo(const QString &value);
    QString getTipo() const;
    void setTipo(const QString &value);
};

#endif // EQUIPAMENTO_H
