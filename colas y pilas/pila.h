//
// Created by Juango on 10/06/2016.
//

#ifndef COLAS_PILAS_PILA_H
#define COLAS_PILAS_PILA_H

#include <iostream>
#include "nodo.h"

template <typename T>
class pila
{
    public:
        pila();
        void push(T dato);
        void pop();
        void print();
    private:
        nodo<T> *primero;
        nodo<T> *ultimo;
};


#endif //COLAS_PILAS_PILA_H
