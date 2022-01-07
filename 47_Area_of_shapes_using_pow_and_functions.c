//Use math.h, functions and pow().
#include <stdio.h>
#include <math.h>

int aofsqu();
int aocirc();
int aorec();
int aotri();
int main(){
    int choice,s,r,t,c;
    printf("Choose the area of a shape:\n 1. square\n 2. circle\n 3. rectangle\n 4. triangle\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        s=aofsqu();
        break;
        case 2:
        c=aocirc();
        break;
        case 3:
        r=aorec();
        break;
        case 4:
        t=aotri();
        break;
    }
    return 0;
} 
int aofsqu(){
    int x;
    printf("Enter the value of side: ");
    scanf("%d",&x);
    printf("Area of square= %lf", pow(x,2));
}
int aocirc(){
    int r;
    float pi=3.14;
    printf("Enter radius: ");
    scanf("%d",&r);
    printf("Area of circle: %f",pi*pow(r,2));
}
int aorec(){
    float l,b;
    printf("Enter length and breadth: ");
    scanf("%f %f",&l ,&b);
    printf("Area of rectangle: %f",l*b);
}
int aotri(){
    float h,b;
    printf("Enter heighr and base: ");
    scanf("%f %f",&h ,&b);
    printf("Area of triangle: %f",0.5*h*b);

}
