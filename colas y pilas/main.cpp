#include <iostream>
#include "nodo.h"
#include "pila.h"
#include "cola.h"

using namespace std;

int main() {
    pila<int> P;
    P.push(1);
    P.push(2);
    P.push(3);

    P.print();
    cout << endl;
    P.pop();

    P.print();

    cout << endl;

    cola<int> C;
    C.push(1);
    C.push(2);
    C.push(3);

    C.print();
    cout << endl;
    C.pop();

    C.print();
    return 0;
}