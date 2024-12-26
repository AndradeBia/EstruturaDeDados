#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
using namespace std;

bool contains(const char* str, const char* str2){
	int i = 0;
	int  j = 0;

	while(*(str + i) != '\0'){
		if(*(str + i) == *(str2 + j)){
			i++;
			j++;
		}
		else{
			i++;
			j = 0;
		}
		
		if(*(str2 + j) == '\0'){
			return true;

		}
	}
		return false;
	
}



int main(){
	const char *str = "Opa eae tudo bom";
	const char *str2 = "eae";
	
	if(contains(str, str2))
		cout << "A str2 esta contida dentro de str" << endl;
	else
		cout << "A str2 nao esta contida dentro de str" << endl;
	
	
	return 0;
}
