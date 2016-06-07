//
// Created by Juango on 07/06/2016.
//

#include <iostream>
#include "nodo.h"

template  <typename T>

nodo<T>::nodo(T x)
{
    this->date=x;
    next=NULL;
}

template class nodo<int>;