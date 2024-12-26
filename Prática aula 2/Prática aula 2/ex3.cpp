#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int negativos(float *vet, int n){
	int conta =0;
	for(int i=0; i<n;i++){
		if(vet[i]<0)
			conta++;
	}
	fflush(stdin);
	cout << "\nO total de numeros negativos eh " << conta << endl;
	}




int main(){
	int n;
		cout << "Digite quantos numeros deseja digitar: " << endl;
	cin >> n;	
	float vet[n];	
	for(int i = 0; i<n; i++){
		cin >> vet[i];
		}
	negativos(vet, n);

	return 0;
}
