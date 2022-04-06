#include<stdio.h>
#include<stdlib.h>

struct Arrays 
{
    int A[10];
    int size;
    int length;
};


void Display(struct Arrays arr){
    int i;
    printf("\n Elements  are \n");

    for(i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}

int Set(struct Arrays *arr, int index , int x ){
    if(index>=0 && index<arr->length){
        return  arr->A[index]  = x ;
    }
    return -1;
}


int main(){
    struct Arrays arr={{2,3,4,5,6},10,5}; 

    Set(&arr,0,15);

    Display(arr); 
    

    return 0;
}