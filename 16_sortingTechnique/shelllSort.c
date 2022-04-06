#include <stdio.h>
#include <stdlib.h>

void ShellSort(int A[],int n){
    int gap,i,j,temp;
    for(gap=n/2;gap>=1;gap/=2){
        for(i=gap;i<n;i++){
            temp=A[i];
            j=i-gap;
            while(j>=0 && A[j]>temp){
                A[j+gap]=A[j];
                j=j-gap;
            }
            A[j+gap]=temp;
        }
    }
}

int main(){
    int A[] = {11, 5, 14, 2, 6, 3, 1}, n = 7, i;

    ShellSort(A,n);

    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
    return 0;
}