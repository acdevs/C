#include<stdio.h>

int main(){

    // int arr[] = {1, 2, 3, 4, 5};
    // int arr[5]; // {0, 0, 0, 0, 0}
    // int *ptr = arr;

    // arr[3 / 2] = 2; // this is same as arr[1] = 2
    // int res;
    // res = ++*ptr;
    // res += *ptr;
    // res += *ptr;
    // printf("%d\n", *ptr);
    // printf("%d", res);


    // traversing arrays...
    int arr[6] = {11, 12, 13, 14, 15, 16};
    
    // Way 1
    for(int i = 0; i < 6; i++)
          printf("%i ", arr[i]);
  
    printf("\n");
    
      // Way 2
    printf("By Other Method: \n");
    
    for(int i = 0; i < 6; i++)
          printf("%i ", i[arr]); // blew my mind!
  
    printf("\n");

}