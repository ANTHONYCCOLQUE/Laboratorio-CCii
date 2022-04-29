/*7.Elabore un algoritmo que lea por teclado dos números enteros y 
	determine si uno es divisor del otro*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2;
	cout<<"Digite primer numero: ";
	cin>>num1;
	cout<<"Digite segundo numero: ";
	cin>>num2;
	
	if ( (num1 % num2) == 0){
		cout<<"El numero "<<num2<<" es dividor de "<<num1<<endl;
	}
	else {
		cout<<"El numero "<<num2<<" no es divisor de "<<num1<<endl;
	}
	return 0;
}

