#include <iostream>
using namespace std;
 
int main () {
   int totalPares = 0;
   int totalImpares = 0;
   
   for(int numero = 1; numero <= 10; numero++) {
		if (numero%2==0) {				
			totalPares = totalPares + numero;
		} else {
			totalImpares = totalImpares + numero;
		}
   }
 
   cout << "Total pares: " << totalPares << endl;
   cout << "Total impares: " << totalImpares << endl;
   cout << "Total: " << totalPares + totalImpares << endl;
   return 0;
}

