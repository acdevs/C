#include<stdio.h>

void swap_val(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("swap: a = %i, b = %i\n", a, b);
}

void swap_ref(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("swap: a = %i, b = %i\n", *a, *b);
}

int main(){
    int a, b;
    printf(" a = ");
    scanf("%i", &a);
    printf(" b = ");
    scanf("%i", &b);
    printf("main: a = %i, b = %i\n", a, b);
    //call by reference...
    swap_ref(&a, &b);
    printf("main: a = %i, b = %i\n", a, b);
    //call by value...
    swap_val(a, b);
    printf("main: a = %i, b = %i\n", a, b);
}
