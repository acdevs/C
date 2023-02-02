#include <stdio.h>
#include <stdlib.h>

//declaration
//method 1
// struct student{
//     char name[50];
//     int roll;
//     float marks;
// } s;
//method 2
struct student{
    char name[50];
    int roll;
    float marks;
};
//Structure members cannot be initialized with declaration.

int main(){
    struct student s; //method 2
    s.roll = 1;
}

