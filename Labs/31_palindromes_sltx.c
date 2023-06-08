#include<stdio.h>
// #include<stdbool.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int i = n + 1;
    while(1){
        int temp = i;
        int rev = 0;
        while(temp > 0){
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        if(rev == i){
            printf("Smallest palindrome larger than %i: %i",n ,i);
            break;
        }
        i++;
    }
}