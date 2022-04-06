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

void InsertSort (struct  Arrays *arr , int x){
    int i=arr->length-1;
    if(arr->length == arr->size)
       return ;
    while (i>=0 && arr->A[i]>x)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;   
}


int main(){
    struct Arrays arr={{2,3,5,10,15},10,5}; 

    InsertSort(&arr , 7);

    Display(arr); 
    

    return 0;
}