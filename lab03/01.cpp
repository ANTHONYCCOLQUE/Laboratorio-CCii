/*1. Hacer un programa que sin usar la funci�n pow(), pero por medio de una funci�n,
calcule la potencia de un n�mero (ambos n�meros ingresados por teclado).*/
#include <iostream>
using namespace std;

int potenciaValor( int, int);

int numero, pot;
int main(int argc, char *argv[]) {
	
	cout<<"Digite un numero: ";
	cin>>numero;
	cout<<"Digite potencia: ";
	cin>>pot;
	
	cout<<"El numero "<<numero<<" a la potencia "<<pot<<" es: "<<potenciaValor(numero, pot);
	
	return 0;
}
int potenciaValor( int numero, int pot){
	int resultado = 1;
	for ( int i=0; i<pot ; i++){
		resultado *= numero;
	}
	return resultado;
	
}
