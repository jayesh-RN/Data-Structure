#include<stdio.h>
#include<iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialise(struct Rectangle *r , int l, int b ){
    r->length = l;
    r-> breadth = b;
}

int area1(Rectangle r){
    return r.length *r.breadth;
}

int perimeter(Rectangle r){
    int p;
    p =2*(r.length + r.breadth);
    return p;
}

int main(){

    Rectangle r ={0,0};

    int l,b;
    printf("Enter length and breadth ");
    cin>>l>>b;
    // scanf("%d %d " ,&length , &breadth);

    initialise(&r , l , b);

    printf("%d\n %d\n" , l, b);

    int area = area1(r);
    int peri = perimeter(r);

    printf("Area = %d\n perimeter = %d\n",area,peri);

    return 0;
}