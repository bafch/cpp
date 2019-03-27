#include <iostream>
#include "rentar.h"
#include "mensajes.h"
#include "clientes.h"
#include "juegos.h"

using namespace std;

class Rentas {
	public:
		Cliente ClienteObj;
		Juego JuegoObj;
		string RentaDevolucion;
		Rentas() {
			
		}
		Rentas(Cliente cliente, Juego juego, string rentaDevolucion) {
			ClienteObj = cliente;
			JuegoObj = juego;
			RentaDevolucion = rentaDevolucion;
		}
};

string arregloRentas[100];
int ultimaLinea = 0;

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
		cout << endl;
		cout << endl;		
		char opcionRentaDevolucion;
		string textoRentaDevolucion = "";

		while(true) {
			cout << "Ingrese 'R' si es renta o 'D' si es devolucion:" << endl;
			cin >> opcionRentaDevolucion;
			
			switch(opcionRentaDevolucion) {
				case 'R':
				case 'r':
					textoRentaDevolucion = "Renta por 3 dias";
					break;
				case 'D':
				case 'd':
					textoRentaDevolucion = "Devolucion";
					break;
				default:
					system("cls");
					cout << endl;
					cout << endl;
			}
			
			if (textoRentaDevolucion != "") {
				break;
			}
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
		mensajeEnConsola(textoRentaDevolucion);
		
		saltosDeLinea(3);			
		
		arregloRentas[ultimaLinea] = codigoCliente + " - " + nombreCliente + " | " + codigoJuego + " - " + descripcionJuego + " | " + textoRentaDevolucion;
		ultimaLinea++;
			
		string opcion;
		cout << "presione 'S' y luego enter para salir de esta pantalla" << endl;	
		cin >> opcion;
		
		if (opcion == "S" || opcion == "s") {
			salir = true;
		}
	}
}

