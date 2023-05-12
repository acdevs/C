#include<stdio.h>

void main(){
    //bss segment:  contains statically allocated variables that are declared but have not been assigned a value yet.
    //datatype *varname;
    int a = 5, b = 4;
    // int *p, *q;
    // p = &a;
//    q = &b;
//    temp = *q;
//    *q = *p;
//    *p = *q;
//    printf("size(p): %d\n", sizeof(p));

    int *p = &a;
    // int **q;
    // q = &p;
    // int ***r;
    // r = &q;

    // printf("a: %d\n", a);
    // printf("b: %d\n", b);
    // printf("&p: %p\n", &p);
    // printf("&a: %p\n", &a);
    // printf("*q: %p\n", *q);
    // printf("q: %d\n", q);
    // printf("***r: %d\n", ***r);

    //operations on pointers!
    printf("address(*p): %d\n", p);
    p = p + 1;
    printf("address(*p): %d\n", p);
    *p = b;
    printf("a: %d\np: %d\n", a, p);
    *p = 6;
    printf("%d\n", b);

}
