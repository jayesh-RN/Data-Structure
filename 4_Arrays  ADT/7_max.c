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

int Max(struct Arrays arr){
    int max  = arr.A[0];
    int i;

    for(i=1;i<arr.length;i++){
        if(arr.A[i]>max){
            max = arr.A[i];
        }
    }
return max;
}


int main(){
    struct Arrays arr={{2,3,14,5,6},10,5}; 

    printf("%d\n",Max(arr));

    Display(arr); 
    

    return 0;
}