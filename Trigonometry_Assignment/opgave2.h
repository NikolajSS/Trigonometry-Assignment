#include "Bio.h"


void opgave2()
{
    float a, b, c, angelA, angelB, angelC;
    printf("You chose to calculate the 3 angles of an arbitrary triangle.\n");
    printf("Enter side a: \n");
    scanf("%f",&a);
    printf("Enter side b: \n");
    scanf("%f",&b);
    printf("Enter side c: \n");
    scanf("%f",&c);
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2
    angelA = acos(((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c)))*val;
    angelB = acos(((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c)))*val;
    angelC = acos(((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b)))*val;
    printf("Angle A of the triangle is: %.2f\n", angelA);
    printf("Angle B of the triangle is: %.2f\n", angelB);
    printf("Angle C of the triangle is: %.2f\n", angelC);
    next();
}
