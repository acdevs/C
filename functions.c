#include<stdio.h>
/* Apply the constructor attribute to myStartupFun() so that it is executed before main() */
void myStartupFun (void) __attribute__ ((constructor));
  
/* Apply the destructor attribute to myCleanupFun() so that it is executed after main() */
void myCleanupFun (void) __attribute__ ((destructor));

void myStartupFun (void)
{
    printf ("startup code before main()\n");
}
void myCleanupFun (void)
{
    printf ("cleanup code after main()\n");
}

void main(){
    int res = 2002;
    printf("%d", res);
}

// A function with same name cannot have different signatures
// A function with same name cannot have different return types
// A function with same name cannot have different number of parameters
