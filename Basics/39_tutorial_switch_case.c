#include <stdio.h>
int main(){
    char choice ,other ,operator ,condition ,loop ,n ,m ,fact=1 ,num ,tab ,mul;
    while(1){
    printf("Which informations would you like to be displayed ?\n");
    printf("For operators: 'o'\nFor conditions : 'c'\nLoop : 'l'\nExit 'any key'\n");
    scanf("%s",&choice);
    switch (choice)
    {
    case 'o':
        printf("which operator? 'a' : arithmatic, 'l' : logical\n");
        scanf("%s",&other);
        if(other=='a'){
            printf("'+': ADDITION '*' : MULTIPLICATION\n" );
            scanf("%s",&operator);
        if(operator=='+')
            printf("Additition operator is used to perform sum of variables or any constants other than char.\n");
        else if(operator=='*')
            printf("Multiplaction operatoris used to multiply two or more varibales containing constants other than char.\n");
        }
        if(other=='l')
        {
            printf("'o': logical || 'a' logical &&");
            scanf("%s",&operator);
            if(operator=='o')
            {
                printf("The || 'logical OR' operator is used in a condition to check if the variable contains any one of the constants. for example if(a==9)||(a==0) in which if the user inputs any of these integetrs the only one print statetement will be executed.\n");
            }
            if(operator=='a')
            {
                printf("The && 'logical and' operator is used in a condition to check if the variable contains both or all of the given conditions. for example if(a==9&&a==6) one or a set of statements will be executed.\n");
            }
        }
        break;
    case 'c':
        printf("Which condition i: if, l : else if, e : else, n: nested.\n");
        scanf("%s",&condition);
        if (condition=='i')
        {
            printf("if is a condition checker that allows you to make a multi working code in which operations such as arithmatic and logical can take place.\n");
        }
        if(condition=='l')
        {
            printf("else if is a condition checker that allows you to make a multi working code in which operations such as arithmatic and logical can take place. Else if usually goes after the if statement is used once.\n");
        }
        if(condition=='e')
        {
            printf("else is a default condition checker which is usually used after if and else if. In else statement there is no need to type a condition in it because it checks the above conditions after which undertakes below statements.");
        }
        if (condition=='n')
        {
            printf("Nested if else are implemented when there is a need of checking conditions inside other conditions for example when we are making a filter of some sort.");
        }
        break;
    case 'l':
        printf("d: do-while loop, f: factorial, m: multiplication table.\n");
        scanf("%s",&loop);
        if(loop=='d')
        {
            printf("do-while loop is a special type of loop that first executes the statemnts first and then checks if the condition is true or false.\n");
        }
        if(loop=='f')
        {
            printf("Enter a number->");
            scanf("%d",&n);
        for (m=n;m>=1;m--)
        {
           fact= fact*m;
        }
        printf("Factorial of %d = %d",n,fact);
        }
        if(loop=='m')
        {
            printf("Which number? ->");
            scanf("%d",&num);
            printf("Table of the number %d\n\n",num);
            for(tab=1;tab<=10;tab++)
            {
            mul=num*tab;
            printf("%d x %d = %i\n",num,tab,mul);
            }
        }
        break;
    default:
        break;
    }
    }
    return 0;
}