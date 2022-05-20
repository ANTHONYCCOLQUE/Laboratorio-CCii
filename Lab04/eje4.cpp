/*4.Implementar un programa que rellene un array con los números primos
comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int v[99], a=0;
	for ( int i=1; i<100; i++){
		int cont = 0;
		for ( int j =1 ; j<100; j++){
			if ( i % j == 0 ){
				cont++;
			}
		}
		if ( cont == 2 ){
			v[a] = i;
			a++;
			
		}
	}
	cout<<"LOS NUMEROS PRIMOS."<<endl;
	for ( int i=0 ; i<a; i++ ){
		cout<<v[i]<<" ";
	}
	cout<<"\nFORMA ASCENDENTE. "<<endl;
	for ( int i=a-1 ; i>=0; i-- ){
		cout<<v[i]<<" ";
	}
	
	return 0;
}

