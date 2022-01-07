// A palindrome number is a number that is same after reverse. For example 121, 34543, 343, 131, 48984 are the palindrome numbers.
#include<stdio.h>  
    int main()
    {
    int n, temp, sum=0,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while (n>0){
        r=n%10; 
        sum=(sum*10)+r;
        n=n/10;
    }
    if (temp==sum){
        printf("%d is a palindrome number.",sum);
    }
    else{
        printf("%d is not a palindrome number.",sum);
    }
    return 0;
}   