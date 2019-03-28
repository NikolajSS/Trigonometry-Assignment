#include "Prototype.h"

void calculateArea()
{
    float a, b, c, s, area;
    printf("You chose to calculate the area of an arbitrary triangle.\n");
    printf("Enter side a: \n");
    scanf("%",&a);
    printf("Enter side b: \n");
    scanf("%f",&b);
    printf("Enter side c: \n");
    scanf("%f",&c);
    // Herons formel: s = (a+b+c)/2
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is: %f", area);
}
