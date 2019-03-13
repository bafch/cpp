#include <iostream>
#include "seguridad.h"
#include "menu.h"
#include "clientes.h"

using namespace std;

int main () {
	if (login() == false) {
		return 1;
	}
	
	inicializarDatosdeClientes();
	menu();
		
	return 0;
}

