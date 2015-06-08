#ifndef ARBOLESNARIOS_H
#define ARBOLESNARIOS_H

#include <QWidget>

namespace Ui {
class ArbolesNarios;
}

class ArbolesNarios : public QWidget
{
    Q_OBJECT

public:
    explicit ArbolesNarios(QWidget *parent = 0);
    ~ArbolesNarios();

private:
    Ui::ArbolesNarios *ui;
};

#endif // ARBOLESNARIOS_H
