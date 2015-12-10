#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "frmcadequipamentos.h"
#include "frmcadcomputadores.h"
#include "frmcomunicacaopc.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //QPixmap pix("C:/Users/user/Documents/GitHub/SimulaRede/tdc_network_images/tdc.png");
    QPixmap pix("../tdc_network_images/tdc.png");
    ui->label->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionEquipamentos_triggered()
{
    FrmCadEquipamentos *frmCadEquipamentos = new FrmCadEquipamentos();
    frmCadEquipamentos->show();
}

void MainWindow::on_actionComputadores_triggered()
{
    FrmCadComputadores *frmCadComputadores = new FrmCadComputadores();
    frmCadComputadores->show();
}

void MainWindow::on_actionEntre_PCs_triggered()
{
    FrmComunicacaoPC *frmComunicacaoPC = new FrmComunicacaoPC();
    frmComunicacaoPC->show();
}
