#include <stdio.h>
#include <stdlib.h>
struct node{
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
            printf("Memory Allocation failed!");
            exit(1);
        }
        printf("Enter data for node: ");
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
        printf("Do you want more nodes?");
        while(getchar() != '\n');
        scanf(" %c", &choice);
        if(choice != 'y' && choice != 'Y')
            break;
    }
    
}

void traverse(){
    struct node *display = head;
    while(display != NULL){
        printf("%d ->", display->data);
        display = display->next;
    }
    printf("NULL \n");
}

void deletef(){
    if(head == NULL){
      printf("List Empty!");
      return;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
    printf("deleted node.");
}

void insert(){
    struct node *add = (struct node *)malloc(sizeof(struct node));
    printf("enter element to insert: ");
    scanf("%d", &add->data);
    if(head == NULL){
        head = add;
    }else{
        struct node *traverse = head;
        while(traverse->next != NULL){
            traverse = traverse->next;
        }
        traverse->next = add;
    }
}

void search(){
    int element, index=0;
    printf("Enter element you want to search: ");
    scanf("%d",&element);
    struct node *s = head;
    while(s->data != element || head == NULL){
        s = s->next;
        index++;
    }
    printf("Element present at node number: %d\n", index);
}
int main(){
     int choice, flag=0;
    while(flag != 1){
    printf("Enter your choice: \n 1. Create\n 2. Delete from front \n 3. Traverse\n 4. Search\n 5. Insert\n 6. Exit \n Input: \t");
    scanf(" %d", &choice);
    switch (choice)
    {
    case 1:
        create();
        break;
    
    case 2:
        deletef();
        break;
    case 3:
        traverse();
        break;
    case 4:
        search();
        break;
    case 5:
        insert();
        break;
    case 6:
        flag = 1;
        exit(0);
        break;
    default:
        break;
    }
    }

    //delete head
    return 0;
}