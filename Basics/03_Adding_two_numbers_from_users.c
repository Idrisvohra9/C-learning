// program for adding two numbers from users.
#include <stdio.h>

int main()
{
    int no1, no2, sum;
    printf("Write 1st number->\n");
    // scanf is used to read input from the user
    // "%i" is the format specifier for integer
    // &no1 is the address of the variable where the input value will be stored
    scanf("%i", &no1);
    printf("Write 2nd number->\n");
    // scanf is used to read input from the user
    // "%i" is the format specifier for integer
    // &no2 is the address of the variable where the input value will be stored
    scanf("%i", &no2);
    sum = no1 + no2;
    printf("Sum=%i\n", sum);

    return 0;
}