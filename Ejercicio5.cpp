#include <iostream>
using namespace std;
int main(){
	int matriz[4][4], i, min, max,  j;
	cout<<"Ingrese los valores de su matriz: "<<endl;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			cout<<"Valor de la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	cout<<"Buscando el maximo y el minimo..."<<endl;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(i==0 and j==0){
				max=matriz[0][0];
				min=matriz[0][0];
			}
			if(max<matriz[i][j]){
				max=matriz[i][j];
			}
			if(min>matriz[i][j]){
				min=matriz[i][j];
			}
		}
	}
	cout<<"El valor maximo es: "<<max<<endl;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(max==matriz[i][j]){
				cout<<"Se encuentra en la posicion o posiciones: ["<<i<<"]["<<j<<"]"<<endl;
			}
		}	
	}
	cout<<endl;
	cout<<"El valor minimo es: "<<min<<endl;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(min==matriz[i][j]){
				cout<<"Se encuentra en la posicion o posiciones: ["<<i<<"]["<<j<<"]"<<endl;
			}
		
		}
		
	}
	return 0;
}
