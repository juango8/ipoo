//
// Created by Juango on 10/06/2016.
//

#include "pila.h"

using namespace std;

template <typename T>
pila<T>::pila() {
    primero = NULL;
    ultimo = NULL;
}

template <typename T>
void pila<T>::push(T dato) {
    if (!primero){
        primero = new nodo<T>(dato);
        ultimo = primero;
    }
    else{
        ultimo->siguiente = new nodo<T>(dato);
        ultimo->siguiente->anterior = ultimo;
        ultimo = ultimo->siguiente;
    }
}

template <typename T>
void pila<T>::pop() {
    nodo<T> *temp = ultimo;
    if (!ultimo){
        cout << "Esta vacia" << endl;
    }
    else{
        while (temp != primero->anterior){
            cout << "   ->" << temp->dato << endl;
            temp = temp->anterior;
        }
    }
}

template class pila<int>;
template class pila<double>;