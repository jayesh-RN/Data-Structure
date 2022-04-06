#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int A[5]={2,3,4,5,67};

    int *p;
    p=A;   //& not required here....

    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }


    return 0;
}