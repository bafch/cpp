#include <iostream>
#include <cstdlib>

using namespace std;
 
int main(int argc, char* argv[])
{
    if (argc < 2) {
        cout << "Ingrese el subtotal y el descuento";
        return 1;
    }	
    
    cout << "\n\n Calculo del total de una factura con descuento e impuesto :\n";
	cout << "-----------------------------------------------------------\n";
	
	float subtotal;
	int descuento;
	float impuesto;
	float calculoDescuento;
	float calculoImpuesto;
	float total;
	
	
	subtotal=atoi(argv[1]);
	descuento=atoi(argv[2]);
	impuesto = 0.15;
	
	calculoDescuento = (subtotal * descuento) / 100;
	calculoImpuesto = (subtotal - calculoDescuento) * impuesto;
	total = subtotal - calculoDescuento + calculoImpuesto;
	
	cout << " El total a pagar es "<< total;
}
