#include <stdio.h>

int main(){
    int x = 101;

    // The expression used in switch must be integral type (int, char and enum).
    switch (x)
    {
    // case x: The integral expressions used in labels must be a constant expressions

    x += 1; // never executed!!!

    case 1: printf("Choice is 1");
            break;
    default: printf("Choice other than 1, 2 and 5 ... 100");
            break;
    case 2: printf("Choice is 2");
            break;
    case 3:
    case 4: 
            printf("Choice is 3");
            break; 
    case 5 ... 100: // range of numbers :) 
            printf("Choice is great!");
            break; 
    }
    return 0;
}
