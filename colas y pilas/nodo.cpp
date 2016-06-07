#include <iostream>
#include "nodo.h"

template <typename T>

nodo<T>::nodo(T x)
{
	this->date=x;
	next=NULL;
}
