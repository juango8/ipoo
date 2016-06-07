#include <iostream>
#include "lista.h"

using namespace std;

template <typename T>
lista<T>::lista()
{
	primero=ultimo=NULL;
}

template <typename T>
void lista<T>::insertar(T x)
{
	if (!primero)
	{
		primero = new nodo<T> (x);
		ultimo = primero;
	}
	else{
		ultimo->next = new nodo<T> (x);
		ultimo = ultimo->next;
	}
}

template <typename T>
void lista<T>::insertar_ordenadamente(T x)
{
	nodo<T> temp = new nodo<T> (x);
	nodo<T>* ptr_temp = primero;
	
	if (!primero){
		primero = ultimo = temp;
	}
	else
	{
		if (primero->date > x)
		{
			temp->next = primero; 
			primero = temp;
		}
		else
		{
			while ((ptr_temp->next->date) && (ptr_temp->next != NULL))
			{
				ptr_temp = ptr_temp->next;
			}
			temp->next = ptr_temp->next;
			ptr_temp->next = temp;
		}
	}
}

template <typename T>
void lista<T>::imprimir()
{
	nodo<T> *temp= primero;
	if (!primero)
	{
		cout << "La Lista esta vacia " << endl;
	}
	else
	{	while (temp != ultimo->next)
		{
			cout << temp->date << endl;
			temp = temp->next;
		}
	}
}

template <typename T>
void lista<T>::invertir()
{
	nodo<T> *prev = NULL;
    nodo<T> *next = NULL;
    nodo<T> *temp;
    
    temp = primero;
 
    while (temp != NULL) {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    ultimo = primero;
	primero = prev;
    
}
