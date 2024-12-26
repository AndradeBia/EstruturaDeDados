#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
using namespace std;

void func(int &a, int &b, int &c){
	if(&a > &b  && &b > &c)
		cout << "O a eh o maior: " << &a << endl;
	else if(&a > &b && &b< &c){
		if(&a > &c)
			cout << "O a eh o maior: " << &a << endl;
		else if(&a < &c)
			cout << "O c eh o menor: " << &c << endl;
	}
	
	if(&b > &a && &a > &c)
		cout << "O b eh o maior: " << &b << endl;
	else if(&b > &a && &a < &c){
		if(&b > &c)
			cout << "O b eh o maior: " << &b << endl;
		else if(&b < &c)
			cout << "o c eh o maior: " << &c << endl;
	}
	
	if(&c > &b && &b > &a)
		cout << "O c eh o maior: " << &c << endl;
	else if(&c > &b && &b < &a){
		if(&c > &a)
			cout << "O c eh o maior: " << &c << endl;
		else if(&c < &a)
			cout << "O a eh o maior: " << &a << endl;
	}
	
	cout << "\n" << "Os numeros sao: \n" << endl;
	cout << "a: " << &a << endl;
	cout << "\nb: " << &b << endl;
	cout << "\nc: " << &c << endl;
}


int main(){
	int a;
	int b;
	int c;
	func(a,b,c);
}
