#include "sobredialog.h"
#include "ui_sobredialog.h"

SobreDialog::SobreDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SobreDialog)
{
    ui->setupUi(this);
}

SobreDialog::~SobreDialog()
{
    delete ui;
}
