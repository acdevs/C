#include <stdio.h>
#define N 10

//enum flag {const1, const2, ..., constN};

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
enum year{Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
// enum day {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
enum day {sunday = 1, monday, tuesday = 5, wednesday, thursday = 10, friday, saturday};
enum State {Working = 1, Failed = 0, Freezed = 0};
enum suit {club = 0, diamonds = 10, hearts = 20, spades = 3};
//enum boolean {false, true} check;


//Warning!!!
// enum state  {working, failed};
// enum result {failed, passed};
// WHY: All enum constants must be unique in their scope.


void main(){

    enum week day;
    day = Wed;
    printf("%d",day);
    

    // iter years...
    int i;
    for (i=Jan; i<=Dec; i++)     
        printf("%d ", i);

    
    printf("%d, %d, %d", Working, Failed, Freezed);

    printf("%d %d %d %d %d %d %d", sunday, monday, tuesday, wednesday, thursday, friday, saturday);


    // Enums over macros...
    // Enums follow scope rules. 
    // Enum variables are automatically assigned values. Following is simpler 
}