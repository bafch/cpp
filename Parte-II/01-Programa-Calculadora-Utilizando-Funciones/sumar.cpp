#include <iostream>
using namespace std;

int restar (int a, int b);

int sumar(int a, int b = 20) {
   int result;
   result = a + b;
  
   return result;
}

int main () {
	int a = 0;
	int b = 0;
	
	cout << "Ingrese el valor de a: ";
	cin >> a;		
	cout << "Ingrese el valor de b: ";
	cin >> b;	
	
	cout << endl;
	cout << endl;
	cout << endl;
		
	cout << "Resultado suma: " << sumar(a, b) << endl;
	cout << "Resultado resta: " << restar(a, b) << endl;
}

int restar (int a, int b = 20) {
   int result;
   result = a - b;
  
   return result;
}
