#include "frmcadcomputadores.h"
#include "mainwindow.h"
#include "ui_frmcadcomputadores.h"
#include <QMessageBox>

FrmCadComputadores::FrmCadComputadores(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrmCadComputadores)
{
    ui->setupUi(this);
    ui->edIp->setInputMask("000.000.000.000");
    ui->cbTipo->addItem("PC");
    ui->cbTipo->addItem("Notebook");
    ui->cbTipo->addItem("Tablet");
    ui->cbTipo->addItem("Smartphone");
    ui->cbTipo->addItem("Netbook");

    //this->listaComputadores = computadores;

    computadorController = new ComputadorController();

}

FrmCadComputadores::~FrmCadComputadores()
{
    delete ui;
}

void FrmCadComputadores::on_btCadastrar_clicked()
{
//    QMessageBox msg;

//    Computador *comp = new Computador();
//    comp->setTipo(ui->cbTipo->currentText());
//    comp->setNome(ui->edNome->text());
//    comp->setIp(ui->edIp->text());

//    listaComputadores.append(comp);

//    msg.setText("Cadastro efetuado");
//    msg.exec();

//    ui->cbTipo->setCurrentIndex(0);
//    ui->edNome->setText("");
//    ui->edIp->setText(""i);

    QString tipo = ui->cbTipo->currentText();
    QString nome = ui->edNome->text();
    QString ip = ui->edIp->text();

    QMessageBox confirm;
    QMessageBox msgShow;

    confirm.setText("Deseja salvar o computador?");
    confirm.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    int ret = confirm.exec();

    switch (ret)
    {
        case QMessageBox::Yes :
        {
            if(computadorController->cadastrar(tipo, nome, ip))
            {
                msgShow.setText("Computador Salvo com Sucesso");
                ui->cbTipo->setCurrentIndex(0);
                ui->edIp->setText("");
                ui->edNome->setText("");
            }
            else
            {
                msgShow.setText("Computador nao foi salvo");
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

void FrmCadComputadores::on_btVoltar_clicked()
{
    this->close();
//    QMessageBox msg;
//    QString txt;

//    txt = computadorController->listar();

//    msg.setText(txt);
//    msg.exec();
}

void FrmCadComputadores::on_pushButton_clicked()
{
    ui->cbTipo->setCurrentIndex(0);
    ui->edIp->setText("");
    ui->edNome->setText("");
}
