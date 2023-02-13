#include<stdio.h>
int main()
{
    float f = 0.1;
    if (f == 0.1) // false!
        printf("True");
    else
        printf("False");

    //but...
    //(f == (float)0.1) or (f == 0.1f) // true!

    if (sizeof(int) > -1) // false!
           printf("True");
       else
           printf("False");
}