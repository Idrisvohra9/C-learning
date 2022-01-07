#include <stdio.h>
int main(){
    int a=0,n;
    printf("Type a number to execute a number line from: \n");
    scanf("%d",&a);
    printf("Type a number to END the number line: ");
    scanf("%d",&n);
    do{
        printf("%d\n",a);
        a++;
    }
    while(a<=n);
    return 0;
}