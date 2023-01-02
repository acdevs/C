#include <stdio.h>
#include <math.h>

void main(){

    // Finding roots of a quadratic equations: ax^2 + bx + c

    int a, b, c;
    printf("Quadratic eq. of form: ax^2 + bx + c, a != 0\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    float d = b*b - 4*a*c;
    if (d > 0){
        float root1 = (-b + sqrt(d))/(2*a);
        float root2 = (-b - sqrt(d))/(2*a);
        printf("Roots are real! values: %f & %f\n", root1, root2);
    }else if (d == 0){
        float root = -b/(2*a);
        printf("Roots are real and equal! value: %f\n", root);
    }else{
        printf("Roots are imaginary! No real value exists.\n");
    }
}
