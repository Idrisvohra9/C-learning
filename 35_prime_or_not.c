#include <stdio.h>
int main(){
    int num,x,flag=0;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    for(x = 2 ; x < num ; x++)
    {
        if(num % x == 0)
        {
            flag=1;
        }
    }
    if(num==1)
    {
        printf("%d is neither prime nor composite.\n",num);
    }
    else
    {
        if(flag==0)
        {
            printf("%d is a prime number.\n",num);
        }
        else{
            printf("%d is a composite number.\n",num);
        }
    }
    return 0;
}