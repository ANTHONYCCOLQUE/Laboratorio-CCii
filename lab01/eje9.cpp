/*9Escribir un programa que lea 10 datos desde el teclado y sume sólo 
	aquellos que sean negativos*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int n, num, acum=0;
	cout<<"Digite cantidad de numeros: ";
	cin>>n;
	
	for ( int i=0; i<n; i++){
		cout<<"Digite numero: ";
		cin>>num;
		if ( num <= 0 ){
			acum += num; ;
		}
	}
	cout<<"La suma de los numero negativos es "<<acum<<endl;
	
	return 0;
}

