#include<stdio.h>

int main(){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(i+j & 1 == 1){
                printf("%2c", 'R');
            }else{
                printf("%2c", 'B');
            }
        }
        printf("\n");
    }
}