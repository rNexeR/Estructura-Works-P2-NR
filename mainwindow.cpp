#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//Insertar
{
    if(!ui->txtValor->text().isEmpty()){
        int valor = ui->txtValor->text().toInt();
        if(!arbol.raiz){
            arbol.insertar(arbol.raiz, valor);
        }else{
            int val = ui->Raiz->currentText().toInt();
            Nodo* raiz = arbol.buscar(arbol.raiz, val);
            arbol.insertar(raiz, val);
        }
        ui->Raiz->addItem(QString::number(valor));
        ui->txtValor->clear();
    }
}

void MainWindow::on_pushButton_2_clicked()//Eliminar
{
    if(!ui->Raiz->count()>0){
        int valor = ui->Raiz->currentText().toInt();
        arbol.eliminar(arbol.raiz, valor);
        ui->Raiz->removeItem(ui->Raiz->currentIndex());
    }
}

void MainWindow::on_pushButton_3_clicked()//Buscar
{
    QMessageBox msg;
    msg.setWindowTitle("Buscar Nodo");
    msg.setText("Nodo no encontrado");
    if(!ui->txtValor->text().isEmpty()){
        int valor = ui->txtValor->text().toInt();
        Nodo* buscar = arbol.buscar(arbol.raiz, valor);
        if(buscar || ui->Raiz->findText(ui->txtValor->text()) > 0)
            msg.setText("Nodo Encontrado");
    }
    ui->txtValor->clear();
    msg.exec();
}
