#include <math.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

void imprime(int vetor[],int tam){
	for(int i=0;i<tam;i++){
		cout << vetor[i] << "   ";
	}
	cout << endl;
}


void sort(int vetor[],int tam){
	int i;
	int aux =0;
	for(i=0;i<(tam-1); i++){
		
		if(vetor[i] > vetor[i+1]){
			aux = vetor[i+1];
			vetor[i+1] = vetor[i];
			vetor[i] = aux;
		}
		
		if(vetor[tam-2] > vetor[tam - 1]){
			aux = vetor[tam-1];
			vetor[tam-1] = vetor[tam-2];
			vetor[tam-2] = aux;
		}
	}

	imprime(vetor,tam);
}


int main(){
	int vetor[] = {5,3,8,4,6};
	int tam = sizeof(vetor)/sizeof(int);
	sort(vetor,tam);
	return 0;
}
