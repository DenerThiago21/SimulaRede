#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "frmcadequipamentos.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/user/Documents/GitHub/SimulaRede/tdc_network_images/tdc.png");
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
