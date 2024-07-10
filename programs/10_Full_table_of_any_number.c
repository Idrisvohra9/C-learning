/*Full table of any number.*/
#include <stdio.h>
int main()
{
  int tab, num, mul;
  printf("Which number? ->");
  scanf("%d", &num);
  printf("Table of the number %d\n\n", num);
  for (tab = 1; tab <= 10; tab++)
  {
    mul = num * tab;
    printf("%d x %d = %i\n", num, tab, mul);
  }
  return 0;
}
