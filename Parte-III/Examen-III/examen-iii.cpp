/*
	1) Cree un arreglo bidimensional de tipo char para almacenar las siguientes palabras. 5ptos
		a) luz azul
		b) introduccion
		c) yo soy
		d) amor a roma
		e) nota final
		
	2) Determine si cada palabra en el arreglo es palindroma e imprima el resultado "Es palindroma" o "No es palindroma". 10ptos 
	
	3) Ordene su arreglo en forma ascendente utilizando el metodo de burbuja y luego de ordenarlo imprima el resultado. 5ptos
	
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

*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int palindroma(char palabra[],int ini, int fin){
     if(ini >= fin)
          return 1;
     if(palabra[ini] == palabra[fin])
          palindroma(palabra, ini+1, fin-18);
    else return 0;
}

int main () {
	string arreglo[1];
	arreglo[0] = "luz azul";


	int n = arreglo[0].length();
	char palabra[n+1];
	strcpy(palabra, arreglo[0].c_str()); 
	
	if (palindroma(palabra, 0, n - 1) == 1) {
		cout << palabra << ": es palindroma" << endl;
	} else {
		cout << palabra << ": no es palindroma" << endl;
	}

	return 0;
}

