#ifndef FRMCADEQUIPAMENTOS_H
#define FRMCADEQUIPAMENTOS_H

#include <QWidget>

namespace Ui {
class FrmCadEquipamentos;
}

class FrmCadEquipamentos : public QWidget
{
    Q_OBJECT

public:
    explicit FrmCadEquipamentos(QWidget *parent = 0);
    ~FrmCadEquipamentos();

private:
    Ui::FrmCadEquipamentos *ui;
};

#endif // FRMCADEQUIPAMENTOS_H
