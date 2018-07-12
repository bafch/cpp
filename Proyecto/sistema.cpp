#include <iostream>
#include "seguridad.h"
#include "menu.h"

using namespace std;

int main () {
	if (login() == false) {
		return 1;
	}
	
	menu();
		
	return 0;
}

