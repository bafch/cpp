#include <iostream>
#include <cstdlib>

using namespace std;
 
int main(int argc, char* argv[])
{
   int numero = atoi(argv[1]);
   string resultado;
   
   if (numero%2==0) {
   	resultado = "par";
   } else {
   	resultado = "impar";
   }
   
   cout << " El número " << numero << " es " << resultado;
 
   return 0;
}

