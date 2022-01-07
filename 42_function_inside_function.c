#include <stdio.h>
void good_morning(); // function prototype
void good_evening();
void good_night();
int main(){
    good_morning(); // function calling
    return 0;
}
void good_morning()  // function declaration
{
    printf("Good morning!\n");
    good_evening(); // function calling inside function good_morning()
}
void good_evening()
{
    printf("Good Evening!\n");
    good_night();
}
void good_night()
{
    printf("Good Night!\n");
    main(); // We can also call the main function in any function
    // in this case it will loop indefinitely.
}