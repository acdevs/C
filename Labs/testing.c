// function to find primes till n using sieve of eratosthenes

#include<stdio.h>
#include<math.h>

void main(){
    int n;
    printf("n? ");
    scanf("%d", &n);
    int a[n+1];
    for(int i = 0; i <= n; i++){
        a[i] = 1;
    }
    a[0] = 0;
    a[1] = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(a[i] == 1){
            for(int j = i*i; j <= n; j += i){
                a[j] = 0;
            }
        }
    }
    printf("Primes till %d are: ", n);
    for(int i = 0; i <= n; i++){
        if(a[i] == 1){
            printf("%d ", i);
        }
    }
    printf("\n");
}