#include <iostream>
using namespace std;

int main(){
	int N, i, j;
	cout<<"Ingrese el orden del cuadrado latino: ";
	cin>>N;
	int matriz[N][N];

	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			matriz[i][j] = ((N - i + j) % N) + 1;
		}
	}

	cout<<"Cuadrado latino de orden "<<N<<":"<<endl;
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

