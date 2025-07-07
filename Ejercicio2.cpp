#include <iostream>
using namespace std;
int main(){
	int matriz[3][3], i, buscar, j;
	cout<<"Ingrese los valores de su matriz: "<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"Valor de la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	cout<<"Ingrese el valor a buscar: ";
	cin>>buscar;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(matriz[i][j]==buscar){
			cout<<"El valor "<<buscar<<" se encuentra en: "<<endl;
			cout<<"Fila: "<<i<<",   Columna: "<<j<<endl;
			}
		}
	}
	return 0;
}
