#include <iostream>
using namespace std; 
int main(){
	int matriz[6][6], i, aux,  j;
	cout<<"Ingrese los valores de su matriz: "<<endl;
	for(i=0; i<6; i++){
		for(j=0; j<6; j++){
			cout<<"Valor de la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	cout<<"Matriz incial: "<<endl;
	for(i=0; i<6; i++){
		for(j=0; j<6; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(i=0; i<6; i++){
		for(j=0; j<6/2; j++){
			aux=matriz[i][j];
			matriz[i][j]=matriz[i][5-j];
			matriz[i][5-j]=aux;
		}
	}
	
	cout<<"Matriz reflejada: "<<endl;
	for(i=0; i<6; i++){
		for(j=0; j<6; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}
