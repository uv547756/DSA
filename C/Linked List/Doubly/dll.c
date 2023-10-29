
#include <stdio.h>
#include <stdlib.h>
struct node {
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *newNode;
struct node *current;
void create(){
    char choice;
    while(1){
        newNode = (struct node*)malloc(sizeof(struct node));
        if(newNode == NULL){
            printf("Memory Allocation Failed!");
            exit(1);
    }
        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        newNode->prev = current;
        if(head == NULL){
            head = newNode;
        }
        else{
            current->next = newNode;
        }
        current = newNode;
        printf("Do you want more nodes?");
        while(getchar() != '\n');
        scanf("%c", &choice);
        if(choice != 'y' && choice != 'Y')
            break;
    }
}
void traverse(){
    struct node *p = head;
    int choice;
        printf("Do you want to go forward or backward?\n 1. Back\n 2. Forward\n \t");
        scanf("%d", &choice);
        if(choice == 2){
            while(p != NULL){
                printf("%d ->", p->data);
                p = p->next;
            }
            printf("NULL\n");
        }
        else if(choice == 1){
            while(p != NULL){
                printf("%d", p->data);
                p = p->prev;
            }
            printf("NULL\n");
        }
    }
int main(){
    create();
    traverse();
    return 0;
}