#include <stdio.h>
#include <stdlib.h>
struct stack{
    int top;
    int size;
    int *p;
};


void create(struct stack *st){
    int size;
    printf("Enter size of stack: ");
    scanf("%d", &st->size);
    st->top=-1;
    st->p = (int *)malloc(st->size*sizeof(int));
}


void display(struct stack st){
    int i;
    for(i=st.top;i>=0;i--)
        printf("%d \n", st.p[i]);
    printf("\n");
}

void push(struct stack *st, int x){
    if(st->top==st->size-1)
        printf("Stack overflow \n");
    else{
        st->top++;
        st->p[st->top]=x;
    }
}

int pop(struct stack *st){
    int x = -1;
    if(st->top == -1)
        printf("Stack  underflow");
    else{
        x=st->p[st->top--];
    }
    return x;
}
int main(){
    struct stack st1;
    create(&st1);
    push(&st1, 10);
    pop(&st1);
    pop(&st1);
    display(st1);

}