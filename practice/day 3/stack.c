#include <stdio.h>
#include <stdlib.h>
struct stack{
    int *st_ptr;
    int size;
    int top;
};
void create(struct stack *s){
    printf("Enter size of stack:");
    scanf("%d",&s->size);
    s->top = -1;
    s->st_ptr = (int*)malloc(s->size*sizeof(int));
}

int isFull(struct stack *s){
    return s->top == s->size - 1;
}
int isEmpty(struct stack *s)
{
    return s->top == -1;
        
};
void push(struct stack *s, int x){
    if(isFull(s)){
        printf("Stack overflow!\n");
    }
    else{
        s->top++;
        s->st_ptr[s->top] = x;
    }
}

int pop(struct stack *s){
    int x = -1;
    if(isEmpty(s)){
        printf("Stack Underflow!\n");
    }
    else{
        s->st_ptr[s->top] = x;
        s->top--;
    }
    return x;
}

void display(struct stack s){
    if(isEmpty(&s)){
        printf("Stack Underflow!\n");
    }
    else{
        printf("[");
        for(int i = 0; i<=s.top; i++){
            printf("%d \t",s.st_ptr[i]);
        }
        printf("]\n");
    }
}
int main(){
    struct stack s;
    create(&s);
    pop(&s);
    push(&s, 10);
    push(&s, 20);
    display(s);
    pop(&s);
    display(s);
}