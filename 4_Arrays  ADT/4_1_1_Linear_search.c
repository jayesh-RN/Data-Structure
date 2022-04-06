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

int LinearSearch(struct Arrays arr, int key){
    int i;
    for(i=0;i<arr.length;i++){
        if(key == arr.A[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    struct Arrays arr={{2,3,4,5,6},10,5}; 

    printf("%d\n",LinearSearch(arr,6));

    Display(arr); 
    

    return 0;
}
