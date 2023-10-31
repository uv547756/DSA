#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int x){
    struct node *t = (struct node*)malloc(sizeof(struct node));
    if(t==NULL){
        printf("Queue is Ful!");
    }
    else{
        t->data = x;
        t->next = NULL;
        if(front==NULL){
            front = rear = t;
        }
        else{
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue(){
    int x = -1;
    struct node *t = (struct node *)malloc(sizeof(struct node));
    if(front == NULL){
        printf("List is Empty!");
    }
    else{
        t = front;
        front = front->next;
        x = t->data;
        free(t);
    }
    return x;
}

int isEmpty(){
    return (front == NULL);
}

void display(){
    struct node *d = front;
    while(d){
        printf("%d", d->data);
        d = d->next;
    }
    printf("\n");
}
 int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
 }