#include<stdio.h>

//Recursion for sum of n natural number
int sum(int n){

    if(n==0)
    return 0;
    return sum(n-1)+n;

}

//for loop for sum of n natural number
int Isum(int n){
    int s =0;
    int i;
    for(i=1; i<=n;i++){
        s=s +i;
    }
    return s;
}

int main(){
    
    int r;
    r=sum(5);
    printf("%d ",r);
    
    int r2;
    r2=Isum(5);
    printf("%d ",r2);
    
    return  0;
}