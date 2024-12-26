#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
using namespace std;

typedef struct {
	string nome;
	string telefone;
	string email;
}Pessoa;

bool equals(Pessoa *pe1, Pessoa *pe2){
	int num = 0;  
	if( pe1->nome == pe2->nome )
		num++;
	if( pe1->telefone == pe2->telefone )
		num++;
	if( (pe1->email) == pe2->email)
		num++;
	if(num == 3)
		return true; 
	else
		return false;
}


int main(){
	Pessoa p1, p2;
	Pessoa *pe1, *pe2;
	pe1 = &p1;
	pe2 = &p2;
	
	(*pe1).nome = "Cleber";
	(*pe1).telefone = "59342832";
	(*pe1).email = "clebinho@yahoo.com";
	
	(*pe2).nome = "Cleber";
	(*pe2).telefone = "23472039";
	(*pe2).email = "clebinhogamer@gmail.com";

	if(equals(pe1,pe2))
		cout << "Sao iguais" << endl;
	else
		cout << "Sao diferentes" << endl;
		
	return 0;
}
