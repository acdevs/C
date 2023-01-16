#include<stdio.h>

int main(){
    int mtx1[3][3] = {
        {4, 5, 2},
        {6, 4, 7},
        {9, 7, 0}
    };
    int mtx2[3][3] = {
        {5, 5, 3},
        {0, 1, 7},
        {4, 7, 1}
    };

    //addition on similar matrixs
    int rows = (sizeof(mtx1)/sizeof(mtx1[0]));
    int cols = (sizeof(mtx1)/sizeof(mtx1[0][0]))/rows;

    int res[rows][cols];

    for(int row = 0; row < rows; row++){
        for(int col = 0; col < cols; col++){
            res[row][col] = mtx1[row][col] + mtx2[row][col];
        }
    }

    //printing resultant matrix...
    for(int i = 0; i < rows; i++){
        printf("[");
        for(int j = 0; j < cols; j++){
            printf("%3d",res[i][j]);
        }
        printf(" ]\n");
    }

}