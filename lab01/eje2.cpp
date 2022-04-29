/*2Escriba un código que solicite el primer nombre de una persona, el apellido paterno
y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la
primera letra del nombre, el apellido paterno completo, y la primera letra del apellido
materno. (se agrega el dominio de la universidad al final).*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char nombre[99],ap_Paterno[99],ap_Materno[99];
	
	cout<<"Primer nombre = ";
	cin>>nombre;
	cout<<"Apellido paterno = ";
	cin>>ap_Paterno;
	cout<<"Apellido materno = ";
	cin>>ap_Materno;
	
	cout<<"Correo generado :"<<nombre[0]<<ap_Paterno<<ap_Materno[0]<<"@unsa.edu.pe"<<endl;
	

	return 0;
}

