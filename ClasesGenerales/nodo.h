#ifndef NODO
#define NODO
#include <iostream>
using namespace std;

class Nodo{
public:
    int valor, prioridad, viejo;
    Nodo* ant;
    Nodo* hijod;
    Nodo* hijoi;
    Nodo(int valor){
        this->valor = valor;
        sig = NULL;
        hijod = NULL;
        hijoi = NULL;
    }
    Nodo(int valor, int prioridad){
        this->valor = valor;
        this->prioridad = prioridad;
        sig = NULL;
        hijod = NULL;
        hijoi = NULL;
    }
    ~Nodo(){
        sig = NULL;
        hijod = NULL;
        hijoi = NULL;
    }
    void checkviejo(){
        viejo++;
        if(viejo == 3){
            prioridad--;
            viejo = 0;
        }
    }
};

#endif // NODO

