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

struct Arrays*  Intersecction (struct Arrays *arr1, struct Arrays *arr2){
    int i, j , k;
    i = j = k = 0;

    struct Arrays *arr3 = (struct Arrays *) malloc(sizeof(struct Arrays));
    
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            i++;
        }
        else if (arr2->A[j]<arr1->A[i]){
            j++;
        }
        else if(arr1->A[i] == arr2->A[j]){
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    arr3->length  = k;
    arr3->size=10;



    return arr3;
}


int main(){
    struct Arrays arr1={{2,6,10,15,25},10,5}; 
    struct Arrays arr2={{3,6,7,15,20},10,5}; 
    struct Arrays *arr3;
    
    arr3 = Intersecction(&arr1 , &arr2);
    

    Display(*arr3); 
    

    return 0;
}