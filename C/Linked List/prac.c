#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
struct node *current;
struct node *newNode;

void traverse(){
    struct node *print = head;
    while(print != NULL){
        printf("%d ->", print->data);
        print = print->next;
    }
    printf("NULL\n");
}
int main(){
    char choice;
    head = NULL;
    do{
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        if(head == NULL){
            head = newNode;
            current = newNode;
        }
        else{
            current->next = newNode;
            current = current->next;
        }
        printf("Enter your choice: ");
        scanf(" %c", &choice);
    }while(choice == 'y');
    traverse();
    return 0;
    }