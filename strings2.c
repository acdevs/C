#include <stdio.h>
int main()
{
    typedef char* String;
    String p = "HELLO";
    // char *p = "HELLO";
    // printf("%s", p);

    // char str[] = "HELLO";
    // char str[] = {'H', 'E', 'L', 'L', 'O', '\0'};
    // printf("%s", str);

    //inputting the strings...
    char s[20];  
    printf("Enter the string?");  
    scanf("%[^\n]s", s);  //skips the space
    printf("You entered %s", s);  

}