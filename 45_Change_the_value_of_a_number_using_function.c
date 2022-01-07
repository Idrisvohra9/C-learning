#include <stdio.h>
int change(int *X);
int main(){
    int x;
    printf("Type a number to manipulate it afterwards:");//1
    scanf("%d",&x);
    change(&x);
    printf("The number is %d",x);//3
    return 0;
}
int change(int *X){
    int *y;
    printf("Manipulate the number to:");//2
    scanf("%d",*(&X));// What i've done here is i gave the address of the value of the variable x in the scanf() therefore the value of x is changed.
}