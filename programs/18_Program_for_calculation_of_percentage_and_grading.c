#include <stdio.h>

int main()
/*program for calculation of percentage and grading.*/
{
    float phy,chem,bio,maths,comp,percent;
    printf("Marks of PHYSICS, CHEMISTRY, BIOLOGY, MATHEMATICS and COMPUTER -> \n");
    scanf("%f %f %f %f %f",&phy,&chem,&bio,&maths,&comp);
    
    percent=(phy+chem+bio+maths+comp)/5;
    printf("Percentage=%f\n",percent);
    if (percent>=90)
    {
        printf("Grade A\n");
    }
    else if (percent>=80)
    {
        printf("Grade B\n");
    }
    else if (percent>=70)
    {
        printf("Grade C\n");
    }
    else if (percent>=60)
    {
        printf("Grade D\n");
    }
    else if (percent>=40)
    {
        printf("Grade E\n");
    }
    else if (percent<40)
    {
        printf("Grade F\n");
    }
}