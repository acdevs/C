#include<stdio.h>

int main(){
    char whole, dot, decimal;
    printf("Enter 3 characters: ");
    scanf("%c%c%c", &whole, &dot, &decimal);
    
    if (dot == '.' && (decimal >= '0' && decimal <= '9') && (whole >= '0' && whole <= '9')){
        float number = (whole - '0');
        number = number + (float)(decimal - '0') / 10;
        float square = number * number;
        printf("Square of %.1f is %.2f", number, square);
    }else{
        printf("Invalid input!");
    }
}