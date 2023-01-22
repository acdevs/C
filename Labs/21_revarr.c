#include<stdio.h>

int main(){
    // array
    int n;
    printf("Array: size? ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n/2; i++){
        int temp = arr[n-1-i];
        arr[n-1-i] = arr[i];
        arr[i] = temp;
    }

    //printing...
    printf("Reverse array: \n");
    printf("[");
    for(int i = 0; i < n; i++){
        i!=n-1? printf("%2d,", *(arr+i)): printf("%2d", *(arr+i));
    }
    printf("]\n");
}