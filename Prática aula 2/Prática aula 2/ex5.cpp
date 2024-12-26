#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
using namespace std;

int recebe(int vetor[], int n){
	int i;
	for(i=0; i<5;i++){
		*(vetor + i) = n;
		cout << *(vetor + i) << endl;
	}
	
}
int main(){
	int vetor[5] = {};
	int n = 4;
	
	recebe(vetor,n);
	return 0;
}
