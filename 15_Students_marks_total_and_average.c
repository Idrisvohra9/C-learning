//students marks calculation and average.
#include <stdio.h>

int main() {
    float science, english, maths, total, average;
    int roll_no;
    printf("Enter your roll no->\n");
    scanf("%i",&roll_no);
    printf("Marks of Science=\n");
    scanf("%f",&science);
    printf("Marks of English\n");
    scanf("%f",&english);
    printf("Marks of Maths\n");
    scanf("%f",&maths);
    total=science+english+maths;
    average=total/3;
    printf("Total=%f\n",total);
    printf("Average=%f\n",average);
    return 0;
}