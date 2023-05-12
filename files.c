#include<stdio.h>

int main(){
    FILE *f = fopen("test.txt", "r+");
    
    if(f == NULL){
        printf("Error opening file");
        return 1;
    }
    
    //...........................get/put..........................
    //reading char by char...
    // char ch;
    // while((ch = fgetc(f)) != EOF){
    //     printf("%c", ch);
    // }

    // reading line by line...
    // char str[5];
    // while(fgets(str, 5, f) != NULL){
    //     printf("%s", str);
    // }

    // reading at once...
    // char str[5];
    // fgets(str, 5, f);
    // printf("%s", str);

    //writing...
    // char str[25] = "get lost!";  
    // fputs(str, f);


    //........................ fprintf/fscanf.........................
    //writing...
    // fprintf(f, "Hello\n");  

    //reading...
    // char str[25];
    // fscanf(f, "%[^\n]s", str);
    // printf("%s", str);

    fclose(f);
    return 0;
}