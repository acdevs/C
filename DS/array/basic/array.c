#include<stdio.h>

void printElems(int *arr, int size){
    for(int i = 0; i < size; i++){
        i != size - 1 ? printf("%d, ", arr[i]) : printf("%d", arr[i]);
    }
}

void printElemsInRev(int *arr, int size){
    for(int i = size - 1; i >= 0; i--){
        i != 0 ? printf("%d, ", arr[i]) : printf("%d", arr[i]);
    }
}

int deleteElemAtIndex(int *arr, int *size, int index){
    int i = index;
    int pop = arr[i];
    while(i < *size - 1){
        arr[i] = arr[i + 1];
        i++;
    }
    arr[*size - 1] = 0;
    --*size;
    return pop;
}

int findMin(int *arr, int size){
    int min = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] < min) min = arr[i];
    }
    return min;
}

int findSum(int *arr, int size){
    int sum = 0;
    for(int i = 1; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[] = {14, 22, 32, 45, 25, 76, 12, 3};
    int size = sizeof(arr) / sizeof(int);
    printf("Array: ");
    printElems(arr, size);
    printf("\n\n");

    /* print all elements in reverse order */
    printf("Elems in reverse: ");
    printElemsInRev(arr, size);
    printf("\n\n");

    /* delete element at a index */
    int index = 2;
    printf("Deleted Element: %d\n", deleteElemAtIndex(arr, &size, index));
    printElems(arr, size);
    printf("\n\n");

    /* find smallest Elem */
    int minElem = findMin(arr, size);
    printf("Minimum Element: %d", minElem);
    printf("\n\n");

    /* find sum of Elems */
    int sum = findSum(arr, size);
    printf("Sum of Elems: %d", sum);
    printf("\n\n");

    return 0;
}