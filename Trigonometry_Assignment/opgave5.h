#include "Bio.h"


void opgave5()
{
    float a, b, c, angelA, angelB, angelC=90;


    printf("You chose to calculate all of the angles of a right-angled triangle.\n");
    printf("Enter side a: \n");
    scanf("%f",&a);
    printf("Enter side b: \n");
    scanf("%f",&b);
    c = sqrt(pow(a,2)+pow(b,2));
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2
    angelA = asin(a/c)*val;
    angelB = asin(b/c)*val;
    printf("\n");

    if (a > 0 && b > 0)
    {
        printf("Angle A of the triangle is: %.2f\n", angelA);
        printf("Angle B of the triangle is: %.2f\n", angelB);
        printf("Angle C of the triangle is: %.2f\n", angelC);
    }
    else {
        printf("The entered value(s) will not construct an actual triangle\n");
        printf("But the angles of the *fake* right-angled triangle are:\n");
        printf("Angle A of the *fake* triangle is: %.2f\n", angelA);
        printf("Angle B of the *fake* triangle is: %.2f\n", angelB);
        printf("Angle C of the *fake* triangle is: %.2f\n", angelC);
    }

    next();
}
