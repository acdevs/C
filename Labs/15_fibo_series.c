#include<stdio.h>

void fiboSeries(int n){
    int p = -1, q = 1, f;
    for(int i = 0; i < n; i++){
        f = p + q;
        p = q;
        q = f;
        printf("%d ", f);
    }
}

void main(){
    int n;
    printf("Series till N? ");
    scanf("%d", &n);
    fiboSeries(n);
}