// C program to print the cube of the numbers upto the input number.
#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a number to return it's cube ->");
    scanf("%d", &num);
    printf("%d\n", num * num * num);
    printf("Using pow function", pow((double)num, 3));
    return 0;
}