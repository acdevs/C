#include <stdio.h>

void main(){

    // Program to print sum of digits of number.

    int num, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0){
        digit = num % 10;
        num /= 10;
        sum += digit;
    }

    printf("Sum of it's digits = %d\n", sum);
}
