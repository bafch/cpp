#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

void coutEndls(int ciclos) {
	for(int indice = 1; indice <= ciclos; indice ++) {
		cout << "*";
	}
}


int main () {	
	int numeroSecreto; 
	int miNumero;
	
	/* inicializa el numero random */
	srand (time(NULL));
	
	/* genera un numero entre 1 and 10: */
	numeroSecreto = rand() % 10 + 1;
	
	do {
		printf ("Adivina el numero (1 to 10): ");
		cin >> miNumero;
		
		if (numeroSecreto < miNumero) {
			cout << "El numero secreto es menor" << endl;
		}
		else {
			if (numeroSecreto > miNumero) {
				cout << "El numero secreto es mayor" << endl;
			}
		}
	} while (numeroSecreto != miNumero);
	
	cout << "Felicidades, adivinaste!" << endl;

	return 0;	
}

