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

int Min(struct Arrays arr){
    int min  = arr.A[0];
    int i;

    for(i=1;i<arr.length;i++){
        if(arr.A[i]<min){
            min = arr.A[i];
        }
    }
return min;
}


int main(){
    struct Arrays arr={{2,3,4,5,6},10,5}; 

    printf("%d\n",Min(arr));

    Display(arr); 
    

    return 0;
}