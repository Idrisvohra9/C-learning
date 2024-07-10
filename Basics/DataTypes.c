/*
 * Data Types in C
 *
 * In C, there are several fundamental data types that represent different kinds of values.
 * Here are some of the most commonly used data types:
 */

#include <stdio.h>

int main()
{
    // Integer Types
    int integerValue = 42;
    printf("Integer Value: %d\n", integerValue);

    // Floating-Point Types
    float floatValue = 3.14;
    double doubleValue = 3.14159265358979;
    printf("Float Value: %f\n", floatValue);
    printf("Double Value: %lf\n", doubleValue);

    // Character Type
    char characterValue = 'A';
    printf("Character Value: %c\n", characterValue);

    // Boolean Type (represented by int in C)
    int booleanTrue = 1;  // True
    int booleanFalse = 0; // False
    printf("Boolean True: %d\n", booleanTrue);
    printf("Boolean False: %d\n", booleanFalse);

    return 0;
}
