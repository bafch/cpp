#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	
	// Arreglo con Categoria y descripcion	
	string libros[39][2];
	libros[0][0] = "Algoritmos"; libros[0][1] = "Algoritmos y Programacion (Guia para docentes)";
	libros[1][0] = "Algoritmos"; libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos";
	libros[2][0] = "Algoritmos"; libros[2][1] = "Breves Notas sobre Analisis de Algoritmos";
	libros[3][0] = "Algoritmos"; libros[3][1] = "Fundamentos de Informatica y Programacion";
	libros[4][0] = "Algoritmos"; libros[4][1] = "Temas selectos de estructuras de datos";
	libros[5][0] = "Algoritmos"; libros[5][1] = "Teoria sintactico-gramatical de objetos";
	libros[6][0] = "Base de Datos"; libros[6][1] = "Apuntes de Base de Datos 1";
	libros[7][0] = "Base de Datos"; libros[7][1] = "Base de Datos (2005)";
	libros[8][0] = "Base de Datos"; libros[8][1] = "Base de Datos (2011)";
	libros[9][0] = "Base de Datos"; libros[9][1] = "Base de Datos Avanzadas (2013)";
	libros[10][0] = "Base de Datos"; libros[10][1] = "Diseno Conceptual de Bases de Datos";
	libros[11][0] = "Ciencia Computacional"; libros[11][1] = "Breves Notas sobre Automatas y Lenguajes";
	libros[12][0] = "Ciencia Computacional"; libros[12][1] = "Breves Notas sobre Teoria de la Computacion";
	libros[13][0] = "Metodologias de desarrollo de software"; libros[13][1] = "Compendio de Ingenieria del Software";
	libros[14][0] = "Metodologias de desarrollo de software"; libros[14][1] = "Diseno agil con TDD";
	libros[15][0] = "Metodologias de desarrollo de software"; libros[15][1] = "Ingenieria de Software: Una Guia para Crear Sistemas de Informacion";
	libros[16][0] = "Metodologias de desarrollo de software"; libros[16][1] = "Scrum & Extreme Programming (para programadores)";
	libros[17][0] = "Metodologias de desarrollo de software"; libros[17][1] = "Scrum y XP desde las trincheras";
	libros[18][0] = "Miscelaneos"; libros[18][1] = "97 cosas que todo programador deberia saber";
	libros[19][0] = "Miscelaneos"; libros[19][1] = "Docker";
	libros[20][0] = "Miscelaneos"; libros[20][1] = "El camino a un mejor programador";
	libros[21][0] = "Miscelaneos"; libros[21][1] = "Introduccion a Docker";
	libros[22][0] = "Miscelaneos"; libros[22][1] = "Programacion de videojuegos SDL";
	libros[23][0] = "PHP"; libros[23][1] = "Manual de estudio introductorio al lenguaje PHP procedural";
	libros[24][0] = "PHP"; libros[24][1] = "PHP y Programacion orientada a objetos";
	libros[25][0] = "PHP"; libros[25][1] = "POO y MVC en PHP";
	libros[26][0] = "PHP"; libros[26][1] = "Silex, el manual oficial";
	libros[27][0] = "PHP"; libros[27][1] = "Symfony 1.4, la guia definitiva";
	libros[28][0] = "PHP"; libros[28][1] = "Symfony 2.4, el libro oficial";
	libros[29][0] = "Python"; libros[29][1] = "Aprenda a pensar como un programador (con Python)";
	libros[30][0] = "Python"; libros[30][1] = "Doma de Serpientes para Ninos: Aprendiendo a Programar con Python";
	libros[31][0] = "Python"; libros[31][1] = "Inmersion en Python";
	libros[32][0] = "Python"; libros[32][1] = "Inmersion en Python 3";
	libros[33][0] = "Python"; libros[33][1] = "Introduccion a la programacion con Python";
	libros[34][0] = "Python"; libros[34][1] = "Introduccion a Programando con Python";
	libros[35][0] = "Python"; libros[35][1] = "Python instantaneo (1999)";
	libros[36][0] = "Python"; libros[36][1] = "Python para ciencia e ingenieria";
	libros[37][0] = "Python"; libros[37][1] = "Python para principiantes";
	libros[38][0] = "Python"; libros[38][1] = "Python para todos";

	srand (time(NULL));
	bool salir = false;
	
	while(salir == false) {
		string buscar;
		system("cls");	
		cout << "Ingrese la descripcion del libro que busca: ";	
		cin >> buscar;
		
		for(int i = 0;i<39;i++) {
			string libroEnMinuscula = libros[i][0];
			transform(libroEnMinuscula.begin(), libroEnMinuscula.end(), libroEnMinuscula.begin(), ::tolower);
			string buscarEnMinuscula = buscar;
			transform(buscarEnMinuscula.begin(), buscarEnMinuscula.end(), buscarEnMinuscula.begin(), ::tolower);			

			 if (libroEnMinuscula.find(buscarEnMinuscula) != std::string::npos) {
				
				cout << "Libro encontrado: " << libros[i][1] << endl;
				
				cout << endl;
				cout << "Tambien te sugerimos: " << endl;
				
				// Sugiere un libro de la misma categoria
				int sugerencia1 = 0;
				for(int j = 0;j<39;j++) {
					if (libros[i][0] == libros[j][0] && i != j) {
						sugerencia1 = j;
						break;
					}  					
				}
				
				// Sugiere dos libros al azar entre 0 y 38
				int sugerencia2 = rand() % 38 + 1;
				int sugerencia3 = rand() % 38 + 1;
				
				cout << "* Sugerencia 1: " << libros[sugerencia1][1] << endl;
				cout << "* Sugerencia 2: " << libros[sugerencia1][2] << endl;
				cout << "* Sugerencia 3: " << libros[sugerencia1][3] << endl;

				salir = true;
				break;
			}
		}
		
		if (salir == false) {
			char continuar;
			
			while(true) {
				system("cls");	
				cout << "No se encontro el libro que busca, desea continua? s/n";
				cin >> continuar;
				if (continuar == 's') {
					break;
				} else if (continuar == 'n') {
					salir = true;
					break;
				}	
			}						
		}
	}
	
		
	return 0;
}
