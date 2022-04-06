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

int Sum(struct Arrays arr){
    int s=0;
    int i;
    for(i=0;i<arr.length;i++){
        s += arr.A[i];
    }
    return s;
}
 

int main(){
    struct Arrays arr={{2,3,4,5,6},10,5}; 

    printf("%d\n",Sum(arr));
    
    Display(arr); 
    

    return 0;
}