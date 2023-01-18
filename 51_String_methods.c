#include <stdio.h>
#include <string.h>
// while working with strings in c there are few things to keep in mind.
// 1. While declaring the data type of a string variable the number of index character space should always be more than the amount of characters in the string it is holding or is going to be holding because of the way the string array works. otherwise an error or an illegal character will be returned along with the string we want.
// 2. While using scanf on strings '%s' is the data type to scan and The '&' (Adress) is not to be mentioned and directly the variable itself should be mentioned. because if we use the address it will automatically address to the first spelling or string and ignore the spelling after the space. 
int main(){
    char a[50],b[50];
    int intcon,choice;
    // while(1)
    // {
    println("Enter Your choice of string operation:\n 1. Check string length\n 2. Compare two strings\n 3. Copy string to another variable\n 4. reverse the input string\n 5. Join two strings\n 6. Uppercase The text entered\n 7. Lowercase the text entered\n");
    scanf("%d",&choice);
    switch(choice){
        case 1://1st strlen() is the string inbuilt function that returns the number of characters in the string
        printf("Enter text to see its length: \n");
        // scanf("%s",a);
        fgets(a,sizeof(a),stdin);
        printf("The length of characters in the string is: \n",strlen(a));
        break;
        case 2://2nd strcmp() is the string inbuilt function that compares two strings according to its ASCII values and tells if the values of both the strings are equal or one is greater than or less than the other one. 
        printf(" If comparison output == 0 both the strings are equal.\n If comparison output == 1 ASCII value of the first string is more than the second.\n If comparison output == -1 ASCII value of the second string is more than the first.\n");
        printf ("Enter string 1: \n");
        scanf("%s", a);
        printf ("Enter string 2: \n");
        scanf("%s",b);
        printf("Comparison output == %d",strcmp(a,b));
        break;
        case 3://3rd strcpy() is the string inbuilt function that copies source string into destination string. The length of the destination string >= source string.
        printf ("Enter text in variable 'a': \n");
        scanf("%s", a);
        printf("It is copied to the destination string: \n");
        strcpy(b,a);// the destination string is written before the source string***
        printf("\nThe Variable b= %s",b);
        // puts(b);
        break;
        case 4:// 4th strrev() is the string inbuilt function that reverses the given string.
        printf ("Enter The string to reverse: \n");
        scanf("%s", a);
        printf("Reverse: %s",strrev(a));
        break;
        case 5:// 5th strcat() is the string inbuilt function that concatenates or joints the given strings.
        printf ("Enter the string no1. to concatenate: \n");
        scanf("%s", a);
        printf("Enter the string no2. to concatenate: \n");
        scanf("%s",b);
        printf("The concatenated string: %s\n",strcat(a,b));
        break;
        case 6:// 6th strupr() is the string inbuilt function that Transforms the given string into upper case.
        printf ("Enter the string to make it upper case: \n");
        scanf("%s",a);
        printf("Upper-cased: %s",strupr(a));
        break;
        case 7:// 7th strlwr() is the string inbuilt function that Transforms the given string into lower case.
        printf ("Enter the string to make it lower case: \n");
        // scanf("%s",a);
        fgets(a,sizeof(a),stdin);
        printf("Lower-cased: %s");
        puts(strlwr(a));
        break;
    }
    return 0;
}