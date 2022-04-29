/*8.Escribir un programa que genere la tabla de multiplicar de un número introducido por 
	el teclado.*/	
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cout<<"Digite numero: ";
	cin>>n;
	
	for ( int i = 1; i<13 ; i++){
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
	}
	return 0;
}

