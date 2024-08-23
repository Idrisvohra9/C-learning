#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 3
    num = rand() % 3 + 1;

    // Print the generated random number
    printf("%d", num);

    return 0;
}