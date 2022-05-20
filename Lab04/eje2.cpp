/*2. Hacer un array unidimensional que acepte ocho números enteros. Luego le
pregunte al usuario que ingrese un número a buscar, implementar una función que
busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso
contrario, retornar falso.*/
#include <iostream>
using namespace std;

const int tam = 8;

bool buscarNum(int v[], int);
	
int main(int argc, char *argv[]){
	
	int vec[tam], numero,valor;
	
	cout<<"Digite 8 numeros: "<<endl;
	for(int i = 0; i < tam; i++){
		cin >> vec[i];
	}
	cout << "Digite numero a buscar en el arreglo: ";
	cin >> numero;
	valor = buscarNum(vec,numero);
	if(valor){ 
		cout << "El numero "<<numero<<" se encuentra en el arreglo."; 
	}
	else{ 
		cout<<"El numero "<<numero<<" no se encuntra en el arreglo"; 
	}
	return 0;
}
	
bool buscarNum(int v[],int num){
	for(int i = 0; i < tam; i++){
		if(num == v[i]){ 
			return true; 
		}
	}
	return false;
}
	
	
