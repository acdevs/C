#include <stdio.h>

void main(){

    //sum of first n natural numbers

    int n,i = 1,sum = 0;
    printf("Enter N? ");
    scanf("%d", &n);

    do{
        sum += i;
        i++;
    }while(i<= n);

    printf("Sum of first %d natural numbers: %d",n , sum);
}
