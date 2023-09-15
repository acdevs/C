#include <stdio.h>
#include <stdlib.h>

/* My work is to add size! */

struct StackNode{
    int data;
    struct StackNode *next;
};

struct StackNode* create_stack(){
    struct StackNode* top = NULL;
    return top;
};

int isEmpty(struct StackNode** stack){
    return !(*stack);
}

void push(struct StackNode** stack, int item){
    struct StackNode *temp;
    temp = (struct StackNode *) malloc(sizeof(struct StackNode));
    temp->data = item;
    temp->next = *stack;
    *stack = temp;
}

int pop(struct StackNode** stack){
    if(!(*stack)){
        printf("Stack Underflow\n");
        return -1;
    }
    struct StackNode *temp = *stack;
    int popped = temp->data;
    *stack = temp->next;
    return popped;
}

int peek(struct StackNode** stack){
    if(!(*stack)){
        printf("Stack Underflow\n");
        return -1;
    }
    return (*stack)->data;
}

int main(){
    struct StackNode* stack = create_stack();
    push(&stack, 1);
    printf("👀 : %d\n", peek(&stack));
    push(&stack, 2);
    printf("👀 : %d\n", peek(&stack));
    push(&stack, 3);
    printf("👀 : %d\n", peek(&stack));
    push(&stack, 4);
    pop(&stack);
    push(&stack, 6);
    printf("📤 : %d\n", pop(&stack));
    printf("👀 : %d\n", peek(&stack));
}
