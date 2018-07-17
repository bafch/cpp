#include <iostream>
#include "rentar.h"
#include "mensajes.h"
#include "clientes.h"
#include "juegos.h"

using namespace std;

void rentar() {
	system("cls");
	
	cout << "RENTAS" << endl;
	cout << "------" << endl;
	saltosDeLinea(2);	
	
	bool salir = false;
	
	while(salir == false) {		 
		system("cls");   			
		// CLIENTE
		string codigoCliente;
		string nombreCliente;
		if (buscarCliente(codigoCliente, nombreCliente) == false) {
			return;
		}
		
		system("cls");   	
		// JUEGO
		string codigoJuego;
		string descripcionJuego;
		if (buscarJuego(codigoJuego, descripcionJuego) == false) {
			return;
		}	
		
		system("cls");
		mensajeEnConsola("JUEGO RENTADO");
		mensajeEnConsola("-------------");
		mensajeEnConsola("Codigo Cliente " + codigoCliente);
		mensajeEnConsola("-->" + nombreCliente);
		saltosDeLinea(1);				
		mensajeEnConsola("Codigo Juego " + codigoJuego);
		mensajeEnConsola("-->" + descripcionJuego);
		saltosDeLinea(1);				
		mensajeEnConsola("Juego rentado por 3 dias");
		
		saltosDeLinea(3);				
		string opcion;
		cout << "presione 'S' mas enter para salir de esta pantalla" << endl;	
		cin >> opcion;
		
		if (opcion == "S" || opcion == "s") {
			salir = true;
		}
	}
}

