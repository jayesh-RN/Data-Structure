#include<stdio.h>
#include<iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

//void fun (struct Rectangle rect)  //call by value 
void fun (struct Rectangle *p)  // call by address
{
    p->length = 20;
    cout<<"length"<<p->length<<endl<<"breadth"<<p->breadth<<endl;
}

int main(){
    struct Rectangle r = {10,5};
    fun(&r);
    
    printf("length %d \n breadth %d \n ",r.length,r.breadth);

    return 0 ;
}