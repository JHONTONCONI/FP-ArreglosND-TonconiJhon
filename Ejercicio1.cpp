#include <iostream>
using namespace std; 
int main(){
	int matrizproducto[3][3], matriz1[3][3], matriz2[3][3];
	cout<<"INGRESE SU PRIMERA MATRIZ"<<endl;
	cout<<endl;
	for( int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<"Matriz de orden ["<<i<<"]["<<j<<"]: ";
			cin>>matriz1[i][j];
		}	
	}
	cout<<endl;
	cout<<"INGRESE SU SEGUNDA MATRIZ"<<endl;
	cout<<endl;
	for( int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<"Matriz de orden ["<<i<<"]["<<j<<"]: ";
			cin>>matriz2[i][j];
		}	
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			matrizproducto[i][j]=0;
			for(int k=0; k<3; k++){
			matrizproducto[i][j] += matriz1[i][k] * matriz2[k][j];
			}
		}
	}
	
	
	cout<<endl;
	cout<<"El producto de matrices es: "<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matriz1[i][j];
			cout<<"\t";
		}
		if (i == 1)
            cout << "X  ";
        else
            cout << "   ";
		
		for(int j=0; j<3; j++){
			cout<<matriz2[i][j];
			cout<<"\t";
		}
		if (i == 1)
            cout << "=  ";
        else
            cout << "   ";
		
		for(int j=0; j<3; j++){
			cout<<matrizproducto[i][j];
			cout<<"\t";
		}
		cout<<endl;
	}
	return 0;
	
}
