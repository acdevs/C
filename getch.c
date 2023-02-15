#include<stdio.h>  
#include<string.h>  
#include<conio.h>  

void main()  
{  
    char pw[10];  
    int x;  
    printf(" Enter password: ");  
    for (x = 0; x < 10; x++)  
    {  
        // accepts the hidden password using the getch() function  
        pw[x] = getch();  
        printf("*"); // print the input chartered in the form of *  
    }  
    pw[x] = '\0';  
    printf( "\n" );  
    printf(" You have passed the hidden password: ");  
    for (x = 0; pw[x] != '\0'; x++)  
    {  
        printf("%c", pw[x]);  
}  
getch();  
}  