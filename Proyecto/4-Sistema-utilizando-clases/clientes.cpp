#include <iostream>
#include "clientes.h"
#include "mensajes.h"

using namespace std;

string arregloClientes[5][3] = {
	{ "C001", "Juan Perez", "99-99-99-99"},
	{ "C002", "Jose Martinez", "99-88-88-88"},
	{ "C003", "Maria Gonzalez", "99-77-77-77" },
	{ "C004", "Pedro Hernandez", "99-66-66-66" },
	{ "C005", "Pablo Jimenez", "99-55-55-55" }
};

class Cliente {
	public:
		string Codigo;
		string Nombre;
		string Telefono;
		Cliente() {
			
		}
		Cliente(string codigo, string nombre, string telefono) {
			Codigo = codigo;
			Nombre = nombre;
			Telefono = telefono;
		}
};

Cliente arregloObjClientes[3];

void clientes() {
	
	Cliente cliente1("C001", "Juan Perez", "99-88-77-66");
	arregloObjClientes[0] = cliente1;
	
	Cliente cliente2("C002", "Maria Martinez", "99-88-77-66");
	arregloObjClientes[1] = cliente2;
	
	for(int i =0; i < 3; i++) {
		cout << arregloObjClientes[i].Nombre << endl;
	}
	
	//system("pause");
	
	system("cls");

	cout << "Listado de Clientes" << endl;
	cout << "-------------------" << endl;
		
	for(int indice = 0; indice < 5; indice++) {
		cout << arregloClientes[indice][0] << " - " << arregloClientes[indice][1] << endl;;
	}

	cout << endl;
	cout << endl;
	
	bool salir = false;
	
	while(salir == false) {
		string opcion;
		cout << "presione 'S' y luego enter para salir de esta pantalla" << endl;	
		cin >> opcion;
		
		if (opcion == "S" || opcion == "s") {
			salir = true;
		}
	}
}

bool buscarCliente(string &codigo, string &nombreCliente) {
	while(true) {
		mensajeEnConsola("BUSCAR CLIENTE");
		mensajeEnConsola("--------------");
		saltosDeLinea(2);		
		mensajeConValorEnConsola("Codigo del Cliente: ", codigo);
		
		for(int indice = 0; indice < 5; indice++) {		
			if (arregloClientes[indice][0] == codigo) {
				nombreCliente = arregloClientes[indice][1];
				mensajeEnConsola("--> " + nombreCliente);
				return true;
			}
		}		
			
		bool continuar = false;
		while(continuar == false) {
			system("cls");
			
			string opcion = "";
			mensajeConValorEnConsola("Codigo de cliente no encontrado, desea continuar buscando s/n? ", opcion);
			
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

