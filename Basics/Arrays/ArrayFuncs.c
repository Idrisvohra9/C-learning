#include <stdio.h>
int sumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int minElement(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int maxElement(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
void printArray(int arr[], int size)
{
    printf("{ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(" }");

    printf("\n");
}
void reversedArray(int arr[], int size)
{
    int start = 0, end = size - 1, temp;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
// This is not a bubble sort method. This is a selection sort algorithm.
// Bubble sort would compare adjacent elements and swap them if they are in the wrong order,
// moving through the array multiple times until no more swaps are needed.
// This algorithm, on the other hand, finds the smallest element and places it at the beginning,
// then finds the next smallest for the second position, and so on.

void sortAscending(int arr[], int size)
{
    // Selection sort algorithm
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = i + 1; j < size; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    // Bubble sort algorithm
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return;
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The length of the array is %d\n", size);
    printf("The sum of the array is %d\n", sumOfArray(arr, size));
    printf("The minimum element of the array is %d\n", minElement(arr, size));
    printf("The maximum element of the array is %d\n", maxElement(arr, size));
    reversedArray(arr, size);
    printf("The reversed array is : ");
    printArray(arr, size);
    printf("The sorted array in ascending order is : ");
    sortAscending(arr, size);
    printArray(arr, size);
    return 0;
}
