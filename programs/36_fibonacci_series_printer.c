#include <stdio.h>
int main(){
    int n1=0,n2=1,sum,i,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("%d\n%d\n",n1,n2);
    
    for(i=2;i<n;i++){
        sum=n1+n2;
        printf("%d\n",sum);
        n1=n2;
        n2=sum;
    }
    return 0;
}