#include<stdio.h>
#include<stdbool.h>

int main(){
    // int arr[] = {12, 3, 4, 1, 6, 9}, sum = 24;
    // int arr[] = {1, 2, 3, 4, 5}, sum = 9;
    int n, sum;
    printf("Array: size? ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Sum? ");
    scanf("%d", &sum);

    for(int i = 0; i < n; i++){
        for(int j = 0; j != i && j < n ; j++){
            for(int k = 0; k != j && i != k && k < n; k++){
                if(arr[i] + arr[j] + arr[k] == sum){
                    printf("(%d, %d, %d)\n", arr[k], arr[j], arr[i]);
                }
            }
        }
    }
    return 0;
}