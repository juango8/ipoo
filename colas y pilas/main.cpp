#include <iostream>
#include "lista.h"

using namespace std;

int main()
{
	lista<int> L;
	int op, x;
	do
	{
		cout << "\n1.- Ingresar nuevo valor." << endl;
		cout << "2.- Ingresar nuevo valor ordenadamente." << endl;
		cout << "3.- Imprimir la lista." << endl;
		cout << "4.- Invertir lista." << endl;
		cout << "5.- Exit" << endl;
		cout << "Elija una opcion" << endl;
		cin >> op;
		switch (op)
		{
			case 1:
				cout << "Ingrese el nuevo valor de la lista" << endl;
				cin >> x;
				L.insertar(x);
				break;
			case 2:
				cout << "Ingrese el nuevo valor de la lista" << endl;
				cin >> x;
				L.insertar_ordenadamente(x);
				break;
			case 3:
				cout << "Los valores de la lista son:" << endl;
				L.imprimir();
				break;
			case 4:
				cout << "La lista fue invertida" << endl;
				L.invertir();
				break;
			case 5:
				cout << "Programa terminado." << endl;
				return 0;
		}
	}while (true);
	
	return 0;
}
