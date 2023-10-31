#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *lchild;
    struct node *rchild;
    int data;
    
};
struct queue{
    int size;
    int front;
    int rear;
    struct node **q;
};

void create(struct queue *q, int size){
    q->size = size;
    q->front = q->rear = 0;
    q->q = (struct node **)malloc(q->size*sizeof(struct node*));

}

void enqueue(struct queue *q, struct node *x){
    if((q->rear+1)%q->size=
}