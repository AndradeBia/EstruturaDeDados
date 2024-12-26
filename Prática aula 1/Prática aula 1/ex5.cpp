#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int num;
	int soma;
	soma = 0;
	while(num<=100){
		if(num%2 == 0){
		   soma = soma + num;
		}
		num++;
	}
	printf("%d",soma);
	return 0;
}
