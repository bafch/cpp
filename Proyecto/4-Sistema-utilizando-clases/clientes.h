#include <iostream>
using namespace std;

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

void inicializarDatosdeClientes();
void clientes();
bool buscarCliente(string &codigo, string &nombreCliente);

