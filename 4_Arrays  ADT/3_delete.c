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

int Delete(struct Arrays *arr,int index){
    int x = 0;
    int i ;

    if(index>=0 && index<=arr->length){
        x = arr->A[index];
        for(i=index;i<arr->length-1;i++)
            arr->A[i] = arr->A[i+1];
        arr->length--; 
        return x;
    }
    return 0; 

}

int main(){
    struct Arrays arr={{2,3,4,5,6},10,5};

    printf("%d\n",Delete(&arr,4)); 

    Display(arr); 
    

    return 0;
}
