//
// Created by Juango on 07/06/2016.
//

#ifndef LISTA_ENLAZADA_LISTA_H
#define LISTA_ENLAZADA_LISTA_H
#include "nodo.h"1

template <class T>

class lista {
    public:
        nodo<T> *primero;
        nodo<T> *ultimo;
        void insertar(T x);
        void insertar_ordenadamente(T x);
        void imprimir();
        void invertir();
        lista();

};


#endif //LISTA_ENLAZADA_LISTA_H
