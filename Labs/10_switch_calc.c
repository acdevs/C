#include<stdio.h>

void main(){
    float a, b, res;
    int modres;
    char oper;
    printf("Enter two numbers:\na = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);

    printf("Operator(+, -, *, /, %%): ");
    scanf(" %c", &oper);

    switch(oper){
        case '+':
            res = a + b;
            printf("\nResult: %.2f", res);
            break;
        case '-':
            res = a - b;
            printf("\nResult: %.2f", res);
            break;
        case '*':
            res = a * b;
            printf("\nResult: %.2f", res);
            break;
        case '/':
            res = a / b;
            printf("\nResult: %.2f", res);
            break;
        case '%':
            modres = ((int)a) % ((int)b);
            printf("\nResult: %d", modres);
            break;
        default:
            printf("\nUh oh! Invalid Operator");
    }
}
