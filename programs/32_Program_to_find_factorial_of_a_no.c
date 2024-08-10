#include <stdio.h>
int main(){
    int n,m,fact=1;
    printf("Enter a number->");
    scanf("%d",&n);
    for (m=n;m>=1;m--)
    {
        fact= fact*m;
    }
    printf("Factorial of %d = %d",n,fact);
    return 0;
}