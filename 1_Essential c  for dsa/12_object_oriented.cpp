#include<stdio.h>
#include<iostream>

using namespace std;

class Rectangle{
public:
    int length;
    int breadth;


void initialise( int l, int b ){
    length = l;
    breadth = b;
}

int area1(){
    return length * breadth;
}

int perimeter(){
    int p;
    p =2*(length + breadth);
    return p;
}
};


int main(){

    Rectangle r ;

    int l,b;
    printf("Enter length and breadth ");
    cin>>l>>b;
    // scanf("%d %d " ,&length , &breadth);

    r.initialise( l , b);

    printf("%d\n %d\n" , l, b);

    int area = r.area1();
    int peri = r.perimeter();

    printf("Area = %d\n perimeter = %d\n",area,peri);

    return 0;
}