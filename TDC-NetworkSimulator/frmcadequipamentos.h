#ifndef FRMCADEQUIPAMENTOS_H
#define FRMCADEQUIPAMENTOS_H

#include <QWidget>
#include <QVector>

#include "equipamento.h";
#include "equipamentocontroller.h"

namespace Ui {
class FrmCadEquipamentos;
}

class FrmCadEquipamentos : public QWidget
{
    Q_OBJECT

public:
    explicit FrmCadEquipamentos(QWidget *parent = 0);
    ~FrmCadEquipamentos();

private slots:
    void on_btCadastrar_clicked();

    void on_pushButton_clicked();

    void on_Voltar_clicked();

    void on_Limpar_clicked();

private:
    Ui::FrmCadEquipamentos *ui;
    EquipamentoController *equipamentoController;
};

#endif // FRMCADEQUIPAMENTOS_H
