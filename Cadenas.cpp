#include "Cadenas.h"

	void Cadenas::setCadena(const char *cadenaX){
			strcpy(cadena,cadenaX);
					}
	char * Cadenas::getCadena()
			{
			return cadena;
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
			int espacio=0;
			int i=0;
			char c;
			int minus=0;
			while(cad[i]){
				c=cad[i];
				if(isspace(c)&&cad[i+1]!=' '){
					espacio++;
				}
				++i;
			}
			return espacio-1;
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
		
		
	int Cadenas::ContadorPalabras(const char * cad){
      int Palabras = 0;
	  int longitud=strlen (cad);
      for(int i=0;i<longitud;++i){
				if(cad[i]==' '&&cad[i+1]!=' '){
					++Palabras;
				}
			}
      return Palabras;
		}
		
		
		void Cadenas::Salida(int letras,int espacios,int mayusculas,int minusculas,int palabras,const char * cad){
			ofstream salida ("SalidaParcial.txt");
			salida<<"La cadena es: "<<cad<<endl;
			salida<<"Tiene "<<letras<<" letras"<<endl;
			salida<<"Tiene "<<espacios<<" espacios"<<endl;
			salida<<"Tiene "<<mayusculas<<" mayusculas"<<endl;
			salida<<"Tiene "<<minusculas<<" minusculas"<<endl;
			salida<<"Tiene "<<palabras<<" palabras"<<endl;
		}
	
