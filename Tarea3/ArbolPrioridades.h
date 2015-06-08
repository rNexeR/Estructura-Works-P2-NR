#ifndef ARBOLPRIORIDADES_H
#define ARBOLPRIORIDADES_H

#include <QWidget>

namespace Ui {
class ArbolPrioridades;
}

class ArbolPrioridades : public QWidget
{
    Q_OBJECT

public:
    explicit ArbolPrioridades(QWidget *parent = 0);
    ~ArbolPrioridades();

private:
    Ui::ArbolPrioridades *ui;
};

#endif // ARBOLPRIORIDADES_H
