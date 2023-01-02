#include<stdio.h>

void main(){
    int n;
    printf("Rows, n? ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= n-i; s++){
            printf("   ");
        }
        for(int j = 1; j <= i; j++){
            printf("%3d", j);
        }
        for(int k = i-1; k >= 1; k--){
            printf("%3d", k);
        }
        printf("\n");
    }
}
