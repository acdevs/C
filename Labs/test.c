#include <stdio.h>

void main(){
    char name[50];
    printf("Enter your name: ");
    gets(name);
    printf("Heyyy! I'm %s.", name);
}