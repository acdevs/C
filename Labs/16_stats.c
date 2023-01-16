#include<stdio.h>

int main(){
    int arr[] = {1, 6, 7, 9, 9, 4, 3, 2, 8, 5};

    int len = sizeof(arr)/sizeof(arr[0]);

    //mean...
    float mean = 0;
    for(int i = 0; i < len; i++){
        mean += arr[i];
    }
    printf("Mean = %.2f\n", mean/len);

    //sorting (bubble sort)
    for (int i = 0; i < len; i++){
        for( int j = 0; j < len-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //median
    float median = ((float)(arr[len/2] + arr[(len-1)/2]))/2;  // int/int ???
    printf("Median = %.2f\n", median);

    //mode
    int mode, max = 1, count = 1, prev = -1, exist = 1;
    for(int i = 0; i < len; i++){
        if (arr[i] == prev && i != len-1){
            count++;
        }
        else{
            if(arr[i] == prev && i == len-1){
                count++;
            }
            if(count > max){
                max = count;
                mode = arr[i-1];
            }
            else if(count == max && count != 1){
                exist = 0;
                break;
            }
            count = 1;
            prev = arr[i];
        }
    }
    if(exist){
        printf("Mode = %d\n", mode);
    }else{
        printf("Mode doesn't exist.\n");
    }
}