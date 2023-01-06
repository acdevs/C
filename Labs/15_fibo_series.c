#include<stdio.h>

void main(){
    int n, p = -1, q = 1, f;
    printf("Series till N? ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        f = p + q;
        p = q;
        q = f;
        printf("%d ", f);
    }
}