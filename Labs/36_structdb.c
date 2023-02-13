#include<stdio.h>
#include<string.h>

struct student{
    unsigned int roll;
    char name[50];
    float marks;
};
struct IT{
    struct student s001;
    struct student s002;
    struct student s003;
    //...
};
int main(){
    struct IT it22;
    it22.s001.roll = 22124009;
    strcpy(it22.s001.name, "Aman Chandra");
    it22.s001.marks = 98.75;
    it22.s002.roll = 22124005;
    strcpy(it22.s002.name, "Ali Abdaal");
    it22.s002.marks = 98.75;
    it22.s003.roll = 22124030;
    strcpy(it22.s003.name, "Dhruv Rathee");
    it22.s003.marks = 98.75;
    //...
    printf("Roll: %d, Name: %s, Marks: %f\n", it22.s001.roll, it22.s001.name, it22.s001.marks);
    printf("Roll: %d, Name: %s, Marks: %f\n", it22.s002.roll, it22.s002.name, it22.s002.marks);
    printf("Roll: %d, Name: %s, Marks: %f\n", it22.s003.roll, it22.s003.name, it22.s003.marks);
    //...
}