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

int RBinarySearch(int a[],int l, int h,int key){
    int mid;

    if(l<=h){
        mid = (l+h)/2;
        if(key == a[mid]){
            return mid;
        }else if(key<a[mid]){
            return RBinarySearch(a,l,mid-1,key);
            }else{
                return RBinarySearch(a,mid+1,h,key);
            }
        }
         return -1;
    }
   

int main(){
    struct Arrays arr={{2,3,4,5,6},10,5}; 

    printf("%d\n",RBinarySearch(arr.A,0,arr.length,9));

    Display(arr); 
    

    return 0;
}