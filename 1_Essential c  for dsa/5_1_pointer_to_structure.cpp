#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

struct Rectangle2
{
    int length;
    int breadth;
};

int main(){

     struct Rectangle2 r = {10,5}; // in cpp struct is not mandatory but in c lang. it is
    
    cout<<r.length<<endl;
    printf("%d\n",r.length);

    Rectangle2 * p = &r; // in cpp

    printf("%d\n",p->length);
    cout<<p->breadth<<endl;
    
    
    return 0;
}