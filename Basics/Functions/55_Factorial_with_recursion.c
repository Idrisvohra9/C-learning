#include <stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    // Factorial functions works like
    // 10! -> factorial(10)
    printf("The factorial of %d is %d.\n", n, factorial(n));
    return 0;
}
// Recursion happens when a function calls itself
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
// 9 8 7 6 5 4 3 2 1