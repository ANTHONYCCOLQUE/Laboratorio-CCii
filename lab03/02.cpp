/*2. Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto. Para
realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto recibe el
año leído por teclado, comprueba si es o no bisiesto.*/
#include <iostream>
using namespace std;

void bisiesto( int );

int main(int argc, char *argv[]) {
	
	int anio;
	cout<<"Digite anio: ";
	cin>>anio;
	
	bisiesto( anio );
	
	return 0;
}
void bisiesto( int anio ){
	if (  (anio%4 == 0) &&  (anio%100 != 0)  ||  (anio %400 == 0) ){
		cout<<"El anio es bisiesto. "<<endl;
	}
	else {
		cout<<"El anio no es bisiesto."<<endl;
	}
}

