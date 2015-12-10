#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "computador.h"
#include <QVector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
   // QVector<Computador*> computadores;
    ~MainWindow();

private slots:
    void on_actionEquipamentos_triggered();

    void on_actionComputadores_triggered();

    void on_actionEntre_PCs_triggered();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
