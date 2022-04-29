/*8.Escribir un programa que calcule la media de x cantidad números 
	introducidos por el teclado.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float n, num, acum=0 , media;
	cout<<"Digite cantidad de numeros: ";
	cin>>n;
	
	for ( int i=0; i<n; i++){
		cout<<"Digite numero: ";
		cin>>num;
		acum += num;
	}
	
	media = acum/n;
	cout<<"La media de los "<<n<<" numeros es "<<media<<endl;
	return 0;
}

