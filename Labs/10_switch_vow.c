#include<stdio.h>

void main(){
    char alpha;
    printf("Any alphabet? ");
    alpha = fgetc(stdin);
    alpha = alpha >= 'a' ? alpha - ('a' - 'A') : alpha;
    switch(alpha){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("it's a vowel!");
            break;
        default:
            printf("it's a consonant!");
    }
}
