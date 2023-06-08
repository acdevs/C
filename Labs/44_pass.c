#include<stdio.h>

void swapRef(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside: a = %d, b = %d\n", *a, *b);
}

void swapVal(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("Inside: a = %d, b = %d\n", a, b);
}

int main(){
    int a = 10;
    int b = 20;
    printf("Main: a = %d, b = %d\n", a, b);
    printf("Pass by Value: \n");
    swapVal(a, b);
    printf("Outside: a = %d, b = %d\n", a, b);
    printf("Pass by Reference: \n");
    swapRef(&a, &b);
    printf("Outside: a = %d, b = %d\n", a, b);
    return 0;
}