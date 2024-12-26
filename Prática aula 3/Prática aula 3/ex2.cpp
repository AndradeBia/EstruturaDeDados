#include <math.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;


void leitura(string p,int i,int j, int num, int a, int b){ //i=0, j = tamanho, num = 0, a = tamanho, b = 0
    if(p[i] == p[j-1] && b <= a){
        num++;
        i++;
        j--;
        b++;
        leitura(p,i,j,num,a,b);

    }
    else 
        if(num == a+1)
            cout<< "Eh um palindrome" << endl;
        else
            cout << "Nao eh um palindrome" << endl;
}



int main(){
    string p = "tenet";
    int i = 0;
    int    j = p.length();
    int a = j;
    int num = 0;
    int b = 0;
    leitura(p,i,j,num,a,b);
    return 0;
}
