#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/user/Documents/GitHub/SimulaRede/tdc network images/tdc.jpg");
    ui->label->setPixmap(pix);

}

MainWindow::~MainWindow()
{
    delete ui;
}
