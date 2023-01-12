# include <stdio.h>

//scope: the region of the program where a variable is visible and accessible for use.

/* 
int x = 0;  // file scope
int f() 
{
   return x;
}
int g()
{
   int x = 1; // block scope
   return f();
}
int main()
{
  printf("%d", g());
}

*/

//Output: 0 Why? binding of a variable is independent of the run-time function call stack !!!

int main()
{
    {
        int x = 10, y = 20;
        {
            printf("x = %d, y = %d\n", x, y);
            {
                y = 40; // y -> 41 if int y = 40 -> 20 
                x++;
                y++;
                printf("x = %d, y = %d\n", x, y);
            }
            printf("x = %d, y = %d\n", x, y);
        }
    }
    return 0;
}

