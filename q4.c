#include <stdio.h>
#include <math.h>

int aofsqu(int x);
int aocirc(int r);
int aorec(float l,float b);
int aotri(float h,float b);
int aotrap(float b1, float b2,float h);

int main(){
    int choice;
    int x,r;
    float l,b,h,b1,b2;
    printf("Choose the area of a shape:\n 1. square\n 2. circle\n 3. rectangle\n 4. triangle\n 5. Trapazeium\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter the value of side: ");
        scanf("%d",&x);
        aofsqu(x);
        break;

        case 2:
        printf("Enter radius: ");
        scanf("%d",&r);
        aocirc(r);
        break;

        case 3:
        printf("Enter length and breadth: ");
        scanf("%f %f",&l ,&b);
        aorec(l,b);
        break;

        case 4:
        printf("Enter heighr and base: ");
        scanf("%f %f",&h ,&b);
        aotri(h,b);
        break;

        case 5:
        printf("Enter the value for two bases & height of the trapezium: \n");
        scanf("%f%f%f", &b1, &b2, &h);
        aotrap(b1,b2,h);
        break;
    }
    return 0;
} 
int aofsqu(int x){
    printf("Area of square= %lf", pow(x,2));
}
int aocirc(int r){
    float pi=3.14;
    printf("Area of circle: %f",pi*pow(r,2));
}
int aorec(float l,float b){
    printf("Area of rectangle: %f",l*b);
}
int aotri(float h,float b){
    printf("Area of triangle: %f",0.5*h*b);
}
int aotrap(float b1, float b2,float h)
{
    float area;
    area = 0.5 * (b1 + b2) * h ;
    printf("Area of the trapezium is: %.3f", area);
}