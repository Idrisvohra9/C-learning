#include <stdio.h>
int main()
{
   int sum=0;
   for(int i = 0; i<=10; i++){
	sum = sum+i;
	if(i==9){
	   goto addition;
	}
   }

   addition:
   printf("%d", sum);

   return 0;
}