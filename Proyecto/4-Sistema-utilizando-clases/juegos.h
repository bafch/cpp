#include <iostream>
using namespace std;

class Juego {
	public:
		string Codigo;
		string Descripcion;
		Juego() {
			
		}
		Juego(string codigo, string descripcion) {
			Codigo = codigo;
			Descripcion = descripcion;
		}
};

void juegos();
bool buscarJuego(string &codigo, string &descripcionJuego);
void inicializarDatosdeJuegos();
