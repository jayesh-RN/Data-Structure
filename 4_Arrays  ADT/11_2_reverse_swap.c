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

void swap(int *x , int  *y){
    int temp;
    temp = *x;
    *x = *y;
    *y  =temp;

}

void Reverse2(struct Arrays *arr){
    int i , j;
    for(i=0,j=arr->length-1;i<j;i++,
    j--){
        swap(&arr->A[i],&arr->A[j]);
    }
}



int main(){
    struct Arrays arr={{2,3,4,5,6},10,5}; 

    Reverse2(&arr);

    Display(arr); 
    

    return 0;
}