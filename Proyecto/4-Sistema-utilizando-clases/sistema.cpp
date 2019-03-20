#include <iostream>
#include "seguridad.h"
#include "menu.h"
#include "clientes.h"
#include "juegos.h"

using namespace std;

int main () {
	if (login() == false) {
		return 1;
	}
	
	inicializarDatosdeClientes();
	inicializarDatosdeJuegos();
	
	menu();
		
	return 0;
}

