#include <stdio.h>
int main(){
    int a=0,skip=5;
    while(a<=10)
    {
        a++;
        if (a==8)
        {
            break;
        }//Output will be 1 to 8.
        else
        {
        printf("%d\n",a);
        }
    }
    return 0;
}