#include<stdio.h>

// Increment/Decrement of a Pointer: +/- size of datatype

// Addition of integer to a pointer: + size of datatype * integer

// Subtraction of integer to a pointer: - size of datatype * integer

// Subtracting two pointers of the same type: (bits / size of datatype)

// Comparison of pointers of the same type.
// Assignment of pointers to the same type of pointers.

int main(){
    int arr[3] = { 10, 100, 200 };
    int* ptr;
    // ptr = &arr[0]; // this way also works
    ptr = arr;

    // for (int i = 0; i < 3; i++) {
    //     printf("Value of *ptr = %d\n", *ptr);
    //     printf("Value of ptr = %p\n\n", ptr);
    //     ptr++;
    // }


    // accessing elements through pointers
    printf("Elements of the array are: ");
    printf("%d, %d, %d",ptr[0],ptr[1],ptr[2]);


    // Multidimensional Arrays
    int nums[2][3]  =  { {16, 18, 20}, {25, 26, 27} };
    // In general, nums[i][j] is equivalent to *(*(nums+i)+j)


    //Void Pointer!
    void *ptr1 = NULL;
    printf("%d", ptr1);

    //NULL Pointer!
    int *ptr2 = NULL;
    printf("%d", ptr2);

    //Wild Pointer!
    int *ptr3;
    printf("%d", ptr3); //error!


    return 0;
}