#include <math.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

void calcula(int n,float calc,float num,int sinal){
	if(num <= n){
		if(sinal == 0){    //0 sub
			calc = calc - (1/num);
			num++;
			sinal = 1;
			calcula(n,calc,num,sinal);	
		}
		else if(sinal == 1){  // 1 soma
			calc = calc + (1/num);
			num++;
			sinal = 0;
			calcula(n,calc,num,sinal);	
			
		}
		
	}
	else
		cout << calc << endl;
}



int main(){
	int n = 4;
	float calc = 1.0;
	float num = 2.0;
	int sinal = 0;
	calcula(n,calc,num,sinal);
}
