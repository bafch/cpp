#include <iostream>
#include "rentar.h"

using namespace std;

void rentar() {
	system("cls");
	
	cout << "Pantalla de rentas :)" << endl;
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
