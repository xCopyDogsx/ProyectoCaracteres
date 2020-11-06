#include "Cadenas.h"

	void Cadenas::setCadena(const char *cadenaX){
			strcpy(cadena,cadenaX);
					}
	char * Cadenas::getCadena()
			{
			return cadena;
					}
   Cadenas::Cadenas(char  cadw[500]){
		setCadena(cadw);
	}
	Cadenas::Cadenas(){
	
	}
void Cadenas::Entrada(){
	ifstream t("texto301.txt");
    string str((istreambuf_iterator<char>(t)),istreambuf_iterator<char>());
	const char *cstr = str.c_str();		
	setCadena(cstr);
}

		int Cadenas::ContadorLetras(const char * cad){
			int longitud = strlen (cad);
			int letras=0;
			for(int i=0;i<longitud;++i){
				if(cad[i]!=' '){
					++letras;
				}
			}
			return letras;
		}
		
		int Cadenas::ContadorEspacios (const char * cad){
			int longitud = strlen (cad);
			int espacio=0;
			for(int i=0;i<longitud;++i){
				if(cad[i]==' '){
					++espacio;
				}
			}
			return espacio;
		}
		int Cadenas::ContadorMinus(const char * cad){
			int i=0;
			char c;
			int minus=0;
			while(cad[i]){
				c=cad[i];
				if(islower(c)){
					minus++;
				}
				++i;
			}
		
			return minus;
		}
		int Cadenas::ContadorMayus(const char * cad){
			int i=0;
			char c;
			int mayus=0;
			while(cad[i]){
				c=cad[i];
				if(isupper(c)){
					++mayus;
				}
				++i;
			}
			return mayus;
		}
		int Cadenas::ContadorCadena(const char * cad){
			
		}
		void Cadenas::Salida(){
			
		}
	
