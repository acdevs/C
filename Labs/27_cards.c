#include<stdio.h>

int main(){
    char suits[4][9] = {"clubs", "diamonds", "hearts", "spades"};
    char faces[3][6] = {"jack", "queen", "king"};

    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    int suit = (number - 1) / 13;
    int face = (number - 1) % 13 + 1;

    if(face == 1){
        printf("%s of %s", "ace", suits[suit]);
    }else if(face > 10){
        printf("%s of %s", faces[face-11], suits[suit]);
    }else{
        printf("%d of %s", face, suits[suit]);
    }
}