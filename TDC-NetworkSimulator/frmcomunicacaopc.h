#ifndef FRMCOMUNICACAOPC_H
#define FRMCOMUNICACAOPC_H

#include <QWidget>
#include "frmcadcomputadores.h"
#include "frmcadequipamentos.h"
#include "comunicacao.h"
#include <QVector>
#include "mainwindow.h"

namespace Ui {
class FrmComunicacaoPC;
}

class FrmComunicacaoPC : public QWidget
{
    Q_OBJECT

public:
    explicit FrmComunicacaoPC(QWidget *parent = 0);
    ~FrmComunicacaoPC();

private slots:
    void on_btPing_clicked();

    void on_btVoltar_clicked();

private:
    Ui::FrmComunicacaoPC *ui;
    ComputadorController *computadorController;
};

#endif // FRMCOMUNICACAOPC_H
