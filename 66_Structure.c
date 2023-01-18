// Structure is a USER defined data type in C.
// Structure creates a new data type which can be used to group items of possibly more than one data type into a single type.
// Structure is used to organize data under a single name so that we do not have to worry about multiple variables to store the same data type of values.
#include <stdio.h>
#include <string.h>
struct Time// struct keyword is used to define a structure
{
    int hrs, mins, secs;
    char day[15], month[15];
};// A terminator is mandatory for struct keyword
int main(){
    struct Time clock1;// This is literally the same as python's class instance declaration
    // I am calling this a instance of the structure but it is called an element of the structure.
    clock1.hrs =4;// The "." we use in the variable while assigning a value to the structure variables is called member operator or dot operator
    clock1.mins =59;
    clock1.secs =35;
// cl1ock.day ="Mon";//This will throw an error ->66_Structure.c:14:15: error: assignment to expression with array type "clock.day ="Mon";"
// That is the reason we will use strcpy to declare a string with the header file <string.h>
    strcpy(clock1.day,"Mon");// this is to be typed instead of the assignment to "Mon"
    strcpy(clock1.month,"March");

    printf("%d : %d : %d\n Month: %s\n Day: %s ",clock1.hrs,clock1.mins,clock1.secs,clock1.month,clock1.day);
// The values in an instance of a structure can be also defined as this by keeping in mind the order of variables in a structure:
    // for example   ={hh:mm:ss, day, month}
    struct Time clock2={7,56,49,"Tue","Apr"};
    printf("\n%d : %d : %d\n Month: %s\n Day: %s ",clock2.hrs,clock2.mins,clock2.secs,clock2.month,clock2.day);

// Or can also be defined with only instances:
// struct Time
// {
//     int hrs, mins, secs;
//     char day[15], month[15];
// }clock1,clock2;

// And also with values with instances also works:
// struct Time
// {
//     int hrs, mins, secs;
//     char day[15], month[15];
// }clock1={16,58,45,"sun","feb"},clock2;// this is really amusing to see that you can fill the necessary values in just the end of the structure and yet it is a thing. But for printfing this will have to be the same old format of using the member operator between the structure name and structure variable.
//     return 0;
}
// Interesting points to note about structures:
// Structure is always declared at the top level of the code after the #include of the header files and before functions or variable declaration.