#include <iostream>
#include <string>
using namespace std;
 
int main(int argc, char* argv[]) {	

	cout << "(~   _  _ _  _  _    \n"
			"(_><(_|| | |(/_| |,  \n"     
			"					  \n"                
			"/|    _  _  _ _. _ | \n"
			"_|_  |_)(_|| (_|(_|| \n"
     		"     |              ";
     		     	
    /*
    	Valor del examen 10
    	-------------------
    	
		1 - Actualmente con el password admin puede ingresar al sistema. Cree un segundo password para poder ingresar al sistema. Siempre debe poder ingresar con el password admin y con el nuevo password.
		   * El nuevo password es a su criterio ----> 3%
		
		2 - Agregue un nuevo articulo al menu. La opcion: 
			5 - Cheescake .. L 40.00 ----> 4%
			
		3 - El switch debe aceptar opciones del 0 - 5, si se ingresa cualquier otro valor debe mostrar un mensaje "Opcion de menu invalida"
			* tip: utilice   system("PAUSE");   para hacer una pausa despues de haber mostrado el mensaje, luego el usuario puede presionar enter y continuar	----> 3%
	
	*/						
    cout << endl;
    cout << endl;
    cout << endl;	

	string password;
	bool acceso = false;
	
	while (acceso == false) {		
		cout << "Ingrese su password: ";
		cin >> password;
		
		if (password == "admin") {
			acceso = true;
		}						
	}
	
	system("CLS");

	float subtotal = 0;
	string productosComprados;
	int numeroArticulos = 0;
	bool ingresarMasProductos = true;
		
	while(ingresarMasProductos == true) {
		int opcion;
		
		cout << "Seleccione un No de producto para agregar al carrito de compras" << endl;	
		cout << "---------------------------------------------------------------" << endl;
		cout << "1 - Granita de Cafe.......L 35.00" << endl;
		cout << "2 - Granita de Mora.......L 35.00" << endl;
		cout << "3 - Capuccino.............L 25.00" << endl;
		cout << "4 - Galleta de Chocolate..L 15.00" << endl;
		cout << "---------------------------------------------------------------" << endl;
		cout << "0 - Salir" << endl;
		cout << "---------------------------------------------------------------" << endl;
		cout << endl;
		cout << endl;
		cout << "Total articulos comprados  -->     " << numeroArticulos << endl;
		cout << "Subtotal a pagar           -->  L. " << subtotal << endl;

		cout << endl;
		cout << endl;				
		cout << "Ingrese un numero del menu --> ";
		cin >> opcion;
		
		
		switch(opcion) {
			case 0: 
				ingresarMasProductos = false;				
				break;
			case 1:
				subtotal = subtotal + 35;
				productosComprados = productosComprados + "Granita de Cafe.......L 35.00\n";
				numeroArticulos++;
				break;
			case 2:
				subtotal = subtotal + 35;
				productosComprados = productosComprados + "Granita de Mora.......L 35.00\n";
				numeroArticulos++;
				break;	
			case 3:
				subtotal = subtotal + 25;
				productosComprados = productosComprados + "Capuccino.............L 25.00\n";
				numeroArticulos++;
				break;							
			case 4:
				subtotal = subtotal + 15;
				productosComprados = productosComprados + "Galleta de Chocolate..L 15.00\n";
				numeroArticulos++;
				break;				
			default: 		
				break;
		}
		
		 system("CLS");
	}
	
	cout << "Su compra" << endl;
	cout << "-------------------------" << endl;
	cout << productosComprados << endl;
	cout << "-------------------------" << endl;
	cout << "Subtotal.......: L " << subtotal / 1.15 << endl;
	cout << "Impuesto.......: L " << subtotal - (subtotal / 1.15) << endl;
	cout << "Total a pagar..: L " << subtotal << endl;
	
	return 0;
}

