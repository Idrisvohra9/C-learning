// Structure is a USER defined data type in C.
// Structure creates a new data type which can be used to group items of possibly more than one data type into a single type.
// Structure is used to organize data under a single name so that we do not have to worry about multiple variables to store the same type of data values.
#include <stdio.h>
#include <string.h>
struct Time// struct keyword is used to define a structure
{
    int hrs, mins, secs;
    char day[15], month[15];
};// A terminator is mandatory for struct keyword
int main(){
    struct Time clock1;// This is literally the same as python's class instance declaration
    clock1.hrs =59;
    clock1.mins =59;
    clock1.secs =60;
    // cl1ock.day ="Mon";//This will throw an error ->66_Structure.c:14:15: error: assignment to expression with array type "clock.day ="Mon";"
    // That is the reason we will use strcpy to declare a string with the header file <string.h>
    strcpy(clock1.day,"Mon");// this is to be typed instead of the assignment to "Mon"
    strcpy(clock1.month,"March");
    printf("%d : %d : %d\n Month: %s\n Day: %s ",clock1.hrs,clock1.mins,clock1.secs,clock1.month,clock1.day);

    return 0;
}