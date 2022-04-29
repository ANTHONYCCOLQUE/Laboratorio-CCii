/*1.Sumar todos los enteros pares desde 2 hasta 100.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int acum=0;
	for ( int i=2 ; i<=100 ; i++){
		if ( i % 2 == 0 ){
			acum += i;
		}
	}
	cout<<"La suma de los enteros pares desde 2 hasta 100 es "<<acum<<endl;
	
	return 0;
}

