#include<stdio.h>

void main(){
    int a = (4, 5); // a = 5

    // int a = 4, 3; // error

    int b = a + a++; // done! ++ -- has higher precedence than + - * / % ! ~
    b = a++ + ++b;

    // int size_of_a = sizeof(++a); // not executed
    // printf("size(a) = %d\na = %d", size_of_a, a);

    // float exp = 12 % 7 / 4;
    // printf("%d", exp);

    // int flag = (int)'a' == 98 ? 1 : 0;
    // printf("%d", flag);


    //bitwise !!!

    // The left shift and right shift operators should not be used for negative numbers
    // 1 <<- 1 and 1 >> -1 is undefined
    // 1 << 33 is undefined if integers are stored using 32 bits

    printf("%d", b);
}
