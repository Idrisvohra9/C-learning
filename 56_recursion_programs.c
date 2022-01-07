#include <stdio.h>
int n_Nat_Num(int n);
int Sum_n_Nat_Num(int n);
int main(){
    int n, choice;
    printf("What do you want to do?\n 1. print n natural numbers\n 2. print sum of n natural numbers");
    scanf("%d", &choice);
    if (choice == 1)
    {
    printf("Enter a number till which the natural numbers will go to: ");
    scanf("%d",&n);
    printf("\n%d",n_Nat_Num(n));
    }
    else
    {
        printf("Enter a number: ");
        scanf("%d",&n);
        printf("\n the sum of %d natural numbers is %d",n,Sum_n_Nat_Num(n));
    }
    return 0;
}
int n_Nat_Num(int n){
    int a=0;
    if (n==0 || n==1) return 1;
    else 
    {
        printf("\n%d ",n);
        return a + n_Nat_Num(n-1); 
    }
}
int Sum_n_Nat_Num(int n){
    if (n==0 || n==1) return 1;
    else return n + Sum_n_Nat_Num(n-1); 
}