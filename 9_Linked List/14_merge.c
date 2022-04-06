#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL,*second=NULL,*third=NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void create2(int A[], int n)
{
    int i;
    struct Node *t, *last;
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = A[0];
    second->next = NULL;
    last = second;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int count(struct Node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}

void  Merge (struct Node  *p  , struct  Node *q){
    struct Node *last;
    if(p->data < q->data){
        third=last=p;
        p=p->next;
        third->next=NULL;
    }else{
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p && q){
        if(p->data < q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p)last->next=p;
    if(q)last->next=q;
} 

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    int B[] = {15,25,35,54,55};

    create(A, 5);
    create2(B,5);


    display(first);
    printf("\n\n");
    display(second);
    printf("\n\n");

    Merge(first,second); 
   
    printf("merged \n");
    display(third);

    return 0;
}