#include<stdio.h>
#include<stdbool.h>

int main(){
    // int arr[] = {10, 20, 15, 4, 14};
    int arr[] = {2, 2, 7, 15};
    int len = sizeof(arr)/sizeof(arr[0]);
    int max = 0;

    //brute force...
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            for(int k = 0; k < len; k++){
                for(int l = 0; l < len; l++){
                    if(i != j && j != k && i != k && k != l && max < (arr[i] & arr[j] & arr[k] & arr[l])){
                        max = (arr[i] & arr[j] & arr[k] & arr[l]);
                    }
                }
            }
        }
    }
    printf("Shaun's max satisfaction: %d", max);
}