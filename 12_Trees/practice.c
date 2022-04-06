#include <stdio.h>
#include "Queue.h"
#include "Stack.h"

struct Node *root = NULL;

void Treecreate(){
    struct Node *p,*t;
    int x;
    struct Queue q;
    create(&q,100);
    printf("Enter Root value");
    scanf("%d",&x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild=NULL;
    enqueue(&q,root);

    while(!isEmpty(q)){
        p=dequeue(&q);
        printf("enter left child %d",p->data);
        scanf("%d",&x);
        if(x!=-1){
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild =NULL;
            p->lchild=t;
            enqueue(&q,t);
        }
        printf("enter right child %d",p->data);
        scanf("%d",&x);
        if(x!=-1){
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild =NULL;
            p->rchild=t;
            enqueue(&q,t);
        }

    }
}

void preorder(struct Node *p){
    if(p){
        printf("%d ",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void Ipreorder(struct Node *p){
    struct Stack stk;
    Stackcreate(&stk, 100);
    while(p || !isEmptyStack(stk)){
        if(p){
            printf("%d ",p->data);
            push(&stk,p);
            p=p->lchild;
        }
        else{
            p=pop(&stk);
            p=p->rchild;
        }
    }
}

void levelOrder(struct Node *root){
    struct Queue q;
    create(&q,100);
    printf("%d ",root->data);
    enqueue(&q,root);

    while(!isEmpty(q)){
        root = dequeue(&q);
        if(root->lchild){
            printf("%d ",root->lchild->data);
            enqueue(&q,root->lchild);
        }
        if(root->rchild){
             printf("%d ",root->rchild->data);
            enqueue(&q,root->rchild);
        }
    }

}

int main()
{
    Treecreate();
    levelOrder(root);
    // printf("\npost order");
    // postorder(root);

    return 0;
}