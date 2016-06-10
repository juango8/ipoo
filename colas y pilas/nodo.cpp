//
// Created by Juango on 08/06/2016.
//

#include "nodo.h"

template <typename T>
nodo<T>::nodo(T x)
{
    dato = x;
    siguiente = NULL;
    anterior = NULL;
}

template class nodo<int>;
template class nodo<double>;
