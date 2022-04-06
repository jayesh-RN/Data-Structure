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

int count (struct Node *p){
    int l=0;
    while(p){
        l++;
        p=p->next;
    } 
    return l;
}


int Rcount(struct Node *p){
    if(p == 0){
        return 0;
    }else{
        return Rcount(p->next)  + 1;
    }
}

int main(){
    int A[] = {3,5,7,10,15};

    create(A,5);

    display(first);
    printf("length is %d",count(first));
    printf("length is using recursion %d",Rcount(first));

    return 0;
}