// Input/output functions (printf, scanf, etc.)
#include <stdio.h>

int main()
{

   int *ptr;
   int var = 10;
   ptr = &var;
   printf("Value of ptr as hexadecimal = %p\n", ptr);

   printf("Value of ptr as an integer = %d\n", ptr);
   return 0;
}