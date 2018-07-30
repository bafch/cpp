#include <iostream>
#include "reportes.h"
#include "rentar.h"

using namespace std;

void reportes() {
	system("cls");
	
	cout << "Reporte de Rentas" << endl;
	cout << "-----------------" << endl;
		
	for(int indice = 0; indice < 100; indice++) {
		if (arregloRentas[indice] == "") {
			break;
		}
		cout << arregloRentas[indice] << endl;
	}
		
	cout << endl;
	cout << endl;
	
	bool salir = false;
	
	while(salir == false) {
		string opcion;
		cout << "presione 'S' y luego enter para salir de esta pantalla" << endl;	
		cin >> opcion;
		
		if (opcion == "S" || opcion == "s") {
			salir = true;
		}
	}
}

