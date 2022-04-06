#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
    char X;
} ; //r1 ; another way of declaring a variable 

// struct Rectangle r1,r2,r3;
//another type of variable declaration 

int main(){
    printf("hello world");

    struct Rectangle r1 = {10,5};

    // struct Rectangle r1

    printf("%lu\n",sizeof(r1));

    r1.breadth = 15;
    r1.length = 45;

    printf("%d\n",r1.length);
    printf("%d\n",r1.breadth);//accessing a data

    return 0;
}
