#include <stdio.h>

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid;
    while( start <= end){
        mid = (start + end) / 2;
        if(key > arr[mid]) start = mid + 1;
        else if(key < arr[mid]) end = mid - 1;
        else if(key == arr[mid]) return mid;
    }
    return -1;
}

int main(){
    int arr[] = {0, 12, 16, 32, 45, 51, 66, 91, 98, 100};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 51;
    printf("%d", binarySearch(arr, size, key));
}