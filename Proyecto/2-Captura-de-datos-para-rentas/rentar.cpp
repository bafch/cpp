#include <iostream>
#include "rentar.h"
#include "mensajes.h"
#include "clientes.h"

using namespace std;

void rentar() {
	system("cls");
	
	cout << "RENTAS" << endl;
	cout << "------" << endl;
	saltosDeLinea(2);	
	
	bool salir = false;
	
	while(salir == false) {		    	
		// CLIENTE
		string codigoCliente;
		if (buscarCliente(codigoCliente) == false) {
			return;
		}
		
		saltosDeLinea(3);				
		string opcion;
		cout << "presione 'S' mas enter para salir de esta pantalla" << endl;	
		cin >> opcion;
		
		if (opcion == "S" || opcion == "s") {
			salir = true;
		}
	}
}

