#include<stdio.h>

void main()
{
    int n, isprime;
    printf("Enter a number, n? ");  
    scanf("%d", &n);
    printf("Prime factors:\n");
    for(int i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            isprime = 1;
            for(int j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    isprime = 0;
                    break;
                }
            }
            if(isprime)
            {
                printf("%d\n", i);
            }
        }
    }
}