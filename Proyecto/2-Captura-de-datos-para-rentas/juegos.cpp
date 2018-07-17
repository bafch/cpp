#include <iostream>
#include "juegos.h"
#include "mensajes.h"

using namespace std;

string arregloJuegos[10][2] = {
	{ "J001", "The Crew 2"},
	{ "J002", "Jurassic World Evolution"},
	{ "J003", "God Of War"},
	{ "J004", "Monster Hunter"},
	{ "J005", "Far Cry 5"},
	{ "J006", "Call Of Dutty WWII"},
	{ "J007", "FIFA 2018"},
	{ "J008", "Destiny 2"},
	{ "J009", "Horizon Hero"},
	{ "J0010", "Rocket League"}
};


void juegos() {
	system("cls");
	
	cout << "Pantalla de juegos :)" << endl;
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

bool buscarJuego(string &codigo, string &descripcionJuego) {
	while(true) {
		mensajeConValorEnConsola("Codigo del Juego: ", codigo);
		
		for(int indice = 0; indice < 5; indice++) {		
			if (arregloJuegos[indice][0] == codigo) {
				descripcionJuego = arregloJuegos[indice][1];
				mensajeEnConsola("--> " + descripcionJuego);
				return true;
			}
		}		
			
		bool continuar = false;
		while(continuar == false) {
			system("cls");
			
			string opcion = "";
			mensajeConValorEnConsola("Codigo de juego no encontrado, desea continuar buscando s/n? ", opcion);
			
			if (opcion == "s" || opcion == "S") {
				continuar = true;
				system("cls");
			}
			if (opcion == "n" || opcion == "N") {
				return false;
			}		
		}
	}
}

