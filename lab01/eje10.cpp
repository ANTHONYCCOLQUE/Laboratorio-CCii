/*10.Escribir un programa que almacene la cadena de caracteres contrase�a en una
	variable, pregunte al usuario por la contrase�a hasta que introduzca 
	la contrase�a correcta. */
#include <iostream>
#include<string.h>
using namespace std;

int main(int argc, char *argv[]) {
	char contra1[]="anthony", contra2 [99];
	
	
	while(true){
		cout<<"Digite contrasenia para confirmar si es igual: ";
		cin.getline(contra2, 99,'\n');
		if( strcmp  (contra1, contra2 ) == 0){
			cout<<"Acerto con la contrase�a"<<endl;
			break;
		
		}
		else{
				cout<<"No es la contrase�a"<<endl;
			}
	}
	
	return 0;
}

