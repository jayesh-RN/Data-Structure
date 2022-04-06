#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int A [n];
    A[0] = 12;
    A[1] = 54;
    A[2] = 34;
    A[3] = 14;

    printf("%d\n",sizeof(A));
    // printf("%d\n",A[2]);

    for(int i=0;i<5;i++){
        printf("%d\n",A[i]);
    }


    return 0;
}