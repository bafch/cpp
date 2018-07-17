#include <iostream>
using namespace std;

string arregloPersonas[6][3] = {
	{ "C001", "Juan Perez", "99999999"},
	{ "C002", "Jose Martinez", "99888888"},
	{ "C003", "Maria Gonzalez", "99777777" },
	{ "C004", "Pedro Hernandez", "99666666" },
	{ "C005", "Pablo Jimenez", "99555555" }
};

int main() {
	
		// Asignar valor al elemento 6 del arreglo
		arregloPersonas[5][0] = "C006";
		arregloPersonas[5][1] = "Raquel Pineda";
		arregloPersonas[5][2] = "99444444";
	
		string codigo;
		string nombre = "Nombre no encontrado";
		cout << "Ingrese el codigo: "; cin >> codigo;
	
		for(int indice = 0; indice < 6; indice++) {		
			if (arregloPersonas[indice][0] == codigo) {
				nombre  = arregloPersonas[indice][1];
				break;
			}
		}		
		
		cout << nombre << endl;
				
	return 0;
}

