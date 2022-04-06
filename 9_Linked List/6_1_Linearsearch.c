#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

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

void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

struct Node *Lsearch(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
            return p;
        p = p->next;
    }
    return NULL;
}

struct Node *Rsearch(struct Node *p, int key)
{
    if (p == NULL)
    {
        return NULL;
    }
    if (key == p->data)
    {
        return p;
    }
    else
    {
        return Rsearch(p->next, key);
    }
}

int main()
{

    struct Node *temp;
    struct Node *temp1;
    int A[] = {3, 5, 7, 10, 15, 25};

    create(A, 6);

    temp = Lsearch(first, 25);
    if (temp)
        printf("key is found %d \n", temp->data);
    else
        printf("key not found \n");

    temp1 = Rsearch(first, 7);
    if (temp1)
        printf("key is found %d \n", temp1->data);
    else
        printf("key not found");

    return 0;
}