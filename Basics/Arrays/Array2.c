#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int arrOfNums[] = {10, 20, 30, 35, 50, 50, 70, 80, 90, 100};
    // It's size
    printf("The size of the array is (in terms of bytes): %d\n", sizeof(arrOfNums));
    // It returns 40 and not 10 (as the size of the array is 10) because the sizeof operator returns the size of a type in bytes. To get the size of the array we have to divide the size of the array by the size of the type it stores.
    printf("The size of the array is (in terms of elements in it): %d\n", sizeof(arrOfNums) / sizeof(arrOfNums[0]));
    // Loop through the array:
    printf("Looping through the array with a fixed sized condition:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arrOfNums[i]);
    }
    printf("Looping through the array with dynamic sized condition using sizeof operator:\n");
    int length = sizeof(arrOfNums) / sizeof(arrOfNums[0]);
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", arrOfNums[i]);
    }
    return 0;
}
