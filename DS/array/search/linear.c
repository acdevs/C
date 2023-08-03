#include <stdio.h>

int linearSearch(int *arr, int size, int key){
    for(int i = 0; i < size; i++){
        int curr = arr[i];
        if(curr == key) return i;
    }
    return -1;
}

int main(){
    int arr[] = {3, 4, 2, 7, 1, 6, 8, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 1;
    printf("%d", linearSearch(arr, size, key));
}