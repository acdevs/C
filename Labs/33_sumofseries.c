#include<stdio.h>

int sumofseries(int n){
    if (n <= 0){
        return 0;
    }
    n = n % 2 != 0 ? n - 1 : n;
    return n + sumofseries(n - 2);
}

int main(){
    //series: 2 + 4 + 6 ... 2n
    int n;
    printf("Series till, n? ");
    scanf("%i", &n);
    printf("Sum of series: %i", sumofseries(n));
}