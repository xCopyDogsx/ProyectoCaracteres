#include <iostream>
#include "cadenas.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Cadenas y;
	y.Entrada();
     cout<<"La cadena leida en el archivo es: "<<y.getCadena()<<endl;
  int Letras=y.ContadorLetras(y.getCadena());
  int Espacios=y.ContadorEspacios(y.getCadena());
  int Minus=y.ContadorMinus(y.getCadena());
  int Mayus=y.ContadorMayus(y.getCadena());
  int Palabras=y.ContadorPalabras(y.getCadena());
  y.Salida(Letras,Espacios,Mayus,Minus,Palabras,y.getCadena());
	return 0;
}
