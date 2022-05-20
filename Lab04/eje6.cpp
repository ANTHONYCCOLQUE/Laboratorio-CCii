/*6. Escribe un programa que pida nueve números enteros y los almacene en una matriz
3x3. Calcula la suma de los números de cada fila y mostrar por pantalla el número de
fila con mayor suma.*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int vec[3][3];
	for ( int i=0; i<3; i++){
		for ( int j =0 ; j<3; j++){
			cout<<"Digite numero: ";
			cin>>vec[i][j];
			}
		}
	int mayor = 0, fila;
	for ( int i=0; i<3; i++){
		int acum =0;
		for ( int j =0 ; j<3; j++){
			acum += vec[i][j];
		}
		if ( acum > mayor ){
			mayor = acum;
			fila=i;
		}
	}
	
	for ( int i=0; i<3; i++){
		for ( int j=0; j<3; j++){
			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"La fila con mayor suma es la "<<fila+1<<endl;
	return 0;
}

