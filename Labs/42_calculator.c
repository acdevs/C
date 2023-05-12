// Q2. Write a program to create a simple calculator using
// switch case.

#include<stdio.h>
int main(){
    float a,b;
    char op;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    switch(op){
        case '+':
            printf("The sum of %.2f and %.2f is %.2f", a, b, a+b);
            break;
        case '-':
            printf("The difference of %.2f and %.2f is %.2f", a, b, a-b);
            break;
        case '*':
            printf("The product of %.2f and %.2f is %.2f", a, b, a*b);
            break;
        case '/':
            printf("The quotient of %.2f and %.2f is %.2f", a, b, a/b);
            break;
        case '%':
            printf("The remainder of %.2f and %.2f is %d", a, b, ((int)a)%((int)b));
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}