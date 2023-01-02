#include<stdio.h>

void main(){
    int n, check = 1;

    while(check == 1){
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n % 2 == 0){
            printf("%d is even!\n", n);
        }else{
            printf("%d is odd!\n", n);
        }
        printf("\nDo you wanna continue?(1/0): ");
        scanf("%d", &check);
    }
}
