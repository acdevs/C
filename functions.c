#include<stdio.h>

void main(){
    int evaluate(int x, int y, int z);
    int res = evaluate(1, 9, 5);
    printf("%d", res);
}

int evaluate(int x, int y, int z){
    int res = 0;
    if (x < y){
        if (y < z){
            res = x + y;
        } else {
            res = x + z;
        }
    } else {
        if (x < z){
            res = y + x;
        } else {
            res = y + z;
        }
    }
    return res;
}