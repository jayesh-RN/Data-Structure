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

struct Arrays*  Merge (struct Arrays *arr1, struct Arrays *arr2){
    int i, j , k;
    i = j = k = 0;

    struct Arrays *arr3 = (struct Arrays *) malloc(sizeof(struct Arrays));
    
    while(i<arr1->length && j<arr2->length){
        if(i<arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }else{
            arr3->A[k++] = arr2->A[j++];
        }
    }

    for(;i<arr1->length;i++){
        arr3->A[k++]=arr1->A[i];
    }
    for(;j<arr2->length;j++){
        arr3->A[k++]=arr2->A[j];
    }

    arr3->length  = arr1->length + arr2->length;
    arr3->size=10;



    return arr3;
}


int main(){
    struct Arrays arr1={{2,6,10,15,25},10,5}; 
    struct Arrays arr2={{3,4,7,18,20},10,5}; 
    struct Arrays *arr3;
    
    arr3 = Merge(&arr1 , &arr2);

    Display(*arr3); 
    

    return 0;
}