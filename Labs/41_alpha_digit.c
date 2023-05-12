#include<stdio.h>

int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("%c is an alphabet", ch);
    }
    else if(ch >= '0' && ch <= '9'){
        printf("%c is a digit", ch);
    }
    return 0;
}