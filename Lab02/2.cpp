//2.Calcule los primeros 50 números primos y muestre el resultado en pantalla.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	cout<<"LOS NUMEROS IMPARES DEL 1-50 SON:"<<endl;
	for ( int i=1 ; i<=50 ; i++){
		int a=0;
		for ( int j=1 ; j<=50 ; j++){
			if ( i%j == 0 ){
				a++;
			}
		}
		if ( a == 2 ){
			cout<<i<<endl;
		}
	}
	return 0;
}

