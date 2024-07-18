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
    // Type Conversion
    printf("\nType Conversion:\n");

    // Implicit conversion
    int intValue = 10;
    float floatResult = intValue / 3;
    printf("Implicit int to float: %f\n", floatResult);

    // Explicit conversion (casting)
    float explicitResult = (float)intValue / 3;
    printf("Explicit int to float: %f\n", explicitResult);

    // Integer to character
    int asciiValue = 65;
    char charFromInt = (char)asciiValue;
    printf("Integer %d to character: %c\n", asciiValue, charFromInt);

    // Character to integer
    char letter = 'Z';
    int intFromChar = (int)letter;
    printf("Character '%c' to integer: %d\n", letter, intFromChar);

    // Float to integer (truncation)
    float floatNum = 3.99;
    int intFromFloat = (int)floatNum;
    printf("Float %.2f to integer: %d\n", floatNum, intFromFloat);

    // Double to float (possible precision loss)
    double doubleNum = 3.14159265358979;
    float floatFromDouble = (float)doubleNum;
    printf("Double %.14f to float: %.7f\n", doubleNum, floatFromDouble);

    return 0;
}
