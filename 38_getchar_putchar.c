#include <stdio.h>
int main(){
    char c;
    printf("Enter a character:\n");
    c=getchar();//getchar() works as scanf just for char 
    printf("the character you entered is ");
    c=putchar(c);//putchar() works as printf for char
    return 0;
}