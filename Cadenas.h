#ifndef CADENAS_H
#define CADENAS_H
#include <bits/stdc++.h>
using std::ifstream;
using std::ofstream;
using namespace std;
class Cadenas
{
	private:
		char  cadena[500];
	public:
		void Entrada();
		int ContadorLetras(const char *);
		int ContadorEspacios (const char *);
		int ContadorMinus(const char *);
		int ContadorMayus(const char *);
		int ContadorPalabras(const char *);
		void Salida(int,int,int,int,int,const char *);
		void setCadena(const char *);
		char * getCadena();
		Cadenas();
};

#endif
