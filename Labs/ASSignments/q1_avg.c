// find average of total marks of 10 students using array user input

#include <stdio.h>
int main()
{
    int marks[10], i, sum = 0;
    float avg;

    printf("Enter marks of 10 students: \n");
    for (i = 0; i < 10; i++)
    {
        printf("Student %d: ", i + 1);
        // scanf("%d", &marks[i]);
        scanf("%d", &*(marks + i));
    }

    for (i = 0; i < 10; i++)
    {
        sum += marks[i];
    }


    avg = (float)sum / 10;

    printf("Average marks of 10 students: %.2f", avg);

    return 0;
}