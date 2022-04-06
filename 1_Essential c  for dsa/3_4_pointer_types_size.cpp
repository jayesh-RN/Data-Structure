#include<stdio.h>
#include<iostream>

using namespace std;

struct Rectangle1
{
    int length;
    int breadth;
};

int main(){

    int *p1;
    char *p2;
    float *p3;
    double *p4;

    struct Rectangle1 *p5;

    cout<<sizeof(p1)<<endl;
    printf("%d\n", sizeof(p2));
    cout<<sizeof(p3)<<endl;
    printf("%d\n", sizeof(p4));
    printf("%d\n", sizeof(p5));

    // every type of pointer take same size; --> size of pointer is independent
    
    return 0;

}