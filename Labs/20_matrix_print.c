#include<stdio.h>

int main(){
    printf("Matrix: \nRows Cols? ");
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int mtx[rows][cols];

    printf("Matrix: ");
    for(int i=0; i< rows; i++){
        for(int j=0; j< cols; j++){
            scanf(" %d", &mtx[i][j]);
        }
    }
    /* 
    int mtx1[3][3] = {
        {4, 5, 2},
        {6, 4, 7},
        {9, 7, 0}
    };

    int rows = (sizeof(mtx1)/sizeof(mtx1[0]));
    int cols = (sizeof(mtx1)/sizeof(mtx1[0][0]))/rows; 
    */

    for(int i = 0; i < rows; i++){
        printf("[");
        for(int j = 0; j < cols; j++){
            printf("%3d",mtx[i][j]);
        }
        printf(" ]\n");
    }
    // time complexity: O(n) : n is the number of elements in the matrix ><)
}