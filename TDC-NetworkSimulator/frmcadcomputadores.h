#ifndef FRMCADCOMPUTADORES_H
#define FRMCADCOMPUTADORES_H

#include <QWidget>
#include "computadorcontroller.h"
#include "mainwindow.h"
#include <QVector>

namespace Ui {
class FrmCadComputadores;
}

class FrmCadComputadores : public QWidget
{
    Q_OBJECT

public:
    explicit FrmCadComputadores(QWidget *parent = 0);
    ~FrmCadComputadores();

private slots:
    void on_btCadastrar_clicked();

    void on_btVoltar_clicked();

    void on_pushButton_clicked();

private:
    Ui::FrmCadComputadores *ui;
    ComputadorController *computadorController;
};

#endif // FRMCADCOMPUTADORES_H
