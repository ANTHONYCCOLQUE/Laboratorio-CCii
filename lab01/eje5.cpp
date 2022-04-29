/*Elabore un código que reciba como entrada una secuencia de 
	caracteres que contiene un numero flotante y retorne el número redondeado.*/
#include <iostream>
#include<math.h>
using namespace std;

int main(int argc, char *argv[]) {
	float num1;
	cout<<"Digite numero decimal: ";
	cin>>num1;
	cout<<"El numero redondeado es: "<<round(num1)<<endl;
	return 0;
}

