#include <stdio.h>
#include <stdlib.h>

/* ----------------------------------------------- */

struct Stack{
    int top;
    unsigned int capacity;
    char* arr;
};

struct Stack* create_stack(unsigned int capacity){
    struct Stack* stack;
    stack->top = -1;
    stack->capacity = capacity;
    stack->arr = (char *) malloc(capacity * sizeof(char));
    return stack;
}

int isEmpty(struct Stack* stack){
    return stack->top == -1;
}

void push(struct Stack* stack, char item){
    if(stack->top == stack->capacity - 1){
        printf("Stack Overflow\n");
        return;
    }
    stack->top++;
    stack->arr[stack->top] = item;
}

char pop(struct Stack* stack){
     if(isEmpty(stack)){
        printf("Stack Underflow\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

/* ----------------------------------------------- */

char* infix_to_postfix(char exp[]){
    struct Stack* stack = create_stack(100);
    char* postfix = (char *) malloc(100 * sizeof(char));
    int i = 0, j = 0;
    while(exp[i]){

    }
    return postfix;
}

/* ----------------------------------------------- */

int main(){
}