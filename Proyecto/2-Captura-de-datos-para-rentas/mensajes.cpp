#include <iostream>
#include "mensajes.h"

using namespace std;

// Para generar textos pueden utilizar el sitio web: http://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20
// o
// https://www.youtube.com/watch?v=5g-_Ew4vumo
// https://github.com/RizwanSaeedi/C-Sharp-Ascii-Text-Generator-
//		Abran el proyecto con Visual Studio -> Ascii Code Generator.sln
// 		Eliminen el archivo saeedi.pfx
// 		Ejecuten el programa


void mensajeBienvenido() {
	cout << "Bienvenido a" << endl;
	
	cout << "  _______      ___     .___  ___. _______      _______..___________.  ______  .______  "<<endl;
	cout << " /  _____|    /   \\    |   \\/   ||   ____|    /       ||           | /  __  \\ |   _  \\ "<<endl;
	cout << "|  |  __     /  ^  \\   |  \\  /  ||  |__      |   (----``---|  |----`|  |  |  ||  |_)  |"<<endl;
	cout << "|  | |_ |   /  /_\\  \\  |  |\\/|  ||   __|      \\   \\        |  |     |  |  |  ||   ___/ "<<endl;
	cout << "|  |__| |  /  _____  \\ |  |  |  ||  |____ .----)   |       |  |     |  `--'  ||  |     "<<endl;
	cout << " \\______| /__/     \\__\\|__|  |__||_______||_______/        |__|      \\______/ | _|     "<<endl;
	

	cout << endl;
	cout << endl;
	cout << endl;
}


void saltosDeLinea(int ciclos) {
	for(int indice = 1; indice <= ciclos; indice ++) {
		cout << endl;
	}
}

void mensajeEnConsola(string textoEnConsola) {			
	cout << textoEnConsola << endl;
}

void mensajeConValorEnConsola(string textoEnConsola, string &valorEnConsola) {			
	cout << textoEnConsola;
	cin >> valorEnConsola;
}


