#include<stdio.h>
#include<iostream>

using namespace std;

void fun(int A[] , int n){
    // cout<<sizeof(A) / sizeof(int)<<endl; 

    for(int i = 0; i<5 ; i++){
        cout<<A[i]<<endl;
    }

    
    A[0]= 15; 

}

int main(){
    int A[] = {2,4,6,8,10};
    int n = 5;
    fun(A,n);

    // cout<<sizeof(A) / sizeof(int)<<endl; 


    for(int x:A){
        // cout<<x<<" ";
        printf("%d ",x);
    }


    return 0;
}