#ifndef ARBOLPRIORIDAD
#define ARBOLPRIORIDAD
#include "ClasesGenerales/nodo.h"
#include <vector>

class ArbolPrioridad{
public:
    vector<Nodo*> posiciones;
    //int lastFreePos;
    ArbolPrioridad(){
        //lastFreePos = 0;
    }
    ~ArbolPrioridad(){
        inicio = NULL;
    }
    void insertar(int valor){
        Nodo* nuevo = new Nodo(valor);
        valores.push_back(nuevo);
        checkUpperOrder(lastFreePos-1);
    }
};

#endif // ARBOLPRIORIDAD

