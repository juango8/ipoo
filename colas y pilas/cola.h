//
// Created by Juango on 10/06/2016.
//

#ifndef COLAS_PILAS_COLA_H
#define COLAS_PILAS_COLA_H

#include <iostream>
#include "nodo.h"

template <typename T>
class cola{
    public:
        cola();
        void push(T dato);
        void pop();
        void print();

    protected:
    private:
        nodo<T> *primero;
        nodo<T> *ultimo;
};

#endif //COLAS_PILAS_COLA_H
