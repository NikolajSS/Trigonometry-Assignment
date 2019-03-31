#include "Bio.h"


void opgave6()
{
    float c2, b2, C2, B2;




    printf("You chose to calculate the area of an arbitrary triangle.\n");
    printf("Enter side c: \n");
    scanf("%f",&c2);
    printf("Enter side b: \n");
    scanf("%f",&b2);
    printf("Enter side C: \n");
    scanf("%f",&C2);
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2

    B2 = asin((sin(C2*val2)*(b2)/(c2)))*val;
    printf("The area of the triangle is: %.2f\n", B2);
}


