// To print an address to a variable that is already (a pointer) storing the address of another variable this concept is called pointer to pointer.
#include <stdio.h>
int main(){
    int n=72,*p,**q;
    // As we know that by placing "*" asterick symbol before the variable name in the variable declaration, the variable becomes a pointer. similarly if we put double astericks before the variable name the variable can point to a pointer. the number of astericks can signify the number of sequence of pointers that means that the variable could possibly have 'n' numbers of astericks.
    p=&n;
    q=&p;
    printf("p points to n = %u\n",p); // &n= 6422296
    printf("q points to p = %u\n",q); // &p= 6422292
    return 0;
}