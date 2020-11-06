#include "Cadenas.h"

	void Cadenas::setCadena(char * cadenaX){
			cadena=cadenaX;
					}
	char * Cadenas::getCadena()
			{
			return cadena;
					}
   Cadenas::Cadenas(char * cadw){
		setCadena(cadw);
	}
void Cadenas::Entrada(){
	ifstream entrada("texto301");
	char * cad;
	while(!entrada.eof()&&entrada>>cad){
				  Cadenas x(cad);	
		         }
}
		char * Cadenas::ContadorLetras(char * cad){
			
		}
		char * Cadenas::ContadorEspacios (char * cad){
			
		}
		char * Cadenas::ContadorMinus(char * cad){
			
		}
		char * Cadenas::ContadorMayus(char * cad){
			
		}
		char * Cadenas::ContadorCadena(char * cad){
			
		}
		void Cadenas::Salida(){
			
		}
	
