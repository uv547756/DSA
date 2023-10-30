#include <stdio.h>
#include <stdlib.h>
struct stack{
    int top;
    int size;
    int *stack_ptr;  
};

int create(struct stack *s){
    printf("Enter size of Stack: ");
    scanf("%d",&s->size);
    s->top = -1;
    s->stack_ptr = (int*)malloc(s->size * sizeof(int));

}

int pop(struct stack *s){
    int x = -1;
    if(s->top == -1)
        printf("Stack  underflow");
    else{
        x=s->stack_ptr[s->top--];
    }
    return x;
}
int push(struct stack *s, int x){
    if(s->top == s->size - 1)
        printf("Stack Overflow/Full!");
    else{
        s->top++;
        s->stack_ptr[s->top] = x;
    }
    
}

int dispaly(struct stack s){
    int i;
    for(i=0; i<s.size; i++){
        printf("%d \t", s.stack_ptr[i]);
    }
}
int main(){
    struct stack s;
    create(&s);
       // case 1:
       //     create(&s);
        //    break;
          
    
            push(&s, 10);
            push(&s, 20);     
        
            dispaly(s);
           
     
            pop(&s);
            dispaly(s);
           }