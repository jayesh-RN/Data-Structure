#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[3][4] = {{1,2,3,4},{2,4,6,8},{9,10,11,12}};
    
    int *B[3]; 

    int **C;

    for(int i=0;i<3;i++){
        for(int j= 0;j<4;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }    

    B[0]=(int *)malloc(4*sizeof(int)); 
    B[1]=(int *)malloc(4*sizeof(int)); 
    B[2]=(int *)malloc(4*sizeof(int)); 
    
    for(int i=0;i<3;i++){
        for(int j= 0;j<4;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


    C=(int**)malloc(3*sizeof(int));
    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));
    C[2]=(int *)malloc(4*sizeof(int));
    
    C[1][0] =123;
    C[1][1] =123;
    C[1][2] =123;
    C[1][3] =123;
    
    for(int i=0;i<3;i++){
        for(int j= 0;j<4;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    } 

    return 0;
}