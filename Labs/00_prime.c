#include <stdio.h>
#include <stdbool.h>
void main(){
    int nums, prime1, prime2;
    printf("Enter a positive integer: ");
    scanf("%d", &nums);
    bool flagi, flagj, found = false;
    for (int numi=2; numi <= nums/2; numi++){
        flagi = true;
        for (int i=2; i < numi; i++){
            if (numi%i == 0){
                flagi = false;
                break;
            }
        }
        if (flagi){
            prime1 = numi;
            prime2 = nums - prime1;
            flagj = true;
            for (int j=2; j < prime2; j++){
                if (prime2%j == 0){
                    flagj = false;
                    break;
                }
            }
            if (flagj){
                found = true;
                printf("%d = %d + %d\n", nums, prime1, prime2);
            }
        }
    }
    if(!found){
        printf("Cannot be expressed as sum of primes!");
    }
}
