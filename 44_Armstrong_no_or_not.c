// Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
#include <stdio.h>
int main(){
    int n,r,sum=0,temp;
    printf("Enter a number to see if it is an Armstrong number or not.\n:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("%d is an Armstrong number.",sum);
    }
    else 
    printf("%d is not an Armstrong number",sum);
}