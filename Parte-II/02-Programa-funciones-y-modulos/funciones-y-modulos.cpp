#include <iostream>
#include "calculadora.h"

using namespace std;

int main () {
	int a;
	int b;
	
	cout << "Ingrese el valor de A: ";
	cin >> a;
	cout << "Ingrese el valor de B: ";
	cin >> b;
	
	cout << endl;
	
	cout << "Resultado de restar: " << restar(a, b) << endl;
	cout << "Resultado de sumar: " << sumar(a, b);
	
	return 0;
}

