#include<stdio.h>

int main(){
    int mtx1[3][2] = {
        {4, 2},
        {6, 7},
        {9, 0}
    };
    //rows of resultant matrix
    int rows = (sizeof(mtx1)/sizeof(mtx1[0]));
    
    int mtx2[2][4] = {
        {5, 5, 3, 4},
        {0, 1, 7, 0},
    };
    //cols of resultant matrix
    int cols = (sizeof(mtx2)/sizeof(mtx2[0][0]))/(sizeof(mtx2)/sizeof(mtx2[0]));

    // n = rows of mtx2 or cols of mtx1: mtx1 * mtx2
    int n = (sizeof(mtx2)/sizeof(mtx2[0]));
    int res[rows][cols];

    for(int row = 0; row < rows; row++){
        for(int col = 0; col < cols; col++){
            int element = 0;
            for(int i = 0; i < n; i++){
                element += mtx1[row][i] * mtx2[i][col];
            }
            res[row][col] = element;
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