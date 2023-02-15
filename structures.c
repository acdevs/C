#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//declaration
//method 1
// struct student{
//     char name[50];
//     int roll;
//     float marks;
// } s;
//method 2
// typedef struct student{
//     char name[50];
//     int roll;
//     float marks;
// } Student;

typedef struct student{
    char name[50];
    int roll;
    float marks;
} Student;
//Structure members cannot be initialized with declaration.

/* 
//
struct array  
{  
    int arr[8];  
};  
struct array getarray()  
{  
    struct array y;  
    printf("Enter the elements in an array : ");  
    for(int i=0;i<8;i++)  
    {  
        scanf("%d",&y.arr[i]);  
    }  
    return y;  
}
*/

int main(){
    // Student s[5];
    // for(int i = 0; i < 5; i++){
    //     printf("Enter details of %ith student: \n", i+1);
    //     printf("Name : ");
    //     scanf("%s", &s[i].name);
    //     printf("Roll : ");
    //     scanf("%d", &s[i].roll);
    //     printf("Marks: ");
    //     scanf("%f", &s[i].marks);
    // }

    Student s1; //method 2
    Student s2; //method 2
    strcpy(s1.name, "Aman");
    s1.roll = 9;
    s1.marks = 90.86;
    // strcpy(s2.name, "Doja");
    // s2.roll = 34;
    // s2.marks = 87.54;

    Student *ptr = &s1;
    printf("Name : %s", ptr->name);

    // struct array x = getarray();  
    // printf("Elements that you have entered are :");  
    // for(int i=0;x.arr[i]!='\0';i++){  
    //     printf("%d ", x.arr[i]);  
    // }  
}

