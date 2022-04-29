/*10.Escribir un programa que pida al usuario una palabra y luego muestre por pantalla 
una a una las letras de la palabra introducida empezando por la última.*/
/*
#include <iostream>
#include<string.h>
using namespace std;

int main(int argc, char *argv[]) {
	char palabra[99];
	int tam;
	cout<<"Digite palabra:";
	cin.getline(palabra,99,'\n');
	
	tam = strlen(palabra);
	
	
	for ( int i=tam; i>= 0; i-- ){
		cout<<palabra[i];
	}
	
	return 0;
}
*/

#include <iostream>
#include<string.h>
using namespace std;

int main(int argc, char *argv[]) {
	string palabra;
	int tam;
	cout<<"Digite palabra:";
	cin>>palabra;
	
	tam = palabra.length();
	
	
	for ( int i=tam; i>= 0; i-- ){
		cout<<palabra[i];
	}
	
	return 0;
}
