#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	float a;
	float b;
	float c;
	
	printf("Digite o primeiro valor: ");
	scanf("%f",&a);
	printf("Digite o segundo valor: ");
	scanf("%f",&b);
	printf("Digite o terceiro valor: ");
	scanf("%f",&c);
	
	printf("Os valores sao:  %f, %f, %f \n",a,b,c);
	if(a > b && b>c ){ 
		printf("O numero %f eh o maior",a);
	}
	else if(a > b && b < c){
		if(a>c){
			printf("O numero %f eh o maior",a);
		}
		else if(a<c){
			printf("O numero %f eh o maior",c);
		}
	}
	
	if( a < b && b > c){
		printf("O numero %f eh o maior",b);
	}
	else if(a < b && b < c){
		printf("O numero %f eh o maior", c);
	}
	
	if( b > a && a > c){
		printf("O numero %f eh o maior",b);
	}
	else if( b > a && a < c){
		if(b>c){
			printf("O numero %f eh o maior",b);
		}
		else if(b<c){
			printf("O numero %f eh o maior",c);
		}
	}
	
	return 0;
}
