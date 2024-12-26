#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int num;
    int i;
    int res;
    int cont=0;
    int mem;
    for(i=0;i<=100;i++){
        if(i==0){
            printf("0 1 ");
            mem = 0;
            num = 1;
        }
        if(cont==20){
            printf("\n");
        }
        res=mem+num;
        printf("%d ",res);
        mem = num;
        num = res;
        cont++;
    }
        return 0;
}


