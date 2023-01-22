#include<stdio.h>

int main(){
    // array
    int arr[] = {1, 2, 6, 3, 7, 9, 8, 3, 5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0], max = arr[0];

    for(int i = 1; i < len; i++){
        if(min > arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }
    //printing...
    printf("Max element: %d\n", max);
    printf("Min element: %d\n", min);
}