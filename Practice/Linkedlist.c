#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int x;
    struct Node *next;
} * first;

void create(int A[], int n)
{
    int i;
    struct Node *T, *Last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->x = A[0];
    first->next = first->prev = NULL;
    Last = first;

    for (i = 1; i < n; i++)
    {
        T = (struct Node *)malloc(sizeof(struct Node));
        T->x = A[i];
        T->next = Last->next;
        T->prev = Last;
        Last->next = T;
        Last = T;
    }
}

void display(struct Node *p)
{
    while (p)
    {
        printf("%d ", p->x);
        p = p->next;
    }
}

int main()
{
    int Larr[] = {10, 20, 30, 40, 50};
    create(Larr, 5);

    display(first);

    return 0;
}