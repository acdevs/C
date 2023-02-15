#include <stdio.h>

//members will share the memory location! 🙄
union abc{  
    int a;  
    char b;  
    float c;  
    double d; //i.e 8 bytes
} var; 


int main(){  
    // var.a = 66;  
    // printf("\na = %d", var.a);
    // printf("\nb = %d", var.b);

    //size of the union is based on the size of the largest member of the union
    printf("Size of union abc is %d", sizeof(union abc));  
}