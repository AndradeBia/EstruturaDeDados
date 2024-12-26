#include <iostream>

using namespace std;

class Stack {
public:
Stack(int size) { 
this->size = size;
vetor = new int[size];
cont=0;
ttop = -1;
}

void push(int value) {
this->valor = valor;
vetor[ttop+1]=valor;
ttop++;
cont++;
}

void pop() {
vetor[ttop] = 0;
cont--;
ttop--;
}

int count() {
return cont;
}

int top() {
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

~Stack() { 
delete[] vetor;
}

private:
int ttop;
int size;
int *vetor;
int cont;
int valor;
};


int main() {
Stack v(10);
v.push(5);
v.top();
v.isEmpty();
return 0;
}
