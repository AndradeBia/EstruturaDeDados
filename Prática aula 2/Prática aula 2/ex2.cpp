#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
using namespace std;


void calc_esfera(float r, float *area, float *volume){
	cout << "Digite o valor do raio: " << endl;
	cin >> r;

	*area = 4 * 3.14 * (r*r);
	*volume = (4/3)* 3.14 * (r*r*r);
}




int main(){
	float r;
	float area;
	float volume;
	
	calc_esfera(r,&area,&volume);
	
	cout << "O valor da area eh: " << area << endl;
	cout << "O valor do volume eh: "<< volume << endl;
	return 0;
}
