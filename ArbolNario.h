#ifndef ARBOLNARIO_H
#define ARBOLNARIO_H

#include "nodo.h"

class ArbolNario{
public:
    Nodo* raiz;
    ArbolNario(){
        raiz = NULL;
    }

    void insertar(Nodo* &raiz, int val){
        cout<<"Insertando"<<endl;
        if(!raiz)
            raiz = new Nodo(val);
        else
            raiz->hijos.push_back(new Nodo(val));
        cout<<raiz->valor<<endl;
    }

    void eliminar(Nodo* &raiz, int val){
        if(!raiz)
            return;
        if(raiz->valor == val){
            if(raiz->hijos.size() > 0){
                raiz->valor = raiz->hijos[0]->valor;
                raiz->hijos.erase(raiz->hijos.begin());
                return;
            }
            delete raiz;
            raiz = NULL;
            return;
        }

        for(vector<Nodo*>::iterator x = raiz->hijos.begin(); x != raiz->hijos.end(); x++){
            eliminar((*x), val);
        }
    }

    Nodo* buscar(Nodo* &raiz, int num)
    {
        if(raiz!=NULL)
        {
            if(raiz->valor == num)
            {
                return raiz;
            }

            for(int i=0;i<raiz->hijos.size();i++)
            {
                Nodo* temp = buscar(raiz->hijos[i],num);
                if(temp && temp->valor == num)
                {
                    return temp;
                }
            }

        }
        return NULL;
    }

    void imprimir(Nodo* raiz)
    {
        if(raiz!=NULL)
        {
            cout<<raiz->valor<<endl;
            for(int i=0;i<raiz->hijos.size();i++)
            {
                imprimir(raiz->hijos[i]);
            }
        }
    }
};

#endif // ARBOLNARIO_H

