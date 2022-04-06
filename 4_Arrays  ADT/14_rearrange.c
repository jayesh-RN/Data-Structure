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

void Rearrange(struct Arrays *arr){
    int i , j;
    i=0;
    j=arr->length-1;

while (i<j)
{
    while(arr->A[i]<0)i++;
    while(arr->A[j]>=0)j--;
    if(i<j)swap(&arr->A[i],&arr->A[j]);

}
}


int main(){
    struct Arrays arr={{2,-3,25,10,-15,-7},10,6}; 

    Rearrange(&arr);

    Display(arr); 
    

    return 0;
}