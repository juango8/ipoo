//
// Created by Juango on 10/06/2016.
//

#include "cola.h"

using namespace std;

template <typename T>
cola<T>::cola() {
    primero = NULL;
    ultimo = NULL;
}

template <typename T>
void cola<T>::push(T dato) {
    if (!primero){
        primero = new nodo<T>(dato);
        ultimo = primero;
    }
    else{
        ultimo->siguiente = new nodo(dato);
        ultimo->siguiente->anterior = ultimo;
        ultimo = ultimo->siguiente;
    }
}

template <typename T>
void cola<T>::pop() {
    primero = primero->siguiente;
}

template <typename T>
void cola<T>::print() {
    nodo<T> *temp = ultimo;
    if (!ultimo){
        cout << "Esta vacia" << endl;
    }
    else{
        while (temp != primero->anterior)
        {
            cout << "   -" << temp->dato << endl;
        }
    }
}

template class cola<int>;
template class cola<double>;