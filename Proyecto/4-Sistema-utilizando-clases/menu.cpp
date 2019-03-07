#include <iostream>
#include "menu.h"
#include "rentar.h"
#include "clientes.h"
#include "juegos.h"
#include "reportes.h"

using namespace std;

void menu() {	
	bool salir = false;
	
	while(salir == false) {
		int opcion;
		
		cout << "MENU PRINCIPAL" << endl;
		cout << "--------------" << endl;
		cout << endl;
		cout << "1 - Rentar Juegos" << endl;
		cout << "2 - Clientes" << endl;
		cout << "3 - Juegos" << endl;
		cout << "4 - Reporte de Rentas" << endl;
		cout << "5 - Salir" << endl;
		
		cout << endl;
		cout << endl;				
		cout << "Ingrese un numero del menu y presione enter --> ";
		cin >> opcion;
		
		switch(opcion) {
			case 1:
				rentar();
				break;	
			case 2:
				clientes();
				break;
			case 3:
				juegos();
				break;
			case 4:
				reportes();
				break;				
			case 5:
				salir = true;	
			default: 		
				break;
		}
		
		 system("CLS");		
	}
}

