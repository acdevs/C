#include <stdio.h>
int main()
{
    int arr[5], i, num, found = 0;

    printf("Enter 5 numbers: \n");
    for (i = 0; i < 5; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);

    for (i = 0; i < 5; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Number found at index %d", i);
    }
    else
    {
        printf("Number not found");
    }

    return 0;
}