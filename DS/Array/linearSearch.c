#include <stdio.h>

int linearSearch(int *arr, int size, int key){
    for(int i = 0; i < size; i++){
        int curr = arr[i];
        if(curr == key) return i;
    }
    return -1;
}

int main(){
    int size, key;
    printf("Enter size of your array: ");
    scanf("%d", &size);
    int arr[size];

    for(int i = 0; i < size; i++){
        printf("Enter element_%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter key to search: ");
    scanf("%d", &key);

    int index = linearSearch(arr, size, key);
    index != -1 ? printf("Element found at index: %d", index) : printf("Element not found");
}