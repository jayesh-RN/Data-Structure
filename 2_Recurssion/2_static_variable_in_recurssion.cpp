#include<stdio.h>

int X = 0;

int fun(int n){

    //static int X = 0 ;

     if(n>0){
         X++;
         return fun(n-1)+X;
     }
     return 0;
}

int main(){

    int r;
    r = fun(5);
    printf("%d\n",r);
    return 0;
}