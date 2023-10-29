#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
struct node *neww;
struct node *temp;

void traverse(){
    struct node *print = head;
    while(print != NULL){
        printf("%d ->", print->data);
        print = print->next;
    }
    printf("NULL\n");
}
int main(){
    int x;
    char choice;
    head = NULL;
    do{
    neww = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data value: ");
    scanf("%d",&neww->data);
    neww->next = NULL;
    if(head == NULL){
        head = neww;
        temp = neww;
    }
    else{
        temp->next = neww;
        temp = temp->next;
    }
    printf("Do you want to add more: ");
    scanf(" %c", &choice);}
    while(choice == 'y');
    traverse();
}