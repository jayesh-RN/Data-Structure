#include<stdio.h>
#include<iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

struct Rectangle *fun(){
    struct Rectangle *p;
    // p = new Rectangle;
    p= (struct Rectangle *)malloc(sizeof(struct Rectangle));

    p-> length = 15;
    p-> breadth = 7;

    return p;
} 

int main(){

    struct Rectangle *ptr = fun();
    cout<<"length"<<ptr->length<<endl;
    cout<<"breadth"<<ptr->breadth<<endl;

    return 0;
}