#include "Bio.h"


void opgave4()
{
    float c1=30, b1=14, C1=110, B1;
    float c2, b2, C2, B2;

    printf("You chose to calculate an angel of an arbitrary triangle.\n\n");
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2

    B1 = asin((sin(C1*val2)*(b1)/(c1)))*val;

    printf("The triangle with\n");
    printf("The side c = 30\n");
    printf("The side b = 14\n");
    printf("The angle C = 110\n");

    printf("Angle B of the triangle is: %.2f\n\n", B1);


    printf("A new custom triangle has to be created please\n");

    printf("Enter side c: \n");
    scanf("%f",&c2);
    printf("Enter side b: \n");
    scanf("%f",&b2);
    printf("Enter angle C: \n");
    scanf("%f",&C2);
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2

    B2 = asin((sin(C2*val2)*(b2)/(c2)))*val;


    if (C2 < 180 && C2 > 0 && b2 > 0 && c2 > 0)
    {
        printf("\nAngle B of the triangle is: %.2f\n", B2);
    }
    else {
        printf("\nThe entered value(s) will not construct an actual triangle\n");
        printf("But the angle B of the *fake* triangle is: %.2f\n", B2);
    }
    next();
}

