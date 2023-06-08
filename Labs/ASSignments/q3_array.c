//take the size of array from user and input the natural numbers in the array and print the array

#include <stdio.h>
int main()
{
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d numbers: \n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
