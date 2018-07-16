#include <iostream>
#include "clientes.h"

using namespace std;

void clientes() {
	system("cls");

	cout << "Pantalla de clientes :)" << endl;
	cout << endl;
	cout << endl;
	
	bool salir = false;
	
	while(salir == false) {
		string opcion;
		cout << "presione 'S' mas enter para salir de esta pantalla" << endl;	
		cin >> opcion;
		
		if (opcion == "S" || opcion == "s") {
			salir = true;
		}
	}
}
