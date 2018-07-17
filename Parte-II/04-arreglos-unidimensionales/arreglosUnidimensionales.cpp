#include <iostream>

using namespace std;

int main() {
	int arregloNumeros1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for(int indice = 1;indice <= 10;indice++) {
		cout << arregloNumeros1[indice - 1];
	}
		
	int arregloNumeros2[10] = {0};
	cout << endl;
	
	for(int indice = 1;indice <= 10;indice++) {
		arregloNumeros2[indice - 1] = indice;
		cout << arregloNumeros2[indice - 1];
	}
	 
	cout << endl;
	cout << endl;
	
	int sumar = 0;	 
	for(int indice = 1;indice <= 10;indice++) {
		sumar = sumar + arregloNumeros2[indice - 1];
	}
	
	cout << sumar;
	 	
	return 0;
}
