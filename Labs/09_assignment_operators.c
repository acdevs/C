#include<stdio.h>

void main(){
    int x  = 10;
    printf("Value of x = %d\n", x);
    x += 10;
    // x = x + 10
    printf("x += 10 -> x = %d\n", x);
    x -= 5;
    // x = x - 5
    printf("x -=  5 -> x = %d\n", x);
    x *= 2;
    // x = x * 2
    printf("x *=  2 -> x = %d\n", x);
    x /= 2;
    // x = x / 2
    printf("x /=  2 -> x = %d\n", x);
    x %= 10;
    // x = x % 10
    printf("x %%= 10 -> x = %d", x);
}
