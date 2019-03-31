#include "Bio.h"


void opgave6()
{
    float vinkel1, vinkel2, rvinkel3, side, rside1, rside2;

    printf("You chose to calculate the area of an arbitrary triangle.\n");
    printf("Enter side c: \n");
    scanf("%f",&vinkel1);
    printf("Enter side b: \n");
    scanf("%f",&vinkel2);
    printf("Enter side C: \n");
    scanf("%f",&side);
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2

    rvinkel3 = 180-vinkel1-vinkel2;

    rside1 = sin(rvinkel3*180/PI)*(vinkel1)/sin(side*180/PI);
    rside2 = asin((sin(C2*val2)*(b2)/(c2)))*val;
    printf("The area of the triangle is: %.2f\n", B2);
}


