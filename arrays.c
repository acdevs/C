#include<stdio.h>

int main(){

    // int arr[] = {1, 5, 3, 4, 2};
    int *arr = {1, 5, 3, 4, 2};
    // this is not allowed because excess elements in scalar initializer...



    // printf("%d", sizeof(arr));

    // int x = 'a';
    // int value = *(arr);
    // printf("%d", value);
//     int arr[5]; // {0, 0, 0, 0, 0}
//     arr[3 / 2] = 2; // this is same as arr[1] = 2

/*
  ........  Array name gives address of first element of array.
*/

    // int *ptr = arr; // *ptr = &arr[0]
    // printf("%d\n", *ptr);


//     // traversing arrays...
//     int arr[6] = {11, 12, 13, 14, 15, 16};
    
//     // Way 1
// printf("{");
//     for(int i = 0; i < 5; i++)
//           i != 4 ? printf("%i, ", arr[i]) : printf("%i", arr[i]);
// printf("}\n");

printf("%d", *arr);
  
//     printf("\n");
    
//       // Way 2
//     printf("By Other Method: \n");
    
//     for(int i = 0; i < 6; i++)
//           printf("%i ", i[arr]); // blew my mind!
  
//     printf("\n");

/* 
  ........  Array members are accessed using pointer arithmetic. 
*/
    // for(int i = 0; i < 5; i++){
    //       // printf("%d ", *(ptr + i));
    //       // printf("%d ", *(arr + i));
    //       // printf("%d ", arr[i]);
    //       printf("%d ", ptr[i]);
    // }
    // printf("\n");


    // fun()
    // fun(arr);

    // Multi-Dimensional Arrays
    // int a[][2] = {{1, 2}, {3, 4}}; // 2D array
    // int a[][1][1][4] = {{{{4,5}}}, {{{4,5}}}}; // 4D array
}

/* 
  ........  Array parameters are always passed as pointers, even when we use square brackets. 
*/

// int fun(int ptr[]){
//       printf("sizeof(ptr) = %d\n", (int)sizeof(*ptr));
//       int x = 6;
//       // This allowed because ptr is a pointer, not array
//       ptr = &x;
//       printf("*ptr = %d ", *(ptr));
// }
