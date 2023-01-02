#include<stdio.h>

void main(){
    int n, term = 1, sum = 0;
    printf("Series till N? ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d", term);
        sum += term;
        term = (term * 10 + 1);
        if (i != n){
            printf(" + ");
        }else{
            printf(" = ");
        }
    }
    printf("%d", sum);
}
