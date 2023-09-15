#include <stdio.h>

void bubble(int *arr, int n){
    for(int i = 0; i < n; i++){
        int swapped = 0;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                swapped = 1;
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main(){
    int arr[] = {6, 1, 2, 3, 4, 5};
    int n = 6; // Calculate the number of elements in the array
    bubble(arr, n);

    // Print the sorted array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
