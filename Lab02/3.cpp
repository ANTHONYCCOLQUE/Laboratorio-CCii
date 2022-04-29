/*3.Escribir un programa que visualice en pantalla los números múltiplos de 5 
comprendidos entre 1 y 100.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int a=5;
	for ( int i=1 ; i<101 ; i++){
		if ( (i % a) == 0 ){
			cout<<i<<endl;
		}
		
	}
	return 0;
}

