#include<stdio.h>

void main(){

    //sum of first n natural numbers

    int n, sum = 0;
    printf("Enter N? ");
    scanf("%d", &n);

    for( int i = 0; i <= n; i++ ){
        sum += i;
    }

    printf("Sum of first N natural numbers: %d", sum);
}
