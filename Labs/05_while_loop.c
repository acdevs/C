#include<stdio.h>

void main(){

    //sum of first n natural numbers

    int n,i = 1,sum = 0;
    printf("Enter N? ");
    scanf("%d", &n);

    while(i <= n){
        sum += i;
        i++;
    }

    printf("Sum of first N natural numbers: %d", sum);
}
