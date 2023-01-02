#include<stdio.h>

void main(){
    int n;
    printf("Rows, n? ");
    scanf("%d", &n);
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= n-i; s++){
            printf("    ");
        }
        for(int j = 1; j <= i; j++){
            if (j < 10){
                printf("  %d ",j);
            }else{
                printf(" %d ", j);
            }
        }
        for(int k = i-1; k >= 1; k--){
            if (k < 10){
                printf("  %d ", k);
            }else{
                printf(" %d ", k);
            }
        }
        printf("\n");
    }
}
