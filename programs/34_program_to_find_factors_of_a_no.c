#include <stdio.h>
int main(){
    int n,factors;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("\nThe factors of %d are",n);
    for(factors = 1 ; factors <= n; ++factors)
    {
        if(n % factors==0)
        {
            printf(" %d",factors);
        }
    }
    return 0;
}