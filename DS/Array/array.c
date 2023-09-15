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

int deleteElem(int *arr, int *size, int elem){
    int pop;
    for(int i = 0; i < *size; i++){
        if(arr[i] == elem){
            pop = arr[i];
            while(i < *size - 1){
                arr[i] = arr[i + 1];
                i++;
            }
            arr[*size - 1] = 0;
            --*size;
            return pop;
        }
    }
    return -1;
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
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int size;
    printf("Enter size of your array: ");
    scanf("%d", &size);
    int arr[size];

    for(int i = 0; i < size; i++){
        printf("Enter element_%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    printElems(arr, size);
    printf("\n");

    /* print all elements in reverse order */
    printf("Reverse array: ");
    printElemsInRev(arr, size);
    printf("\n");

    /* delete element at a index */
    int delTarget;
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &delTarget);
    printf("Deleted Element: %d\n", deleteElemAtIndex(arr, &size, delTarget));
    printElems(arr, size);
    printf("\n");

    /* delete element */
    int delElem;
    printf("Enter the element you wish to delete\n");
    scanf("%d", &delElem);
    printf("Deleted Element: %d\n", deleteElem(arr, &size, delElem));
    printElems(arr, size);
    printf("\n");

    /* find smallest Elem */
    int minElem = findMin(arr, size);
    printf("Minimum Element: %d", minElem);
    printf("\n");

    /* find sum of Elems */
    int sum = findSum(arr, size);
    printf("Sum of Elems: %d", sum);
    printf("\n");

    return 0;
}