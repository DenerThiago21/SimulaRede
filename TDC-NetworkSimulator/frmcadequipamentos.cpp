#include "frmcadequipamentos.h"
#include "ui_frmcadequipamentos.h"

FrmCadEquipamentos::FrmCadEquipamentos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrmCadEquipamentos)
{
    ui->setupUi(this);
}

FrmCadEquipamentos::~FrmCadEquipamentos()
{
    delete ui;
}
