#include <stdio.h>

void main(){

    // Program to check Armstrong number.

    int n, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int num = n;
    while(n > 0){
        digit = n % 10;
        n = n / 10;
        sum += digit*digit*digit;
    }

    if (num == sum){
        printf("An armstrong Number!\n");
    }else{
        printf("Not an armstrong Number!\n");
    }

}
