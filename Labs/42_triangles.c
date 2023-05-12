//QI. If the three sides of a triangle are entered through
// the keyboard, write a program to check whether the
// triangle is isosceles, equilateral or right angled triangle.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c){
        printf("The triangle is equilateral");
    }
    else if(a==b || b==c || c==a){
        printf("The triangle is isosceles");
    }
    else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
        printf("The triangle is right angled");
    }
    else{
        printf("The triangle is neither equilateral nor isosceles nor right angled");
    }
    return 0;
}