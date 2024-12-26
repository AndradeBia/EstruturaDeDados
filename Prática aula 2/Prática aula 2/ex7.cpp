#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
using namespace std;

soma(int a, int b){
	return a + b;
}
sub(int a,int b){
	return a - b;
}
mul(int a, int b){
	return a * b;
}
div(int a,int b){
	return a / b;
}

int Sum(int array[],int a, int b){
	int soma = 0;
	int i;
	for(i=0; i<=4;i++){
		soma = soma + array[i];
	}
	return soma;
}




void top(int array[],int a, int b){
	array[0] = soma(a,b);
	array[1] = sub(a,b);
	array[2] = mul(a,b);
	array[3] = div(a,b);
	
	cout << "A soma dos numeros do vetor eh: " << Sum(array,a,b) << endl;
}


int main(){
	int array[4];
	int a = 6;
	int b = 3;
	top(array,a, b);
	return 0;
}
