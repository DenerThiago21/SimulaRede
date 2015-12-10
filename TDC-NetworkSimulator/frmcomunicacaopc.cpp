#include "frmcomunicacaopc.h"
#include "ui_frmcomunicacaopc.h"

#include <QVector>
#include <QMessageBox>

FrmComunicacaoPC::FrmComunicacaoPC(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrmComunicacaoPC)
{
    ui->setupUi(this);

    computadorController = new ComputadorController();


}

FrmComunicacaoPC::~FrmComunicacaoPC()
{
    delete ui;
}

void FrmComunicacaoPC::on_btPing_clicked()
{
//    QMessageBox msg;
//    QString txt;
//    Computador *origem = new Computador();

//    FrmCadComputadores *frmCadComputadores = new FrmCadComputadores();
//    listComp = origem->getListaComputadores();
////    Comunicacao *com = new Comunicacao();
////    com->setOrigem(Computador.toString());
//    for(int i = 0; i<listComp.size(); i++)
//    {
//        txt += "ip: " + origem->getIp() +" - " +"nome; "+origem->getNome();
//    }


//    msg.setText(txt);
//    msg.exec();

    QMessageBox msg;
    QString txt;

    txt = computadorController->listar();

    msg.setText(txt);
    msg.exec();
}

void FrmComunicacaoPC::on_btVoltar_clicked()
{
    this->close();
}
