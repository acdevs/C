#include<stdio.h>

void main(){
    int n, fact = 1;
    printf("Factorial of N? ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    printf(" = %d", fact);
}
