#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char word[50], temp[50];
    system("cls");
    printf("Enter a word or a sentence: \n");
    fgets(word, 50, stdin);
    temp[50] = word[50];
    word[50] = strrev(word);
    printf("%s", word);
    // fputs(word,stdin);
    if (temp == word)
    {
        printf("%s is a palindrome word.\n", temp);
    }
    return 0;
}