#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter number 1,2,3,4->\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a>b && a>c && a>d)
    printf("%d is the greatest of them all.",a);//1
    else if (b>a && b>c && b>d)
    printf("%d is the greatest of them all.",b);//2
    else if (c>b && c>a && c>d)
    printf("%d is the greatest of them all.",c);//3
    else if (d>b && d>c && d>a)
    printf("%d is the greatest of them all.",d);//4
    return 0;

}