#include<stdio.h>
#include<stdbool.h>

int main(){
    // int arr[] = {12, 3, 4, 1, 6, 9}, sum = 24;
    int arr[] = {1, 2, 3, 4, 5}, sum = 9;
    int len = sizeof(arr)/sizeof(arr[0]);

        for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            for(int k = 0; k < len; k++){
                if(i != j && j != k && i != k && (arr[i] + arr[j] + arr[k] == sum)){
                    printf("(%d, %d, %d)", arr[i], arr[j], arr[k]);
                    return 1;
                }
            }
        }
    }
    return 0;
}