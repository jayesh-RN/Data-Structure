#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int a = 10;
    int * p ;
    p = &a;

    printf("%d\n",a);
    cout<<a<<endl;

    printf("using pointers %d\n", *p);
    cout<<*p<<endl;//derefrencing

    printf("%d\n %d\n" , p , &a );//address

    return 0;
}