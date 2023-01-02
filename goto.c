// demostration of goto statement

#include <stdio.h>

int main(void){
    int i = 0;
    loop:
        printf("%d ", i);
        i++;
        if (i < 10)
            goto loop;
        printf("return from loop");
    return 0;
}