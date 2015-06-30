#ifndef NODO
#define NODO
#include <iostream>
#include <vector>
using namespace std;

class Nodo{
public:
    int valor;
    vector<Nodo*> hijos;
    Nodo(int valor){
        this->valor = valor;
    }

    ~Nodo(){

    }
};

#endif // NODO

