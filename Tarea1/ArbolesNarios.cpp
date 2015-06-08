#include "Tarea1/ArbolesNarios.h"
#include "ui_ArbolesNarios.h"

ArbolesNarios::ArbolesNarios(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ArbolesNarios)
{
    ui->setupUi(this);
}

ArbolesNarios::~ArbolesNarios()
{
    delete ui;
}
