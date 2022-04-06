#include<stdio.h>
#include<iostream>

using namespace std;

void swap(int &x , int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int num1 = 10, num2= 15;

    swap(num1 , num2);

    printf("first number %d\n", num1);
    cout<<"Second number "<<num2<<endl;

    return 0;
}