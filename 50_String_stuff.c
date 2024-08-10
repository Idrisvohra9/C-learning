#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[40];

    // strlen: Returns the length of a string
    printf("Length of str1: %lu\n", strlen(str1));

    // strcpy: Copies one string to another
    strcpy(str3, str1);
    printf("str3 after strcpy: %s\n", str3);

    // strcat: Concatenates (joins) two strings
    strcat(str3, str2);
    printf("str3 after strcat: %s\n", str3);

    // strcmp: Compares two strings
    if (strcmp(str1, str2) == 0)
        printf("str1 and str2 are equal\n");
    else
        printf("str1 and str2 are not equal\n");

    // strchr: Finds the first occurrence of a character in a string
    char *ptr = strchr(str3, 'o');
    if (ptr != NULL)
        printf("First 'o' found at position: %ld\n", ptr - str3);

    // strstr: Finds the first occurrence of a substring in a string
    ptr = strstr(str3, "World");
    if (ptr != NULL)
        printf("'World' found at position: %ld\n", ptr - str3);

    // strtok: Splits a string into tokens
    char str4[] = "This,is,a,test";
    char *token = strtok(str4, ",");
    while (token != NULL)
    {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }

    return 0;
}