#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node *lchild;
    int data;
    int height;
    struct Node *rchild;
}*root = NULL;

int NodeHeight(struct Node *p){
    int hl , hr;
    if(p && p->lchild)
        hl=p->lchild->height;
    else    
        hl = 0;
    if(p && p->rchild)
        hr=p->rchild->height;
    else    
        hr = 0;
    if(hl>hr)
        return hl+1;
    else
        return hr+1;        
}

int BalanceFactor(struct Node *p){
    int hl , hr;
    if(p && p->lchild)
        hl=p->lchild->height;
    else    
        hl = 0;
    if(p && p->rchild)
        hr=p->rchild->height;
    else    
        hr = 0;
    
    return hl-hr;
}

struct Node *LLRotation(struct Node *p){
    struct Node *pl = p->lchild; 
    struct Node *plr = pl->rchild;

    pl->rchild = p;
    p->lchild = plr;
    p->height = NodeHeight(p);
    pl->height = NodeHeight(p);

    if(p==root)
        root=pl;
    return pl;    
}

struct Node *LRRotation(struct Node *p){
    struct Node *pl = p->lchild;
    struct Node *plr = pl->rchild;

    pl->rchild = plr->lchild;
    p->lchild = plr->rchild;
    plr->lchild = pl;
    plr->rchild = p;

    pl->height=NodeHeight(pl);
    p->height=NodeHeight(p);
    plr->height=NodeHeight(plr);

    if(root==p)
        root = plr;
    return plr;    
}

struct Node *RInsert(struct Node *p,int key){
    struct Node *t = NULL;
    if(p==NULL){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=key;
        t->lchild=t->rchild=NULL;
        t->height=1;
        return t;
    }
    if(key<p->data)
        p->lchild = RInsert(p->lchild,key);
    else if(key>p->data)
        p->rchild = RInsert(p->rchild,key);

    p->height=NodeHeight(p);  
    if(BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == 1)
        return LLRotation(p);
    else if(BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == -1)
        return LRRotation(p);    
}

int main(){

       //for LRRotation
    root = RInsert(root,50);
    RInsert(root,10);
    RInsert(root,20);

   

    return 0;
}