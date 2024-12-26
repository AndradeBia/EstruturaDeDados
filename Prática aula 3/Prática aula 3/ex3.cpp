#include <math.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

void troca(int vetor[]){
	int i = 0;
	int j = 4;
	int aux;
	
	for(i;i<=2;i++){
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
		j--;
	}
	for(i=0;i<=5;i++){
		cout << vetor[i] << endl;
	}
	

}
int main(){
	int vetor[5]={0,1,2,3,4};
	
	troca(vetor);
}
