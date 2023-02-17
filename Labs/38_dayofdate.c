#include <stdio.h>
int isLeap(int);
int isLeap(int year){
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    //date >= 1 Jan, 1970...
    int day, month, year;
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    char days[][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int setweek = 3;
    int checkyrs = 1970;

    while(checkyrs < year){
        if(isLeap(checkyrs)){
            setweek += 1;
        }
        setweek += 1;
        checkyrs++;
    }

    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(isLeap(year)){
        months[1] = 29;
    }

    int count = 0, i = 0;
    while(1){
        if( i+1 < month){
            count += months[i];
            i++;
        }else{
            break;
        }
    }
    count += day;

    int weekday = (count + setweek) % 7;

    printf("it's %s.", days[weekday]);
}