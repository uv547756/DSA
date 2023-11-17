#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head, *newnode, *temp;

void display(){
    struct node *print = head;
    while(print != NULL){
        printf("%d ->", print->data);
        print = print->next;
    }
    printf("\n");
}
int main(){
    char choice;
    head = NULL;
    do{
        newnode = (struct node*)malloc(sizeof(struct node ));
        if(newnode == NULL){
            printf("Memory Allocation Failed.");
        }
        printf("Enter data value: \n");
        scanf("%d", &newnode->data);
        if(head == NULL){
            head = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = temp->next;
        }
        printf("Do you want to add more nodes? \n");
        scanf("%c", &choice);
    }
        while(choice == 'Y' || choice == 'y');
        display();
        return 0;
    }