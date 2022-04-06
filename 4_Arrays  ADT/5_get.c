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

int Get(struct Arrays arr, int index){
    if(index>=0 && index<arr.length){
        return  arr.A[index];
    }
    return -1;


}


int main(){
    struct Arrays arr={{2,3,4,5,6},10,5}; 

    printf("%d\n",Get(arr,2));

    Display(arr); 
    

    return 0;
}