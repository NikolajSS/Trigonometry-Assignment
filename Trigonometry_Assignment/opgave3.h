#include "Bio.h"


void opgave3()
{
    float A1 = 37, C1=81, a1=50, c1;
    float A2, C2, a2, c2;

    printf("You chose to calculate the last side of an arbitrary triangle.\n\n");
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2

    c1 = (sin(C1)*val)*(a1)/(sin(A1)*val);

    printf("The triangle with\n");
    printf("The side a = 50\n");
    printf("The angle A = 37\n");
    printf("The angle C = 81\n");

    printf("Side c of the triangle: %.2f\n\n", c1);


    printf("A new custom triangle has to be created please\n");


    printf("Enter angle A: \n");
    scanf("%f",&A2);
    printf("Enter angle C: \n");
    scanf("%f",&C2);
    printf("Enter side a: \n");
    scanf("%f",&a2);
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2

    c2 = (sin(C2)*val)*(a2)/(sin(A2)*val);


    if (A2+C2 < 180 && A2 > 0 && C2 > 0 && a2 > 0)
    {
        printf("\nSide c of the triangle is: %.2f\n", c2);
    }
    else {
        printf("\nThe entered value(s) will not construct an actual triangle\n");
        printf("But the side c of the *fake* triangle is: %.2f\n", c2);
    }

    next();
}
