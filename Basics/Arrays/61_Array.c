// Array is a collection of similarly elements, an Array can store mutiple values of similar data type.
// The number of indexing in array always starts with 0 and ends with n-1.
// This program calculates the sum of the marks entered by user.
#include <stdio.h>

int main()
{
    int sum[5], total = 0;
    int a[6] = {1, 2, 43, 23};
    // printf("%d\n", a[3]);
    for (int x = 0; x < 5; x++)
    {
        printf("Enter The marks of subject %d:\n", x + 1);
        scanf("%d", &sum[x]);
        // total += sum[x];
    }
    for (int x = 0; x < 5; x++){
        printf("%d, ", sum[x]);
    }
    printf("\n%d is the sum total.\n", total);
    return 0;
}