#include<stdio.h>

void main(){
    //datatype *varname;
    int a = 5, b = 4;
//    int *p, *q;
//    p = &a;
//    q = &b;
//    *q = *p;
//    printf("size(p): %d\n", sizeof(p));

    int *p = &a;
//     int **q;
//     q = &p;
//     int ***r;
//     r = &q;

//     printf("a: %d\n", a);
// //    printf("b: %d\n", b);
//     printf("p: %d\n", &p);
// //    printf("q: %d\n", *q);
//     printf("q: %d\n", q);
//     printf("r: %d\n", ***r);

//     //operations on pointers!
//     printf("address(p): %d\n", p);
//     p = p + 1;
//     printf("address(p): %d\n", p);
//     *p = b;
    // printf("a: %d\np: %d\n", a, p);
    *p = 6;
    printf("%d\n", a);

    //Void Pointer!
    void *ptr1 = NULL;
    printf("%d", ptr);

    //NULL Pointer!
    int *ptr2 = NULL;
    printf("%d", ptr);

    //Wild Pointer!
    int *ptr3;
    printf("%d", ptr); //error!
}
