/*6.Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es la 
sucesi�n de n�meros: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada n�mero se calcula sumando 
los dos anteriores a �l.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int n, x=0, y =1, z = 0;
	
	cout<<"Ingrese tama�o de elementos: ";
	cin>>n;
	
	cout<<0<<" "<<1<<" ";
	for ( int i = 0; i<n-2 ; i++){
		z = x + y;
		cout<<z<<" ";
		x = y;
		y = z;
	}
	return 0;
}

