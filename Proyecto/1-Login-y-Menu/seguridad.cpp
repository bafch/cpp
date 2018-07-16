#include <iostream>
#include "seguridad.h"
#include "mensajes.h"

using namespace std;

bool login() {
	string password;
	bool acceso = false;
	int intentos = 0;
	
	while (acceso == false) {
		system("cls");		
		mensajeBienvenido();
		
		if (intentos == 3) {
			cout << "No se ha podido validar su contraseña, por favor contacte al administrador del sistema." << endl;
			
			return false;
		}
	
		cout << "Ingrese su password: ";
		cin >> password;
		
		if (password == "admin") {
			acceso = true;
		}				
		
		intentos++;		
	}
	
	system("cls");
	
	return true;
}

