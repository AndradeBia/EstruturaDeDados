#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int n;
	int i;
	int soma;
	soma = 1;
	printf("Digite um numero: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		soma = soma * i;
	}
	printf("O fatorial eh %d",soma);
	return 0;
}
