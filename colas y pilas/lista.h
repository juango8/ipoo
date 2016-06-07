#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"

template <class T>

class lista
{
	public:
		nodo<T> *primero;
		nodo<T> *ultimo;
		void insertar(T x);
		void insertar_ordenadamente(T x);
		void imprimir();
		void invertir();
		lista();
};

#endif
