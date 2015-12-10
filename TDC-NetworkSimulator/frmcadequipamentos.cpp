#include "frmcadequipamentos.h"
#include "ui_frmcadequipamentos.h"
#include <QMessageBox>

FrmCadEquipamentos::FrmCadEquipamentos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrmCadEquipamentos)
{
    ui->setupUi(this);

//    listaEquipamentos.append(new tipoEquipamento("Roteador"));
//    listaEquipamentos.append(new tipoEquipamento("Switch"));
//    listaEquipamentos.append(new tipoEquipamento("Modem"));

//    for(int i = 0; i<listaEquipamentos.size(); i++)
//    {
//        ui->cbTipo->addItem(listaEquipamentos.at(i)->getTipo());
//    }
    ui->cbTipo->addItem("Switch");
    ui->cbTipo->addItem("Roteador");
    ui->cbTipo->addItem("Modem");

    equipamentoController = new EquipamentoController();
}

FrmCadEquipamentos::~FrmCadEquipamentos()
{
    delete ui;
}

void FrmCadEquipamentos::on_btCadastrar_clicked()
{
//    QMessageBox msg;

//    Equipamento *equip = new Equipamento();
//   // ui->cbTipo->cu
//    equip->setTipo(ui->cbTipo->currentText());
//    equip->setMarca(ui->edMarca->text());
//    equip->setModelo(ui->edModelo->text());

//    equipamentos.append(equip);

//    msg.setText("Cadastro efetuado");
//    msg.exec();

    //FrmCadEquipamentos *frmCadEquipamentos = new FrmCadEquipamentos();

    QString tipo = ui->cbTipo->currentText();
    QString marca = ui->edMarca->text();
    QString modelo = ui->edModelo->text();

    QMessageBox confirm;
    QMessageBox msgShow;

    confirm.setText("Deseja salvar o equipamento?");
    confirm.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    int ret = confirm.exec();

    switch (ret)
    {
        case QMessageBox::Yes :
        {
            if(equipamentoController->cadastrar(tipo, marca, modelo))
            {
                msgShow.setText("Equipamento Salvo com Sucesso");
                ui->cbTipo->setCurrentIndex(0);
                ui->edMarca->setText("");
                ui->edModelo->setText("");
            }
            else
            {
                msgShow.setText("Equipamento nao foi salvo");
            }
            msgShow.exec();
            break;
        }


        case QMessageBox::No :
        {
            this->close();
            break;
        }
    }
}

void FrmCadEquipamentos::on_pushButton_clicked()
{
    //pesquisar e mostrar equipamentos
    QMessageBox msg;
    QString txt;

    txt = equipamentoController->listar();

    msg.setText(txt);
    msg.exec();

}

void FrmCadEquipamentos::on_Voltar_clicked()
{
    this->close();
//    QMessageBox msg;
//    QString txt;

//    txt = equipamentoController->listar();

//    msg.setText(txt);
//    msg.exec();
}

void FrmCadEquipamentos::on_Limpar_clicked()
{
    ui->cbTipo->setCurrentIndex(0);
    ui->edMarca->setText("");
    ui->edModelo->setText("");
}
