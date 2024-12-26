#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 5 && idade <= 7){
		printf("\n Infantil A");
	}
	else if(idade >= 8 && idade <= 10){
		printf("\n Infantil B");
	}
	else if(idade >= 11 && idade <= 13){
		printf("\n Juvenil A");
	}
	else if(idade >= 14 && idade <= 17){
		printf("\n Juvenil B");
	}
	else if(idade >= 18){
		printf("\n Adultos");
	}
	
  return 0;
}
