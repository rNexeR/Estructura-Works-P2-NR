#ifndef COLAPRIORIDADES_H
#define COLAPRIORIDADES_H

#include <QWidget>

namespace Ui {
class ColaPrioridades;
}

class ColaPrioridades : public QWidget
{
    Q_OBJECT

public:
    explicit ColaPrioridades(QWidget *parent = 0);
    ~ColaPrioridades();

private:
    Ui::ColaPrioridades *ui;
};

#endif // COLAPRIORIDADES_H
