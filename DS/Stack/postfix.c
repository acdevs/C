#include <stdio.h>
#include <stdlib.h>

/* ----------------------------------------------- */

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

/* ----------------------------------------------- */

int isDigit(char c){
    return c >= '0' && c <= '9';
}

int evaluate_postfix(char exp[]){
    struct Stack* stack = create_stack(100);
    int i = 0;
    while(exp[i]){
        if(isDigit(exp[i])){
            int op = exp[i] - '0';
            push(stack, op);
        }else{
            int op1 = pop(stack);
            int op2 = pop(stack);
            switch(exp[i]){
                case '+':
                    push(stack, op2 + op1);
                    break;
                case '-':
                    push(stack, op2 - op1);
                    break;
                case '*':
                    push(stack, op1 * op2);
                    break;
                case '/':
                    push(stack, op2 / op1);
                    break;
            }
        }
        i++;
    }
    return pop(stack);
}

/* ----------------------------------------------- */

int main(){
    char exp[] = "546+*493/+*";
    printf("Result: %d", evaluate_postfix(exp));
}