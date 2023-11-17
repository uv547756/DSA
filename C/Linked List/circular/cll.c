#include <stdlib.h>
#include <stdio.h>
struct node {
    struct node *next;
    int data;
};

void create ( int A[], int n){
    int i;
    struct node *t, *last;
    head=(struct node*)malloc(sizeof(struct node));
    head->data = A[0];
    head->next = head;
    last = head;

    for(i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
struct node *head;
int main(){
    int A[] = {1,2,3,4,5,6};
    create(A, 6);
}