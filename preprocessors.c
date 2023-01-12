#include<stdio.h>

// headers...
// stddef.h – Defines several useful types and macros.
// stdint.h – Defines exact width integer types.
// stdio.h – Defines core input and output functions
// stdlib.h – Defines numeric conversion functions, pseudo-random network generator, and memory allocation
// string.h – Defines string handling functions
// math.h – Defines common mathematical functions.

/* void main(){    // bad practice
    printf("Hello World");
} */

// #include <limits.h> //size-range of data types

#define max 100
#define INCREMENT(x) ++x //returns x+1
// #define MULTIPLY(a, b) a* b //whatif MULTIPLY(2+3, 4+5) -> 2+3*4+5
#define MULTIPLY(a, b) (a)* (b) // safe
#define merge(a, b) a##b // merge two tokens
#define get(a) #a // convert to string, whatif get(2+3) -> "2+3"
#define square(x) x* x // whatif 9 / square(3) -> 9/3*3 -> 9/3*3  -> 9

// ...macros can be written in multiple lines using ‘\’. The last line doesn’t need to have ‘\’.
#define PRINT(i, limit)    \
    while (i < limit) {    \
        printf("hey! ");   \
        i++;               \
    }
// ...inline function should be used instead of macros!

// standard macros in C
// __LINE__ %d – It is used to print the current line number in the source code.
// __FILE__ %s – It is used to print the current file name.
// __DATE__ %s – It is used to print the current date in “MMM DD YYYY” format.
// __TIME__ %s – It is used to print the current time in “HH:MM:SS” format.
// __STDC__ – It is used to print the version of the C standard followed by the compiler.

#undef max // undefine a macro


// div function prototype
float div(float, float); // function prototype
#define div(x, y) x / y

int main(){

    // int keyword in C
    /* printf("minimum int value = %d\n" // -2^31
            "maximum int value = %d\n"  // 2^31
            "size of int in bytes = %zu\n"
            "size of int in bits = %zu\n"
            "unit_max = %u",        // 2^32, never overflows but done modulo!
            INT_MIN, INT_MAX, sizeof(int),
            sizeof(int) * CHAR_BIT, UINT_MAX); */

    // macros and preprocessors

    // printf("max is %d", max);
    // printf("%d", merge(12, 34));
    // int i = 2;
    // PRINT(i, 5);

    // printf("%0.2f", div(10.0, 5.0));
    return 0;
}



