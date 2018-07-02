#include <iostream>
#include <string>
using namespace std;
 
int main(int argc, char* argv[]) {	
	cout << "Leer lista de argumentos con ciclo for" << endl;
	cout << "--------------------------------------" << endl;
	
	for(int indice = 1; indice < argc; indice++) {
		cout << "argumento " << indice << ": " << argv[indice] << endl;			
	}
	
	cout << endl;
	cout << endl;
	cout << "Leer lista de argumentos con ciclo while" << endl;
	cout << "----------------------------------------" << endl;
	
	int i = 1;
	while (i < argc) {
		cout << "argumento " << i << ": " << argv[i] << endl;
		i++;
	}
	

	cout << endl;
	cout << endl;
	cout << "Buscar todos los argumentos que contienen la letra A" << endl;
	cout << "----------------------------------------------------" << endl;		
	
	for(int indice = 1; indice < argc; indice++) {
		string texto = argv[indice];

		if (texto.find("a", 0) != string::npos) {
			cout << "argumento " << indice << ": " << argv[indice] << " <-- contiene una a" << endl;
		} else {
			cout << "argumento " << indice << ": " << argv[indice] << endl;			
		}		
	}	
	
	return 0;
}

