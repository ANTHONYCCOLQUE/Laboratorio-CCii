/*1.Escribir un programa donde se pueda ingresar los datos de tres personas, como el
nombre, apellido, edad y DNI y luego lo muestre por pantalla.*/
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	string nombres[3];
	string apellidos[3];
	string edad[3];
	string dni[3];
	
	
	cout << "POR FAVOR INGRESE LOS DATOS: \n";
	for(int i = 0; i < 3; i++)
	{
		cout << "\nPersona "<< i + 1 << "********:\n";
		cout << "Nombre: ";
		getline(cin,nombres[i]);
		cout << "Apellido: ";
		getline(cin,apellidos[i]);
		cout<<"Edad: ";
		getline(cin,edad[i]);
		cout<<"DNI: ";
		getline(cin,dni[i]);
	}
	for(int i = 0; i < 3; i++)
	{
		cout << "\nDatos de Persona "<< i + 1 << "********:\n";
		cout << "Nombre: "<<nombres[i]<<endl;
		cout << "Apellido: "<<apellidos[i]<<endl;
		cout<<"Edad: "<<edad[i]<<endl;
		cout<<"DNI: "<<dni[i]<<endl;
	}
	
}
