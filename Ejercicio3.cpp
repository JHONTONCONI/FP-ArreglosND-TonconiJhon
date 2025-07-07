//Suma de Diagonales: Desarrolle un programa que sume los elementos de las dos diagonales de una
//matriz de 4x4 y muestre el resultado.
#include <iostream>
using namespace std;
int main(){
	int matriz[4][4], i, sumadiagonal1=0, sumadiagonal2=0,  j;
	
	cout<<"Ingrese los valores de su matriz: "<<endl;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			cout<<"Valor de la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(i==j){
				sumadiagonal1+=matriz[i][j];
			}
			
		}
		sumadiagonal2+=matriz[i][3-i];
	}
	cout<<"LA SUMA DE LOS ELEMENTOS DE LA DIAGONAL PRINCIPAL ES: "<<sumadiagonal1<<endl;
	cout<<"LA SUMA DE LOS ELEMENTOS DE LA DIAGONAL SECUNDARIA ES: "<<sumadiagonal2<<endl;
	int sumatotal=sumadiagonal1+sumadiagonal2;
	cout<<"LA SUMA TOTAL DE LOS ELEMENTOS DE LAS DOS DIAGONALES ES: "<<sumatotal<<endl;

}



