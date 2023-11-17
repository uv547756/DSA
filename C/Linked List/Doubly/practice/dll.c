#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};
struct node *firstNode = NULL;

void create(int a[], int n){
    struct node *t, *last;
    int i;
    firstNode = (struct node*)malloc(sizeof(struct node));
    firstNode->data = a[0];
    firstNode->prev = firstNode->next = NULL;
    last = firstNode;

    for(i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        for(i=0; i<n;i++){
            t->data = a[i];
            t->next = last->next;
            t->prev = last;
            last->next = t;
            last =t;
        }
    }
}