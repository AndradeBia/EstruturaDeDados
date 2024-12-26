#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){

int numero;

printf("Digite um numero: ");
scanf("%d",&numero);

if(numero%2 == 0){
	printf("O numero eh par\n");
}
else if(numero%2 != 0){
	printf("O numero eh impar\n");
}

if(numero > 0 ){
	printf("O numero eh positivo\n");
}
else if(numero < 0){
	printf("O numero eh negativo\n");
}
return 0;

}
