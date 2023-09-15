#include <stdio.h>

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid;
    while( start <= end){
        mid = start + (end - start) / 2;
        if(key > arr[mid]) start = mid + 1;
        else if(key < arr[mid]) end = mid - 1;
        else if(key == arr[mid]) return mid;
    }
    return -1;
}

int main(){
    int size, key;
    printf("Enter size of your asc sorted array: ");
    scanf("%d", &size);
    int arr[size];

    for(int i = 0; i < size; i++){
        printf("Enter element_%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter key to search: ");
    scanf("%d", &key);

    int index = binarySearch(arr, size, key);
    index != -1 ? printf("Element found at index: %d", index) : printf("Element not found");
}