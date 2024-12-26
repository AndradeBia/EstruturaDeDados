#include <iostream>

using namespace std;

class Queue {
public:
Queue(int size) { 
this->size = size;
vetor = new int[size];
j=0;
cont=0;
ttop = -1;
}

void push(int valor) {
this->valor = valor;
	if(ttop=size && j!=0){
		vetor[j]=valor;
	}
	else{ 
		vetor[ttop]=valor;
		ttop++;
		cont++;
	}
}

void pop() {
vetor[ttop] = 0;
j++;
cont--;
if(cont==0){
	j=0;
}
}

int count() {
return cont;
}

int front() {
return vetor[ttop];
}

bool isFull() {
return ttop==size;
}

bool isEmpty() {
return ttop==-1;
}

void print() {
for(int i=0;i<=ttop;i++){
cout << vetor[i] << endl;
}
}

~Queue() { 
delete[] vetor;
}

private:
int j;
int size;
int cont;
int ttop;
int valor;
int *vetor;
};


int main() {
Queue v(3);
v.push(1);
v.push(2);
v.pop();
return 0;
}
