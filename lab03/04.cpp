/*4. Hacer un programa que desarrolle una función, que genere en pantalla el listado de
números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado).*/
#include <iostream>
using namespace std;

void pedirDatos();
void primos( int );

int x;
int main(int argc, char *argv[]) {
	
	pedirDatos();
	cout<<"Los numeros primos de 1 - "<<x<<" ."<<endl;
	primos( x );
	
	return 0;
}

void pedirDatos(){
	cout<<"Digite numero maximo: ";
	cin>>x;
}

void primos( int x ){
	for ( int i=1; i<x; i++){
		int cont = 0;
		for ( int j=1 ; j<x; j++){
			if ( i % j == 0 ){
				cont ++;
			}
		}
		if ( cont == 2 ){
			cout<<i<<" ";
		}
	}
}
