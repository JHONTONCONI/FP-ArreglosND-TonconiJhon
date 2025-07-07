#include <iostream>
using namespace std;

int main(){
	int matriz[5][5], i, j;
	cout<<"Ingrese los valores de su matriz:"<<endl;
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			cout<<"Valor de la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	
	int inicioFila=0, finFila=4, inicioCol=0, finCol=4;
	cout<<"Recorrido en espiral:"<<endl;
	
	while(inicioFila<=finFila and inicioCol<=finCol){
		
		for(j=inicioCol; j<=finCol; j++)
			cout<<matriz[inicioFila][j]<<" ";
		inicioFila++;
		
		for(i=inicioFila; i<=finFila; i++)
			cout<<matriz[i][finCol]<<" ";
		finCol--;
		
		if(inicioFila<=finFila){
			for(j=finCol; j>=inicioCol; j--)
				cout<<matriz[finFila][j]<<" ";
			finFila--;
		}
		
		if(inicioCol<=finCol){
			for(i=finFila; i>=inicioFila; i--)
				cout<<matriz[i][inicioCol]<<" ";
			inicioCol++;
		}
		
	}
	cout<<endl;
	return 0;
}
