#include <iostream>

using namespace std;

main() {
	int nota;
	int *apuntador1;
	int *apuntador2;
	
	nota = 10;
	 	 
	apuntador1 = &nota;	 
	 
	cout << "El valor de nota: " << nota << endl;;
	 
	*apuntador1 = 12;
	 
	cout << "El valor de nota despues que el apuntador lo modifica: " << nota << endl;
	cout << "El valor de los apuntadores 1 y 2: " << apuntador1 << ", " << apuntador2 << endl;
	
	
	// Punteros con arreglos
	int arreglo[5];
	
	for (int i = 0; i < 5; i++) {
		arreglo[i] = i + 1;
	}
	
	int *apuntador3;
	apuntador3 = arreglo;
	
	cout << "Valor arreglo: " << apuntador2[2] << endl;
	
	apuntador3 = &arreglo[0];
	
	cout << "Valor arreglo elemento 0: " << apuntador2[0] << endl;
	
	apuntador3[0] = 50;
	
	cout << "Valor arreglo elemento 0: " << apuntador2[0] << endl;
	
	return 0;
}
