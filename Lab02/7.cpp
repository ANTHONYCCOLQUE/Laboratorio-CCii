//7.Calcula el promedio de 3 notas para n estudiantes.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	//float nota;
	cout<<"Ingrese numero de estudiantes: ";
	cin>>n;
	
	for ( int i=0; i<n; i++){
		float nota, sumatoria=0;
		int acum=0;
		for ( int j=0; j<3; j++){
			cout<<"Digite nota "<<i+1<<"er alumno: ";
			cin>>nota;
			sumatoria += nota;
			acum++;
			if ( acum == 3 ){
				cout<<"El promedio de notas del alumno es "<<sumatoria/3<<endl;
			}
			
			
		}
		
	}
	return 0;
}

