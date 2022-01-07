/*The Even/Odd number finder.*/
#include <stdio.h>
int main()
{
  int num;
  printf("Enter a number->\n");
  scanf("%d",&num);
  if (num%2==0)
  {
    printf("The number entered is a even number\n");
  }
  else
  {
    printf("The number entered is a odd number\n");
  }
}