#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE_Q 10

struct queue{
    int front;
    int rear;
    int items[MAX_SIZE_Q];
};

void create(struct queue *q){
    q->front = -1;
    q->rear = -1;
}

int isFull(struct queue *q){
    return q->rear == MAX_SIZE_Q - 1;
}
int isEmpty(struct queue *q){
    return (q->front == -1 && q->rear == -1);
}

void enqueue(struct queue *q, int x){
    if(isFull(q)){
        printf("Overflow!");
    }
    else{
        if(isEmpty(q)){
            q->front = 0;
        }
        q->rear++;
        q->items[q->rear]=x;
    }
}

void dequeue(struct queue *q){
    if(isEmpty(q)){
        printf("Underflow!");
    }
    else{
        printf("element popped: %d", q->items[q->front]);
        q->front++;
    }
}

int main(){
    struct queue q;
    create(&q);
    dequeue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    dequeue(&q);
    if (!isEmpty(&q)) {
        printf("Elements in the queue: ");
        for (int i = q.front; i <= q.rear; i++) {
            printf("%d ", q.items[i]);
        }
        printf("\n");
    } else {
        printf("Queue is empty.\n");
    }
}