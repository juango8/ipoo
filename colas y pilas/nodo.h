//
// Created by Juango on 08/06/2016.
//

#ifndef COLAS_PILAS_NODO_H
#define COLAS_PILAS_NODO_H

#include <iostream>

template <typename T>
class nodo {
    public:
        nodo(T x);
        T dato;
        nodo<T> *siguiente;
        nodo<T> *anterior;
};

#endif //COLAS_PILAS_NODO_H