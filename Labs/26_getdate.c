#include<stdio.h>

int main(){
    int year, ndays;
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter days: ");
    scanf("%d", &ndays);
    
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        months[1] = 29;
    }

    if(ndays > 365 && months[1] == 28 || ndays > 366 && months[1] == 29){
        printf("Days out of range!");
        return 0;
    }

    int getdays = 0;
    for(int i = 0; i < 12; i++){
        getdays += months[i];
        if(getdays >= ndays){
            int date = getdays - ndays - months[i];
            printf("Date: %02d/%02d/%04d", date > 0 ? date : -date, i+1, year);
            break;
        }
    }
}