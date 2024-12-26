#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int nota1;
	int nota2;
	int nota3;
	int media;
	
	printf("Digite a 1 nota: ");
	scanf("%d", &nota1);
	printf("\nDigite a nota 2: ");
	scanf("%d", &nota2);
	printf("\nDigite a nota 3: ");
	scanf("%d", &nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	if(media < 6){
		printf("\nReprovou\n");
		printf("%d",media);
	}
	else if( media >= 6 ){
		printf("\nAprovado \n");
		printf("%d",media);
	}
	return 0;
}
