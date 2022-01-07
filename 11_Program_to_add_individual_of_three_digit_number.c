//program for adding individual of 3 digit number.
#include <stdio.h>

int main() {
    int num,sum;
    printf("Enter a three digit number-> ");
    scanf("%d",&num);
    sum=num/100+num/10%10+num%10;
    printf("Sum of those digits= %i\n",sum);
    
    return 0;
}