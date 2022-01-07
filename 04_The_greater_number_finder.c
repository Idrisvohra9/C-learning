/*The greater number returner.*/
#include <stdio.h>
int main()
{
  int no1,no2,no3,x;
  printf("Type the 1st no.->\n");
  scanf("%d",&no1);
  printf("Type the 2nd no.->\n");
  scanf("%d",&no2);
  printf("Type the 3rd no.->\n");
  scanf("%d",&no3);
  if (no1 >= no2 && no1 >= no3)
  {
    x=no1;
  }
  else if(no2>=no1 && no2 >= no3)
  {
    x=no2;
  }
  else if(no3>=no1 && no3>=no2)
  {
    x=no3;
  }
  printf("The greatest number of them is %d\n",x);
}