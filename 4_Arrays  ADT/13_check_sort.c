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


int isSorted(struct Arrays  arr ){
    int i;
    for(i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1])
            return 0;
    }
    return 1;
}


int main(){
    struct Arrays arr={{2,3,4,5,6},10,5}; 

    printf("%d\n",isSorted(arr));

    Display(arr); 
    

    return 0;
}