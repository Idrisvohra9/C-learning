#include <stdio.h>
#include <stdlib.h>
int main()
{
    char alpha;
    int n, choice;
    printf(" 1. Number to Alphabet\n 2. Alphabet to Number\n");
    scanf("%d", &choice);
    while (choice == 1)
    {
        printf("\nEnter a num->\n");
        scanf("%d", &n);
        printf("The ascii value for '%d' is %c\n", n, n);
    }
    while (choice == 2)
    {
        printf("\nEnter a Alphabet->\n");
        scanf("%c", &alpha);
        printf("The ascii value for '%c' is %d\n", alpha, alpha);
    }
    return 0;
}