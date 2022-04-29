/*4.Escriba un código que solicite ingresar dos números x y y, tal que x < y. Muestre 
todos los números primos que se encuentren entre el rango de valores, de no 
encontrarse, mostrar el primo más cercano a x o y.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x, y;
	cout<<"Digite 'x' e 'y' donde 'x' debe ser menor a 'y': "<<endl;
	cout<<"Digite valor de 'x': ";
	cin>>x;
	cout<<"Digite valor de 'y': ";
	cin>>y;
	
	while ( x>y ){
		cout<<"INGRESE CORRECTAMENTE !"<<endl;
		cout<<"Digite valor de 'x': ";
		cin>>x;
		cout<<"Digite valor de 'y': ";
		cin>>y;
	}
	int cond=0;
	bool band = false;
	cout<<"Mostrando valor primos de "<<x<<"-"<<y<<":"<<endl;
	for ( int i=x+1; i<=y; i++){
		int a=0;
		for ( int j=1 ; j<y ; j++){
			if ( i%j == 0 ){
				a++;
			}
		}
		if ( a == 2 ){
			cout<<i<<endl;
			cond++;
		}
		if ( cond == 0 ){
			band = true;
		}
		
	}
	if ( band = true ){
		cout<<"No se encontro ningun valor impar en dicho intervalo."<<endl;
	}
	
	
	return 0;
}

