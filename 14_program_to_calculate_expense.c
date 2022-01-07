/*3rd Program.*/
#include <stdio.h>
int main()
{
  float unit, bill, amount;
  int custom_id;
  char name[20];
  printf("Enter the Customer I.d->\n");
  scanf("%i", &custom_id);
  printf("Enter the customer's name->\n");
  scanf("%s",&name);
  printf("Enter the Unit of consumption->\n");
  scanf("%f", &unit);
  if(unit == 199){

    amount=1.20;
	

	}else if(unit >= 200 && unit < 400){

		amount=1.50;

	}else if(unit >= 400 && unit < 600){

		amount=1.80;

	}else if(unit >= 600){

		amount=2;		
  	bill=(unit*amount);}
	if(bill < 100){

		bill = 100 ;	

	}

	if(bill > 400){

		bill = bill + (bill*0.15) ;
	
	}
	
	printf("Your customer Id is: %d\n" , custom_id);
	printf("Your name is->%s\n",name);
	printf("Your unit consumption is: %f\n" , unit);
	printf("Your bill is: %f Rs\n" , bill);
		

	}
