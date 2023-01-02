#include<stdio.h>

void main(){
    int n;
    printf("Rows, n? ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%2d", j);
        }
        printf("\n");
    }
}
