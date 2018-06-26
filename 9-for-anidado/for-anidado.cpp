#include <iostream>
using namespace std;
 
int main () {
	
	for(int a = 1; a <= 3; a = a + 1) {
	
	   for(int b = 1; b <= 5; b = b + 1) {
	      cout << "valores: " << a << "." << b << endl;
	   }
	   
	}
	
	cout << endl;
	cout << endl;
	cout << endl;

	// imprime un arbol de *

	int stars=1;
	for(int line=0; line < 10; line++)
	{
		for(int s=0; s < stars; s++) {	
			cout << "*";
		}

		stars++;
		cout << endl;		
	}

	return 0;
}



