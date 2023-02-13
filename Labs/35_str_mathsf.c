#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    //string functions...
    char str[] = "Aman Chandra";
    char watches[] = "YouTube";
    //strlen
    printf("Length of \"%s\" is %d\n", str, strlen(str));
    // strcat(str, watches); //returns str
    printf("Concatenated string is \"%s\"\n", strcat(str, watches));
    // strcpy(str, watches); //returns str
    printf("Copied string is \"%s\"\n", strcpy(str, watches)); //str is now "YouTube"
    // strcmp(str, watches); //returns 0 if equal
    printf("Comparison of \"%s\" and \"%s\" is %d\n", str, watches, strcmp(str, watches));
    //redecalring str...
    strcpy(str, "Aman Chandra");
    // strlwr(str); //returns str
    printf("Lowercase string is \"%s\"\n", strlwr(str));
    // strupr(str); //returns str
    printf("Uppercase string is \"%s\"\n", strupr(str));
    // strrev(str); //returns str
    printf("Reversed string is \"%s\"\n\n", strrev(str));

    //math functions...
    float n = 20.02;
    int k = 2;
    //sqrt(x); returns square root of x
    printf("square root of %f is %f\n", n, sqrt(n));
    //cbrt(x); returns cube root of x
    printf("cube root of %f is %f\n", n, cbrt(n));
    //ceil(x); returns ceil of x
    printf("ceil of %f is %d\n", n, ceil(n));
    //floor(x); returns floor of x
    printf("floor of %f is %d\n", n, floor(n));
    //pow(n, x); returns n raised to x
    printf("%f raised to the power of %i is %f\n", n, k, pow(n, k));
    //exp(x); returns e raised to x
    printf("e raised to the power of %i is %f\n", k, exp(k));
    //sin(x); returns sine of x
    printf("sine of %f is %f\n", n, sin(n));
    //cos(x); returns cosine of x
    printf("cosine of %f is %f\n", n, cos(n));
    //tan(x); returns tangent of x
    printf("tangent of %f is %f\n", n, tan(n));
    //abs(x); returns the absolute value of x
}