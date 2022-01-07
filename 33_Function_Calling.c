#include <stdio.h>
void add();
void sub();
void mul();
void div();
int main(){
while(1){
    int choice;
    printf("\nNow enter the function to be called 1 : addition 2 :substraction 3 :multiply '4':divide->");
    scanf("%d",choice);
    if (choice==1)
    {add();}
    else if (choice==2)
    {sub();}
    else if (choice==3)
    {mul();}
    else if (choice==4)
    {div();}
    return 0;
}
}
void add()
{
    int a,b,sum,su,mu,di;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("\nThe Output = %d",sum);
}
void sub()
{
    int a,b,sum,su,mu,di;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a,&b);
    su=a-b;
    printf("\nThe Output = %d",su);
}
void mul()
{
    int a,b,sum,su,mu,di;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a,&b);
    mu=a*b;
    printf("\nThe Output = %d",mu);
}
void div()
{
    int a,b,sum,su,mu,di;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a,&b);
    di=a/b;
    printf("\nThe Output = %d",di);
}