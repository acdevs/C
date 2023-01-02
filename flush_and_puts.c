#include <stdio.h>

void main(){

    //input using puts and flush statement
    puts("Enter Size: ");
    char num = getc();
    flush(stdin);

    if (num == '2'){
        printf("Double!");
    }else{
        printf("x%d", num);
    }
}
