#include <stdio.h>
#include <stdlib.h>

struct Stack{
    int top;
    unsigned int capacity;
    int* arr;
};

struct Stack* create_stack(unsigned int capacity){
    struct Stack* stack;
    stack->top = -1;
    stack->capacity = capacity;
    stack->arr = (int *) malloc(capacity * sizeof(int));
    return stack;
}

int isEmpty(struct Stack* stack){
    return stack->top == -1;
}

void push(struct Stack* stack, int item){
    if(stack->top == stack->capacity - 1){
        printf("Stack Overflow\n");
        return;
    }
    stack->top++;
    stack->arr[stack->top] = item;
}

int pop(struct Stack* stack){
     if(isEmpty(stack)){
        printf("Stack Underflow\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

int peek(struct Stack* stack){
    if(isEmpty(stack)) return -1;
    return stack->arr[stack->top];
}

int size(struct Stack* stack){
    return stack->top + 1;
}

int main(){
    struct Stack* stack = create_stack(5);
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);
    push(stack, 5);
    printf("👀 : %d\n", peek(stack));
    push(stack, 5);
    // push(stack, 6);
    printf("📤 : %d\n", pop(stack));
    printf("📤 : %d\n", pop(stack));
    printf("👀 : %d\n", peek(stack));
    printf("📤 : %d\n", pop(stack));
    printf("📤 : %d\n", pop(stack));
    printf("📤 : %d\n", pop(stack));
    printf("📤 : %d\n", pop(stack));
    printf("👀 : %d\n", peek(stack));
}