#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

    int length =  0 , breadth = 0;
    printf("Enter length and breadth ");
    cin>>length>>breadth;
    // scanf("%d %d " ,&length , &breadth);

    printf("%d\n %d\n" , length , breadth);

    int area = length * breadth;
    int peri = 2*(length +breadth);

    printf("Area = %d\n perimeter = %d\n",area,peri);

    return 0;
}