#include <stdio.h>
void good_morning(); // function prototype
void good_evening(); // function prototype should be provided after the include line.
void good_night();
int main()
{
    good_morning(); // function calling
    good_evening(); // if the function carries a parameter than it should be called with the parameter or else an error will occur.
    good_night();
    return 0;
}
void good_morning() // function declaration
{
    printf("Good morning!\n");
}
void good_evening()
{
    printf("Good Evening!\n");
}
void good_night()
{
    printf("Good Night!\n");
}