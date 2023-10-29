#include <stdio.h>
#include <stdlib.h>
struct node {
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
        if (newNode ==  NULL){
            printf("Memory allocation failed. \n");
            exit(1);
        }
        printf("Enter data value:");
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
        printf("do youn want more nodes? ");
        while(getchar() != '\n');
        scanf(" %c", &choice);
        if(choice != 'y' && choice != 'Y')
            break;
    }
    return 0;
}

void traverse(){
    struct node *display = head;
    while(display!=NULL){
        printf("%d ->", display->data);
        display = display->next;
    }
    printf("NULL\n");
}

void deletef(){
    if(head == NULL){
        printf("List is empty.");
        return;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
    printf("Deleted the first node.");
}

void insert(){
    struct node *add = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data you want to add: ");
    scanf("%d", &add->data);
    add->next = NULL;
    if(head == NULL){
        head = add;
    }else{
        struct node *current = head;
        while(current->next != NULL){
            current = current->next;
        }
        current->next = add;
    }
}
 
void search(){
    int element, count = 0;
    printf("Enter element you need: ");
    scanf("%d", &element);
    struct node *search = head;
    while(search->data != element || head == NULL)
    {
        search = search->next;
        count ++;
    }
    printf("Elemet at: %d (0...n) node \n", count);
}
int main(){
    int choice, flag=0;
    while(flag != 1){
    printf("Enter your choice: \n 1. Create\n 2. Delete from front \n 3. Traverse\n 4. Search\n 5. Insert\n 6. Exit \n Input: \t1");
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