#ifndef CADENAS_H
#define CADENAS_H
#include <bits/stdc++.h>
using std::ifstream;
using std::ofstream;
using namespace std;
class Cadenas
{
	private:
		char  * cadena;
	public:
		void Entrada();
		char * ContadorLetras(char *);
		char * ContadorEspacios (char *);
		char * ContadorMinus(char *);
		char * ContadorMayus(char *);
		char * ContadorCadena(char *);
		void Salida();
		void setCadena( char *);
		char * getCadena();
		Cadenas(char *); 
};

#endif
