#include <stdio.h>
int main(int argc, char const *argv[])
{
    double f = 3.14564344224344555;
    printf("%.16lf\n", f);  // prints with 10 decimal places
    printf("%.2lf\n", f);   // prints with 2 decimal places
    printf("%e\n", f);      // prints in scientific notation
    printf("%g\n", f);      // prints in the shortest format
    
    return 0;
}
