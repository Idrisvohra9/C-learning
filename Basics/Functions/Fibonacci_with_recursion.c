// Include standard input/output library
#include <stdio.h>
// Include standard library for memory allocation
#include <stdlib.h>

// Function to calculate the nth Fibonacci number
int fibonacci(int n)
{
    // Base case: if n is 0 or 1, return n
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        // Recursive case: sum of previous two Fibonacci numbers
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to generate Fibonacci series up to n terms
int *fibonacci_series(int n)
{
    // Allocate memory for the series
    int *series = (int *)malloc(n * sizeof(int));
    // Check if memory allocation was successful
    if (series == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }

    // Generate the Fibonacci series
    for (int i = 0; i < n; i++)
    {
        series[i] = fibonacci(i);
    }

    // Return the generated series
    return series;
}

// Recursive function to print an array
void printArray(int arr[], int size)
{
    // Base case: if size is 0, return (end of recursion)
    if (size == 0)
        return;
    // Print the first element of the array
    printf("%d ", arr[0]);
    // Recursively call printArray with the rest of the array
    printArray(arr + 1, size - 1);
}

// Main function
int main(int argc, char const *argv[])
{
    int n;
    // Prompt user to enter a number
    printf("Enter a number: ");
    // Read the number from user input
    scanf("%d", &n);
    // Print the nth Fibonacci number
    printf("The %dth fibonacci number is %d\n", n, fibonacci(n));
    // Print the Fibonacci series
    printf("The fibonacci series is: ");
    printArray(fibonacci_series(n), n);
    // Return 0 to indicate successful program execution
    return 0;
}
