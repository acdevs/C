#include<stdio.h>

int main(){
    //sequence of characters : strings
    char abrakadabra[] = "abrakadabra";
    char characters[] = "hocuspocusabrakadabragiligilichu!"; //arbitrary string
    
    int i = 0, j = 0;
    while (characters[i] != '\0'){
        if (characters[i] == abrakadabra[j]){
            if (j == 10){
                printf("abrakadabra! stopped at %ith position.", i+1);
                return 0;
            }
            j++;
        }else{
            j = 0;
        }
        i++;
    }
    printf("abrakadabra not found!");
}