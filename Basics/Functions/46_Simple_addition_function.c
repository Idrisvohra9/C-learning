#include <stdio.h>
int sum(int a, int b);//the red variables in the function represents parameters.
int main(){
    int x,n1,n2;
    printf("Number 1:\n");
    scanf("%d",&n1);
    printf("Number 2:\n");
    scanf("%d",&n2);
    x= sum(n1,n2);// the variables and or direct decimal values typed during the function call are called arguments.
    printf("sum=%d",x);
    return 0;
}
int sum(int a, int b){
    int c;
    c= a+b;
    return c;
}