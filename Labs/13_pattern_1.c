#include<stdio.h>

void main(){
    int n;
    printf("Rows, n? ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("%2c", '*');
        }
        printf("\n");
    }
}
