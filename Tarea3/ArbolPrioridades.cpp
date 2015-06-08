#include "Tarea3/ArbolPrioridades.h"
#include "ui_ArbolPrioridades.h"

ArbolPrioridades::ArbolPrioridades(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ArbolPrioridades)
{
    ui->setupUi(this);
}

ArbolPrioridades::~ArbolPrioridades()
{
    delete ui;
}
