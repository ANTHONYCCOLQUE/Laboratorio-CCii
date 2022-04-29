/*10.Escribir un programa que almacene la cadena de caracteres contraseña en una
	variable, pregunte al usuario por la contraseña hasta que introduzca 
	la contraseña correcta. */
#include <iostream>
#include<string.h>
using namespace std;

int main(int argc, char *argv[]) {
	char contra1[]="anthony", contra2 [99];
	
	
	while(true){
		cout<<"Digite contrasenia para confirmar si es igual: ";
		cin.getline(contra2, 99,'\n');
		if( strcmp  (contra1, contra2 ) == 0){
			cout<<"Acerto con la contraseña"<<endl;
			break;
		
		}
		else{
				cout<<"No es la contraseña"<<endl;
			}
	}
	
	return 0;
}

