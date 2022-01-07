#include <stdio.h>
int main(){
    FILE *p=fopen("Gen.txt", "w");
    int n, i;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(i=1; i<=10; i++){
         fprintf(p,"%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}