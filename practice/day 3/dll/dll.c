#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *newNode;
struct node *current;

int create(){
    char choice;
    while(1){
        newNode = (struct node *)malloc(sizeof(struct node));
        if(newNode == NULL){
            printf("Memory Allocation Failed!");
            exit(1);
        }
        if(head == NULL){
            head = newNode;
            current = newNode;
        }
    }
    
}
int main(){
    
    
}