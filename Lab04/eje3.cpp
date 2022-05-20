/*3.Hacer un array 5x3 que acepte números enteros ingresados por el usuario. Al final,
	debe mostrar la suma de todos los números que estén en una fila par.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int vec[5][3];
	for ( int i=1 ; i<=5 ; i++){
		for ( int j=1; j<=3; j++){
			cout<<"Digite numero: ";
			cin>>vec[i][j];
		}
	}
	cout<<"MOSTRANDO MATRIZ. "<<endl;
	for ( int i=1 ; i<=5 ; i++){
		for ( int j=1; j<=3; j++){
			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}
	int sum=0;
	for ( int i=1 ; i<=5 ; i++){
		
		for ( int j=1; j<=3; j++){
			if ( i%2 == 0 ){
				sum += vec[i][j];
			}
		}
	}
	cout<<"LA SUMA DE LAS FILAS PARES ES: "<<sum<<endl;
	return 0;
}

