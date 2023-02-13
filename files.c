#include<stdio.h>

int main(){
    FILE *f = NULL;
    f = fopen("test.txt", "r");
    
    if(f == NULL){
        printf("Error opening file");
        return 1;
    }
    
    //writing...
    // char str[25] = "Aman Chandra";  
    // fputs("Hello World", f);
    // fputs(str, f);

    //reading...
    char ch;
    // while((ch = fgetc(f)) != EOF){
    //     printf("%c", ch);
    // }
    // printf("%s", fgets(f));
    fclose(f);
    return 0;
}