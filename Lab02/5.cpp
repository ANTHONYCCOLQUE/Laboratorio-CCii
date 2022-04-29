/*5. Elabore un programa que lea n números y determine cuál es el mayor, el menor y la 
media de los números leídos.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n, v[99] , mayor=0, menor=9999;
	float acum;
	cout<<"Digite cantidad de valores a ingresar: ";
	cin>>n;
	
	for ( int i=0; i<n; i++){
		cout<<"Digite numero: ";
		cin>>v[i];
	}
	
	for ( int i=0; i<n; i++){
		if ( v[i]>mayor ){
			mayor = v[i];
		}
	}
	cout<<"\nEl mayor valor es "<<mayor<<endl;
	for ( int i=0; i<n; i++){
		if ( v[i]<menor ){
			menor = v[i];
		}
	}
	cout<<"\nEl menor valor es "<<menor<<endl;
	
	for ( int i=0; i<n; i++){
		acum += v[i];
	}
	acum = acum/n;
	cout<<"\nLa media de los numeros ingresados es "<<acum<<endl;
	return 0;
}

