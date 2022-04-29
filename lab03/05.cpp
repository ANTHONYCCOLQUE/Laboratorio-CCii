/*5. Desarrollar un programa, utilizando funciones con un tipo de retorno, con las
siguientes opciones:
a. Introducir un valor x entero comprendido entre 0 y 100.
b. Validar que sea un valor par.
c. Sumar todos los números impares desde el 0 hasta el valor de x.*/
#include <iostream>
using namespace std;

void pedirDatos();
void validarPar(int);
int sumaImpares(int);

int x;
int main(int argc, char *argv[]) {
	
	pedirDatos();
	validarPar(x);
	cout<<"La suma de los numeros impares 1 - "<<x<<" es: "<<sumaImpares(x);
	return 0;
}

void pedirDatos(){
	cout<<"Digite un valor entre 1 - 100: ";
	cin>>x;
	
	while ( x < 1 || x >100 ){
		cout<<"DATO INCORRECTO: "<<endl;
		cout<<"Digite un valor entre 1 - 100: ";
		cin>>x;
	}
}

void validarPar ( int x ){
	if ( x % 2 == 0 ){
		cout<<"CORRECTO. El numero "<<x<<" es par."<<endl;
	}
	
		while (x % 2 != 0){
			cout<<"POR FAVOR. Que sea un valor par: ";
			cin>>x;
			if ( x % 2 == 0 ){
				cout<<"CORRECTO. El numero "<<x<<" es par."<<endl;
				break;
			}
		 
	}
	
}

int sumaImpares( int x ){
	int acum=0;
	for ( int i=0; i<=x ; i++){
		if ( i % 2 != 0 ){
			acum += i;
		}
	}
	return acum;
}
