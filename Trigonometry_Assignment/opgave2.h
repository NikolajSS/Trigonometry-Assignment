#include "Bio.h"
#define PI 3.14159265358979323846


void opgave2()
{
    float a, b, c, angelC;
    printf("You chose to calculate the area of an arbitrary triangle.\n");
    printf("Enter side a: \n");
    scanf("%f",&a);
    printf("Enter side b: \n");
    scanf("%f",&b);
    printf("Enter side c: \n");
    scanf("%f",&c);
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2
    angelC = acos(((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b)))*180/PI;
    printf("The area of the triangle is: %.2f\n", angelC);
}
