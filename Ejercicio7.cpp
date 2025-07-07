//Rotación de una Imagen Representada por una Matriz: Escriba un programa que rote una matriz
//de 4x4, representando una imagen, 90 grados en sentido horario.

#include <iostream>
using namespace std;

int main(){
    int matriz[4][4], resultado[4][4], i, j;

    cout << "Ingrese los valores de la matriz:" << endl;
    for(i=0; i<4 ; i++){
        for(j=0; j<4 ; j++){
            cout<<"Valor ["<< i <<"]["<< j <<"]: ";
            cin>>matriz[i][j];
        }
    }
    
	cout<<"Matriz incial: "<<endl;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            resultado[j][3-i] = matriz[i][j];
        }
    }

    cout << "Matriz rotada 90 grados en sentido horario:"<<endl;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

