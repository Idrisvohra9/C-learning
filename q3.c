#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30], s2[30];
    int choice, vowels, consonants, alphabets, digits, special_chars, i;
    alphabets = digits = special_chars = i = vowels = consonants = 0;
    puts("Enter string 1: ");
    gets(s1);
    puts("Enter string 2: ");
    gets(s2);
    printf("\nWhat do you wish to do?\n 1: Find length of both strings\n 2: Copy one string to another\n 3: Concatenate two strings\n 4: Find total number of alphabets, digits or special characters in a string\n 5: Count the number of vowels and consonants in a string\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf(" The length of the first string is: %d\n The length of the second string is: %d", strlen(s1), strlen(s2));
    }
    if (choice == 2)
    {
        printf("The string two is '%s'", strcpy(s1, s2));
    }
    if (choice == 3)
    {
        printf("The concatenated string is '%s'", strcat(s1, s2));
    }
    if (choice == 4)
    {
        while (s1[i] != '\0')
        {
            if ((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z'))
            {
                alphabets++;
            }
            else if (s1[i] >= '0' && s1[i] <= '9')
            {
                digits++;
            }
            else
            {
                special_chars++;
            }

            i++;
        }
        printf("Number of Alphabets in the string 1 is : %d\n", alphabets);
        printf("Number of Digits in the string 1 is : %d\n", digits);
        printf("Number of Special characters in the string 1 is : %d\n\n", special_chars);
        printf("\n");
        alphabets = digits = special_chars = i = 0;
        while (s2[i] != '\0')
        {
            if ((s2[i] >= 'a' && s2[i] <= 'z') || (s2[i] >= 'A' && s2[i] <= 'Z'))
            {
                alphabets++;
            }
            else if (s2[i] >= '0' && s2[i] <= '9')
            {
                digits++;
            }
            else
            {
                special_chars++;
            }

            i++;
        }
        printf("Number of Alphabets in the string 2 is : %d\n", alphabets);
        printf("Number of Digits in the string 2 is : %d\n", digits);
        printf("Number of Special characters in the string 2 is : %d\n\n", special_chars);
    }
    if (choice == 5)
    {
        for (i = 0; i < strlen(s1); i++)
        {
            if ((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z'))
            {
                if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' ||
                    s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U')
                    vowels++;
                else
                    consonants++;
            }
        }

        printf("Total number of vowel in string 1 : %d\n", vowels);
        printf("Total number of consonant in string 1 : %d\n", consonants);
        printf("\n");
        i = vowels = consonants = 0;
        if (choice == 5)
        {
            for (i = 0; i < strlen(s2); i++)
            {
                if ((s2[i] >= 'a' && s2[i] <= 'z') || (s2[i] >= 'A' && s2[i] <= 'Z'))
                {
                    if (s2[i] == 'a' || s2[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' ||
                        s2[i] == 'A' || s2[i] == 'E' || s2[i] == 'I' || s2[i] == 'O' || s2[i] == 'U')
                        vowels++;
                    else
                        consonants++;
                }
            }

            printf("Total number of vowel in string 2 : %d\n", vowels);
            printf("Total number of consonant in string 2 : %d\n", consonants);
        }
        return 0;
    }
}