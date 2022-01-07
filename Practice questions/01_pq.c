//C program to print the cube of the numbers upto the input number. 
#include <stdio.h>
int main(){
    int num,n=0;
    printf("Enter the number till which the cubing will go->");
    scanf("%d",&num);
    while (n<num)
    {
        n++;
        printf("%d\n",n*n*n);
    }
    
    return 0;
}