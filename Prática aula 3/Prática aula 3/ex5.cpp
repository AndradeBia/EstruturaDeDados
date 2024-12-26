#include <math.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int calcula(int n,int num,int res,int aux, int x){
    if(num<n){
        if(num<2){
            res = 2*x + aux; //aux valendo 0, primeira conta
            num++;
            calcula(n, num, res, aux, x);
        }
        aux = x;
        x = res;    //aux vai receber o valor da resposta anterior
        res = 2*x + aux;
        num++;
        calcula(n,num,res,aux,x);
    }
    else
        return res;

}

int main(){
    int x = 1;
    int n = 4;
    int num = 1;
    int res = 1;
    int aux = 0;
    cout << calcula(n,num,res,aux,x) << endl;
    return 0;
}
