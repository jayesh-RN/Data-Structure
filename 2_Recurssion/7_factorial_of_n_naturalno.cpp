#include<stdio.h>

//factorial using recurssion
int fact(int n){

    if(n==0)
        return 1;
    return fact(n-1) * n;

}

//factorial using loop (iterative)
int Ifact(int n){
    int f =1;
    int i;
    for(i=1;i<=n;i++){
         f=f*i;
    } 
    return f;
}

int main(){

    int r;
    r=fact(5);
    printf("%d ",r);

    int r2;
    r2=fact(5);
    printf("%d ",r2);

    return 0;
}