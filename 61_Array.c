// Array is a collection of similarl elements, an Array can store mutiple values of similar data type.
// The nuber of indexing in array always starts with 0 and ends with n-1.
// This program calculates the sum of the marks entered by user.
#include <stdio.h>
int main()
{
    int sum[5], total = 0;
    for (int x = 0; x < 5; x++)
    {
        printf("Enter The marks of sub%d:\n", x + 1);
        scanf("%d", &sum[x]);
        total += sum[x];
    }
    printf("%d is the sum total.\n", total);
    return 0;
}