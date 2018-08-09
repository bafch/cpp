#include<iostream>
using namespace std;

int main() {
	int arreglo[5];
	int temp;
	
	cout << "Ingrese los numeros a ordenar" << endl;
	for(int i=0;i<5;i++) {
		cout << i+1 << " -> ";
		cin >> arreglo[i];
		cout << endl;
	}
	
	for(int i=0;i<5;i++) {
		for(int j=i+1;j<5;j++) {
			if (arreglo[j]<arreglo[i])	{
				temp=arreglo[j];
				arreglo[j]=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[i]=temp;
			}
		}
	}
	
	for(int i=0;i<5;i++) {
		cout<<arreglo[i]<<" ";		
	}
	
	return 0;
	
}
