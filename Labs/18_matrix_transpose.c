#include<stdio.h>

int main(){
    int mtx[2][3] = {
        {4, 5, 2},
        {6, 4, 7},
    };

    int rows = (sizeof(mtx)/sizeof(mtx[0]));
    int cols = (sizeof(mtx)/sizeof(mtx[0][0]))/rows;

/* 
    //transposing a square-matrix in-place!
    for(int row = 0; row < rows; row++){
        for(int col = row + 1; col < cols; col++){
            int temp = mtx[row][col];
            mtx[row][col] = mtx[col][row];
            mtx[col][row] = temp;
        }
    }
    //printing resultant matrix...
    for(int i = 0; i < rows; i++){
        printf("[");
        for(int j = 0; j < cols; j++){
            printf("%3d",mtx[i][j]);
        }
        printf(" ]\n");
    }
 */

    //transposing other than square-matrix as res!
    int res[cols][rows];
    for(int row = 0; row < rows; row++){
        for(int col = 0; col < cols; col++){
            res[col][row] = mtx[row][col];
        }
    }
    //printing resultant matrix...
    for(int i = 0; i < cols; i++){
        printf("[");
        for(int j = 0; j < rows; j++){
            printf("%3d",res[i][j]);
        }
        printf(" ]\n");
    }

}