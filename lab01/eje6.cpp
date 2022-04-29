/*6.Elabore un código que solicite un numero entre 100 < x < 999 y 
muestre el resultado en binario.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, binario[99];
	do {
		cout<<"Digite numero entre 100 < x < 999: ";
		cin>>num1;
	} while((num1<=100) || ( num1>=999 ));
	
	int i;
	for (  i=0; i<99;  i++) { 
		binario[i]=num1%2; 
		num1=num1/2; 
		
		if(num1==0) 
			break; 
	} 
	
	for(int j=i;j>=0;j--) { 
		cout<<binario[j]; 
	} 
	
	
	
	
	return 0;
}

