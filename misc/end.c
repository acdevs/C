#include <stdio.h>


void foo(char **s1, char **s2){
    char *temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
int main(){
    char *s1 = "Ananya";
    char *s2 = "Aman";
    // char **s3 = &s1;
    // char **s4 = &s2;
    printf("s1=%s, s2=%s\n", s1, s2);
    foo(&s1, &s2);
    printf("s1=%s, s2=%s", s1, s2);
}