#include <iostream>
using namespace std;
 
int main()
{
   char nota ='B';

   switch(nota) {
      case 'A' :
         cout << "Excelente!" << endl; 
         break;
      case 'B' :
      case 'C' :
         cout << "Bien Hecho" << endl; 
         break;
      case 'D' :
         cout << "Aprobo" << endl; 
         break;
      case 'F' :
         cout << "Mejor intente de nuevo" << endl; 
         break;
      default :
         cout << "Letra invalida" << endl; 
   }
   cout << "Resultado: " << nota << endl;
 
   return 0;
}

