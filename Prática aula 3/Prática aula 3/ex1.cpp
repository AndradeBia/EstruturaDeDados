#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;

void somaf(int vetor[],int n,int soma){
	if(n > 0){
		n--;
		soma = soma + vetor[n];
   		somaf(vetor,n,soma);
   		
   }
   else
     cout << soma << endl;
}



int main(){
	int vetor[4]={1,2,3,4};
	int n = 4;
	int soma=0;
	somaf(vetor,n,soma);
	return 0;
}
