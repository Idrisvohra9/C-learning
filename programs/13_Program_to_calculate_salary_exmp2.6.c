/*Program to calculate salary(example 2.6).*/
#include <stdio.h>
int main()
{
  int yos,qualif,sal;
  char gen;
  printf("Enter the Gender, years of service and qualifications(1=PG, 0=G)->\n");
  scanf("%s %i %i", &gen, &yos, &qualif);
  if ((gen=='m' && yos<10 && qualif==1)||(gen=='m'&& yos>=10 && qualif==0)||(gen=='f' && yos<10 && qualif==1))
    sal=10000;
  else if (gen=='m' && yos>=10 && qualif==1)
    sal=15000;
  else if (gen=='m' && yos<10 && qualif==0)
    sal=7000;
  else if (gen=='f' && yos>=10 && qualif==1)
    sal=12000;
  else if (gen=='f' && yos>=10 && qualif==0)
    sal=9000;
  else if (gen=='f' && yos<10 && qualif==0)
    sal=6000;
  printf("Salary-> %i",sal);
	}
