//program for calculation of profit/loss.
#include <stdio.h>

int main() 
{
    float sp,cp,profit,loss;
    printf("Write the cost price->\n ");
    scanf("%f",&cp);
    printf("Write the selling price->\n ");
    scanf("%f",&sp);
    profit=sp-cp;
    loss=cp-sp;
    if (sp>cp)
    {
        printf("Profit of rs.%f\n",profit);
    }
    if (sp==cp)
    {
        printf("No profit no loss...");
    }
    if (sp<cp)
    {
        printf("Loss of rs.%f\n",loss);
    }
    return 0;
}