#include <stdio.h>
int main()
{
    int prev1 = 0, prev2 = 1, sum, i, n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("%d\n%d\n", prev1, prev2);

    for (i = 2; i < n; i++)
    {
        sum = prev1 + prev2;
        printf("%d\n", sum);
        prev1 = prev2;
        prev2 = sum;
    }
    return 0;
}