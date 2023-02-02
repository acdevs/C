#include<stdio.h>

int main(){
    int n;
    printf("Array: size? ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int min = arr[0], max = arr[0];

    for(int i = 1; i < n; i++){
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