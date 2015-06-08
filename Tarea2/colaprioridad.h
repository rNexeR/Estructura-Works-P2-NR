#ifndef COLAPRIORIDAD
#define COLAPRIORIDAD
#include "ClasesGenerales/nodo.h"

class ColaPrioridad{
public:
    Nodo* inicio;
    ColaPrioridad(){
        inicio = NULL;
    }
    void insertar(int valor, int prioridad){
        Nodo* nuevo = new Nodo(valor, prioridad);
        if(!inicio){
            inicio = nuevo;
            return;
        }
        if(inicio->prioridad > nuevo->prioridad){
            nuevo->ant = inicio;
            inicio = nuevo;
            checkiarViejos(inicio->ant);
            return;
        }
        Nodo* temp = inicio;
        while(temp->ant && temp->prioridad <= nuevo->prioridad)
            temp = temp->ant;
        nuevo->ant = temp->ant;
        temp->ant = nuevo;
        checkiarViejos(temp->ant->ant);
    }

    void checkiarViejos(Nodo* temp){
        while(temp){
            temp->checkviejo();
            temp = temp->ant;
        }

    }
};

#endif // COLAPRIORIDAD

