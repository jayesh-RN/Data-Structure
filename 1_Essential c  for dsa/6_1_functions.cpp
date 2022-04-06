#include<stdio.h>
#include<iostream>

using namespace std;

//if we do not want to return any value take void in place of int
//if we want return in int take return c

int add(int a , int b){  // call by value
    int c;
    c = a + b;
    return c;
}

int main(){
    int num1 = 10;
    int num2 = 234;
    int sum;

    sum = add(num1 , num2);

    printf("Sum is %d",sum);

    return 0;
}