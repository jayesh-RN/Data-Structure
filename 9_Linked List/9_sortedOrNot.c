#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int  n){
    int i;
    struct Node *t , *last;
    first = (struct Node *)malloc(sizeof(struct Node ));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next = NULL;
        last->next=t;
        last=t;
    }
}

void display(struct Node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}


int isSorted(struct Node*p){
    int x = -65536;

    while (p!=NULL)
    {
        if(p->data < x)
            return 0;

        x=p->data;
        p=p->next;    
    }
    return 1;
}

int main(){
    int A[] = {3,5,7,10,15};

    create(A,5);

    if(isSorted){
        printf("sorted\n");
    }else{
        printf("NotSorted");
    }

    //display(first);
    

    return 0;
}