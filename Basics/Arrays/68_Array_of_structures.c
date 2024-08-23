// Just like array of ints, chars, and float we can also create an array of structures.
#include <stdio.h>
#include <string.h>
struct Employee
{
    char name[20];
    float income;
};
int main()
{
    struct Employee youtube[2]; // While making an instance we make array
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the name of employee no%d: \n", i + 1);
        scanf("%s", youtube[i].name);
        printf("Enter the income of employee no%d: \n", i + 1);
        // This will get the name and income of three employees.
        scanf("%f", &youtube[i].income);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n%d The name of employee is : %s", i + 1, youtube[i].name); // and print the same.
        printf("\n%d The income of employee is: %.2f", i + 1, youtube[i].income);
    }
    return 0;
}