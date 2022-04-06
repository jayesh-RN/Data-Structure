#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *lchild;
    int data ;
    int height;
    struct Node *rchild;
}*root=NULL;

int Nodeheight(struct Node *p){
    int hl,hr;
    if(p && p->lchild)
        hl=p->lchild->height;
    else
        hl=0; 

    if(p && p->rchild)
        hr=p->rchild->height;
    else
        hr=0;  

    if(hl>hr)
        return hl+1;
    else
        return hr+1;    
}

int BalanceFactor(struct Node *p){
    int hl,hr;
    if(p && p->lchild)
        hl=p->lchild->height;
    else
        hl=0; 

    if(p && p->rchild)
        hr=p->rchild->height;
    else
        hr=0; 

    return hl-hr;    
}

struct Node *LLRotation(struct Node *p){
    struct Node *pl = p->lchild;
    struct Node *plr = pl->rchild;

    pl->rchild=p;
    p->lchild=plr;
    p->height=Nodeheight(p);
    pl->height=Nodeheight(pl);

    if(root==p)
        root=pl;

    return pl;
}

struct Node *RRRotation(struct Node *p){
    return NULL;
}

struct Node *LRRotation(struct Node *p){
    struct Node *pl = p->lchild;
    struct Node *plr = pl->lchild;

    pl->rchild = plr->lchild;
    p->lchild = plr->rchild;

    plr->lchild=pl;
    plr->rchild=p;

    pl->height=Nodeheight(pl);
    p->height=Nodeheight(p);
    plr->height=Nodeheight(plr);

    if(root==p)
        root=plr;
    return plr;
}

struct Node *RLRotation(struct Node *p){
    return NULL;
}

struct Node *RInsert(struct Node *p , int key){
    struct Node *t =NULL;
    if(p==NULL){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        t->height=1;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if(key < p->data)
        p->lchild = RInsert(p->lchild,key);
    else if(key>p->data) 
        p->rchild = RInsert(p->rchild , key); 

    p->height = Nodeheight(p);    

    if(BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == 1)
        return LLRotation(p);

    else if(BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == -1)
        return LRRotation(p);

    else if(BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == -1)
        return RRRotation(p);        

    else if(BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 1)
        return LRRotation(p);    

    return p;    
}

int main(){

    //for LLRotation
    // root = RInsert(root,10);
    // RInsert(root,5);
    // RInsert(root,2);

    //for LRRotation
    root = RInsert(root,50);
    RInsert(root,10);
    RInsert(root,20);

    return 0;
}