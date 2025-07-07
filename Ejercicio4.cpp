//Intercambio de Filas: Desarrolle un programa que intercambie dos filas específicas de una matriz
//de 4x4 y muestre la matriz resultante.
#include <iostream>
using namespace std;
int main(){
	int matriz[4][4], i, cambio1, cambio2,  j;
	
	cout<<"Ingrese los valores de su matriz: "<<endl;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			cout<<"Valor de la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	int matrizguardar[4][4];
	
	for(i=0; i<4; i++){
    	for(j=0; j<4; j++){
       	 	matrizguardar[i][j] = matriz[i][j];
    	}
	}

	cout<<"Ingrese las dos filas a intercambiar"<<endl;
	cin>>cambio1;
	cin>>cambio2;
	
	
    for(j=0; j<4; j++){
        int aux = matriz[cambio1][j];
        matriz[cambio1][j] = matriz[cambio2][j];
        matriz[cambio2][j] = aux;
    }
    
    
	cout<<"Resultado del cambio"<<endl;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			cout<<matrizguardar[i][j]<<"\t";
		}
		if(i==1){
			cout<<" --> ";
		}else{
			cout<<"     ";
		}
		
		for(j=0; j<4; j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}

