//The standard header <stdarg.h> is used for variable list arguments (…) in C.

#include <stdio.h> 

//Command Line Arguments in C

void main(char argc, char *argv[])  {  
  
   printf("Program name is: %s\n", argv[0]);  
   
   if(argc < 2){  
      printf("No argument passed through command line.\n");  
   }
   else{  
      printf("First argument is: %s\n", argv[1]);
   }  
}