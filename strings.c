#include<stdio.h>
#include<string.h> 
#include<ctype.h> //for isalpha(), isdigit(), isalnum(), islower(), isupper(), tolower(), toupper()

int main(){
    char str[] = "Aman Chandra"; //mutable
    const cstr[] = "acdevs"; //immutable
    char watches[] = {'Y','T','\0'};

    // %s is used to print strings
    printf("%s watches %s.\n" ,str, watches);
    printf("Length of \"%s\" is %d\n" , watches, strlen(watches)); 
    printf("but, Size-of \"%s\" is %d\n" , watches, sizeof(watches)); 

    // //scanf()

    // char str[25];
    // printf("\nEnter a string: ");
    // scanf(" %s", str); //no & required

    // //fgets() and fputs() are used to read and write strings from and to stream.

    // //recommended!
    // char fstr[25];
    // printf("\nEnter a string: ");
    // fgets(fstr, 5, stdin); // (n-1) characters are read!!!
    // fputs(fstr, stdout); //newline is added automatically

    // //gets() and puts() are used to read and write strings from and to stream.

    // char gstr[5];
    // printf("Enter a string: ");
    // gets(gstr);
    // puts(gstr); //newline is added automatically
    // printf("Length of \"%s\" is %d\n", gstr, strlen(gstr)); 

    //reading a string using pointer...

    char* ptr = str;
    ptr+=6;

    // printf("%s\n", ptr); //reads the whole string afterwards...
    // printf("%c\n", *ptr);
    // printf("%c\n", ptr); //does not work

    //printing a string using pointer and loops...

    // ptr = str;
    // while (*ptr != '\0') { 
    //     printf("%c", *(ptr++));
    // } 
    // printf("\n");

    //// reverse printing a string...
    // ptr = str;
    // ptr += strlen(str);
    // while (ptr != str) {  
    //     printf("%c", *(--ptr));  
    // }
    // printf("\n");



    //String functions...

    //strlen
    printf("Length of \"%s\" is %d\n", str, strlen(str));

    //strcat
    // strcat(str, watches); //returns str
    printf("Concatenated string is \"%s\"\n", strcat(str, watches));

    //strcpy
    // strcpy(str, watches); //returns str
    printf("Copied string is \"%s\"\n", strcpy(str, watches)); //str is now "YT"

    //strcmp
    // strcmp(str, watches); //returns 0 if equal
    printf("Comparison of \"%s\" and \"%s\" is %d\n", str, watches, strcmp(str, watches));

    //redecalring str...
    strcpy(str, "Aman Chandra");

    //strchr
    // strchr(str, 'a'); //returns "pointer" to first occurence of 'a'
    printf("First occurence of 'a' in \"%s\" is after \"%c\"\n", str, *(strchr(str, 'a')-1));

    //strrchr
    // strrchr(str, 'a'); //returns "pointer" to last occurence of 'a'
    printf("Last occurence of 'a' in \"%s\" is after \"%c\"\n", str, *(strrchr(str, 'a')-1));

    //strstr
    // strstr(str, "Ch"); //returns "pointer" to first occurence of "Ch"
    printf("First occurence of \"Ch\" in \"%s\" is after \"%c\"\n", str, *(strstr(str, "Ch")-1));

    //strtok
    // strtok(str, " "); //returns "pointer" to first token
    // printf("%s\n", str);
    // printf("First token of \"%s\" is \"%s\"\n", str, strtok(str, " "));

    //strrev
    // strrev(str); //returns str
    printf("Reversed string is \"%s\"\n", strrev(str));

    //strlwr
    // strlwr(str); //returns str
    printf("Lowercase string is \"%s\"\n", strlwr(str));

    //strupr
    // strupr(str); //returns str
    printf("Uppercase string is \"%s\"\n", strupr(str));

    //strset
    // strset(str, 'a'); //returns str
    // printf("String set to 'a' is \"%s\"\n", strset(str, 'a')); //str is now "aaaaa"

    //strnset
    // strnset(str, 'a', 3); //3 is the number of characters to be set
    printf("String set to 'a' for first 3 characters is \"%s\"\n", strnset(str, 'a', 3)); //str is now "aaa"

    //redecalring str...
    strcpy(str, "Aman Chandra");

    //strncat
    // strncat(watches, str, 2); //2 is the number of characters to be concatenated
    printf("Concatenated string is \"%s\"\n", strncat(watches, str, 2)); //watches is now "YTAm"

    //strncpy
    // strncpy(watches, str, 2); //2 is the number of characters to be copied
    printf("Copied string is \"%s\"\n", strncpy(watches, str, 4)); //watches is now "Aman"



    //Additional string functions...
    char string[] = "12abc12";

    int alphabet = 0, number = 0, i;
    for (i = 0; string[i] != '\0'; i++){
        // check for alphabets
        if (isalpha(string[i]) != 0)
            alphabet++;
        // check for decimal digits
        else if (isdigit(string[i]) != 0)
            number++;
    }

    printf("Alphabetic_letters = %d, "
           "Decimal_digits = %d\n",
           alphabet, number);

    return 0;
}