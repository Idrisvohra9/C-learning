//take 20 values using array and print the total these values. 
#include <stdio.h>
int main(){
    int i,values[20],total=0;
    for(i=0;i<=19;i++){
        printf("Enter value no. %d :",i);
        scanf("%d",&values[i]);
    }
    for(i=0;i<=19;i++)
    {
        total=total+values[i];
    }
    printf("%d",total);
    return 0;
}