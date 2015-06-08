#include "Tarea2/ColaPrioridades.h"
#include "ui_ColaPrioridades.h"

ColaPrioridades::ColaPrioridades(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ColaPrioridades)
{
    ui->setupUi(this);
}

ColaPrioridades::~ColaPrioridades()
{
    delete ui;
}
