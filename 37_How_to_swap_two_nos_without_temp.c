#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter two numbers to swap their values.\n");
    printf("\nn1:");
    scanf("%d",&n1);
    printf("\nn2:");
    scanf("%d",&n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("\nn1=%d",n1);
    printf("\nn2=%d",n2);
    return 0;
}