#include<stdio.h>

double e(int x , int n){

    double s=1;
    int i;
    double numerator = 1;
    double denominator = 1;

    for(i=1;i<=n;i++){
        numerator*=x;
        denominator*=i;
        s+=numerator/denominator; 
    }
    return s;
}

int main(){

    printf("%lf \n",e(9,10));

    return 0;
}