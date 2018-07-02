#include <iostream>
#include <cstdlib>

using namespace std;
 
int main(int argc, char* argv[])
{
    if (argc < 2) {
        cout << "Ingrese dos valores enteros";
        return 1;
    }	
    
    cout << "\n\n Imprima la suma de dos numeros :\n";
	cout << "-------------------------------\n";
	
	int a;
	int b;
	int suma;
	
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	
	suma=a+b;
	
	cout << " La suma de "<< a << " y "<<b <<" es : "<< suma <<"\n\n" ;
}

