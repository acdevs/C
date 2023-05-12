#include <stdio.h>

int main(){
    int N = 3;
    int odd = 3;
    int rows;
    printf("Rows? ");
    scanf("%i", &rows);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows - i - 1; j++){
            printf("%4s"," ");
        }
        for(int k = 0; k < 2 * i + 1; k++){
            printf("%4d", N);
            N += odd;
            odd += 2;
        }
        printf("\n");
    }
}