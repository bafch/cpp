/*
switch únicamente se puede ejecutar sobre algunos tipos nativos:

int y unsigned int
char y unsigned char
short y unsigned short
long y unsigned long
long long y unsigned long long
*/

#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
   char nota = argv[1][0];
   
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


