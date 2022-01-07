#include <stdio.h>
int main(){
    int a,even_odd,table,n;
    char b;
    while(1)
    {
    printf("Enter a task to perform 'a'= even/odd number teller 'b'= table of any number, 'c'= exit-> \n\n");
    scanf("%c",&b);
    //For it to be changed to be working on numeriacal constants The format printer should be changed to %d!! , "a" VARIABLE should be addressed in scanf. switch function should read "a" as the expression and the cases should be changed to numerical constants.
    switch (b)
    {
    case 'a':
        printf("Write a number to see if it is an odd/even->\n");
        scanf("%d",&even_odd);
        if(even_odd%2 == 0)
        {
            printf("The number is even.\n");
        }
        else
        {
            printf("The number is odd.\n");
        }
        break;
    case 'b':
        printf("Table of any number you entered->\n");
        scanf("%d",&table);
        for ( n = 1; n <= 10; n++)
        {
            printf("%d * %d= %d\n",table,n,table*n);
        }   
        break;
        case 'c':
        printf("You exited.\n");
        break;
    }
    }
    return 0;
}