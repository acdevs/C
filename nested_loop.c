#include<stdio.h>
 
int main(){

    // Blow my mind #1


    // int c1 = 0, c2 = 0;

    // /* FIRST */
    // for(int i=0;i<10;i++,c1++)
    //     for(int j=0;j<100;j++, c1++);
    //         // 100 * 10 + 10
        

    // /* SECOND */
    // for(int i=0; i<100; i++, c2++)
    //     for(int j=0; j<10; j++, c2++);
    //         // 10 * 100 + 100
    
    // printf("%d %d", c1, c2);



    // Blow my mind #2


    int c1 = 0, c2 = 0;
     
   /* FIRST */
   for(int i=0; ++c1&&i<10; i++)
      for(int j=0; ++c1&&j<100;j++);
        // 101 * 10 (loop) + 11
      
 
   /* SECOND */
   for(int i=0; ++c2&&i<100; i++)
      for(int j=0; ++c2&&j<10; j++);
        // 11 * 100 (loop) + 101
       
    printf("%d %d", c1, c2);

    return 0;
}