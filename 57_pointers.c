// pointer is a variable that stores an address of another variable.
// (&) is an address of operator.
// "%u" is a format specifier to print Pointer (an address) of a variable.
#include <stdio.h>
int main(){
    int n=72,*p,v;// to make a variable store an address of another variable "*" asteric symbol is put before them in variable declaration.
    p = &n;// Here p points to the address of the variable n.
    v = *(&n); // and v gets the value from the address of the variable n, therefore we can say that v is a value pointer.
    /*Note that a value pointing integer should not be declared with an "*" asteric symbol therefore in this case v doesn't have asteric before it. because it stores the value and not the address.*/
    printf("The address of the variable n= %u\n",p);
    printf("The value from the address of the variable n= %u\n",v);
    printf("%d",*(&p));// output: 6422296-> value of the variable p that stores the address of the variable n.
    return 0;
// Such as we have used the int data type to point to an integer. the same goes for char, float and other data type declaration.
}