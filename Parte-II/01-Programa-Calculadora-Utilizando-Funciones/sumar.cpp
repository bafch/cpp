#include <iostream>
using namespace std;

int restar (int a, int b);

int sumar(int a, int b = 20) {
   int result;
   result = a + b;
  
   return result;
}

void coutEndls(int ciclos) {
	for(int indice = 1; indice <= ciclos; indice ++) {
		cout << endl;	
	}
}

int main () {
	int a = 0;
	int b = 0;
	
	cout << "Ingrese el valor de a: ";
	cin >> a;		
	cout << "Ingrese el valor de b: ";
	cin >> b;	
	
	coutEndls(3);
		
	cout << "Resultado suma: " << sumar(a, b) << endl;
	cout << "Resultado resta: " << restar(a, b) << endl;
}

int restar (int a, int b = 20) {
   int result;
   result = a - b;
  
   return result;
}
