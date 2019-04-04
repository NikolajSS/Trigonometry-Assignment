#include "Bio.h"


void opgave1()
{
    float a, b, c, s, area;
    printf("You chose to calculate the area of an arbitrary triangle.\n");
    printf("Enter side a: \n");
    scanf("%f",&a);
    printf("Enter side b: \n");
    scanf("%f",&b);
    printf("Enter side c: \n");
    scanf("%f",&c);
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    if (c < a+b && a < c+b && b < a+c)
    {
        printf("The area of the triangle is: %f\n", area);
    }
    else {
        printf("Your sides don't construct an actual triangle\n");
        printf("But the area of the *fake* triangle is: %f\n", area);
    }
    next();
}


