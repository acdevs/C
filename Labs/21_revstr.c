#include<stdio.h>
#include<string.h>

int main(){
    //strings

    char str[25];
    printf("String: ");  
    gets(str);
    int i = 0, j = strlen(str) - 1;
    while(i < j){
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    //printing...
    printf("Reverse String: %s", str);
}