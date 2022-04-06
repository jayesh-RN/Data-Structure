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

    Rectangle2 * p ;

    // p = new Rectangle2; //in cpp 
    p=(struct Rectangle2 *)malloc(sizeof(struct Rectangle2)); // in c lang

    p->length  = 14;
    p->breadth = 7;

    printf("%d\n",p->length);
    cout<<p->breadth<<endl;
    
    
    return 0;
}