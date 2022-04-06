#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int *p;  // it is in stack
    p=(int *)malloc(5* sizeof(int));  // it is in heap

    p[0]=54;
    p[1]=67;
    p[2]=90;
    p[3]=87;
    p[4]=4;
  

    //in cpp

    // p = new int[5];  //it is in heap 

    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }


    // delete [ ] p; // deallocating memory used in heap  in cpp 

    free(p);  // deallocating memory used in heap in c language

    return 0;
}