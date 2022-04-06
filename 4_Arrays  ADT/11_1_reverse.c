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

void Reverse(struct Arrays *arr){
    int *B;
    int i,j;

    B=(int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1,j=0;i>=0;i--,j++)
        B[j]=arr->A[i];

    i  = 0;

    for(int i=0; i <  arr->length;i++)
        arr->A[i]=B[i];
    }




int main(){
    struct Arrays arr={{2,3,4,5,6},10,5}; 

    Reverse(&arr);

    Display(arr); 
    

    return 0;
}