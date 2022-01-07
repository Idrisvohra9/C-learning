//take 20 values using array and print the total these values. 
#include <stdio.h>
int main(){
    int i,values[5],total=0;
    for(i=65;i<=70;i++){
        printf("Enter value no. %d :",i);
        scanf("%s",&values[i]);
    }
    for(i=65;i<=70;i++)
    {
        total=total+values[i];
    }
    printf("%d",total);
    return 0;
}