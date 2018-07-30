#include <iostream>
#include <conio.h> 
#include "consola.h"

using namespace std;

void mensajeEnConsola(string textoEnConsola) {			
	cout << textoEnConsola << endl;
}

void mensajeConValorEnConsola(string textoEnConsola, string &valorEnConsola) {			
	cout << textoEnConsola;
	cin >> valorEnConsola;
}

