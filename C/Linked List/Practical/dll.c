#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head, *nNode, *temp;
int main(){
    char choice;
    head = NULL;
    do{
        nNode = (struct node*)malloc(sizeof(struct node));
        if(nNode == NULL){
            printf("Memory Allocation Failed.");
        }
        printf("Enter data member: ");
        scanf("%d", &nNode->data);
        nNode->next = NULL;
        nNode->prev = temp;
        if(head == NULL){
            head = nNode;
        }
        else{
            temp->next = nNode;
        }
        temp = nNode;
        printf("do you want to add more nodes? ");
        scanf("%d", &choice);
    }while(choice == 'y' || choice == 'Y');
}