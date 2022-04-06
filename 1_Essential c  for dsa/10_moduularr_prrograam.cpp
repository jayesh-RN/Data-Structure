#include<stdio.h>
#include<iostream>

using namespace std;

int area1(int length , int breadth){
    return length * breadth;
}

int perimeter(int length , int breadth ){
    int p;
    p =2*(length + breadth);
    return p;
}

int main(){

    int length =  0 , breadth = 0;
    printf("Enter length and breadth ");
    cin>>length>>breadth;
    // scanf("%d %d " ,&length , &breadth);

    printf("%d\n %d\n" , length , breadth);

    int area = area1(length , breadth);
    int peri = perimeter(length , breadth);

    printf("Area = %d\n perimeter = %d\n",area,peri);

    return 0;
}