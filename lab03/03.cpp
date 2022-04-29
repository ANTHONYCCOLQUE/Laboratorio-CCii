/*3.Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de
una persona y por medio de una función calcule su edad en años, meses y días.*/
#include <iostream>
using namespace std;

void calcularEdad( int anioActual , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac);


int main(int argc, char *argv[]) {

	int anioActual;  
	int mesAct; 
	int fechAct; 

	int anioNac; 
	int mesNac; 
	int fechNac; 
	
	cout<<"Digite Año Actual: ";cin>> anioActual;
	cout<<"Digite Mes Actual: "; cin>>mesAct;
	cout<<"Digite Fecha Actual: ";cin>>fechAct;
	
	cout<<"\nDigite Año Nacimiento: ";cin>>anioNac;	
	cout<<"IDigite Mes de Nacimiento: ";cin>>mesNac;	
	cout<<"Digite Fecha de Nacimiento: ";cin>>fechNac;
	
	calcularEdad(anioActual, mesAct,fechAct,anioNac,mesNac,fechNac);
	
	return 0;
	
}

void calcularEdad( int anioActual , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac){
	int res , respMes;
	
	if ( fechAct < fechNac  ){   
		fechAct =fechAct + 30; 
		mesAct =mesAct - 1; 
		res =fechAct -fechNac; 
	}
	
	else {
		res =  fechAct - fechNac; 
	}
	
	if( mesAct <mesNac ){   
		mesAct =mesAct + 12; 
		anioActual=anioActual - 1 ; 
		respMes =mesAct -mesNac; 
		
	}
	
	else  {  
	   respMes =mesAct -mesNac; 
	}
	cout<<"\nSus Datos:\n";
	cout<<"Su edad: " <<anioActual -anioNac << endl; 	
	cout<<"Mes: " << respMes <<endl; 
	cout<<"Dia: " <<res <<endl;
	
}
