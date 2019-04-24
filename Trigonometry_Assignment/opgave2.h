#include "Bio.h"


void opgave2()
{
    //declare variables
    float a, b, c, angelA, angelB, angelC;
    printf("You chose to calculate the 3 angles of an arbitrary triangle.\n");
    printf("Enter side a: \n");
    scanf("%f",&a);
    printf("Enter side b: \n");
    scanf("%f",&b);
    printf("Enter side c: \n");
    scanf("%f",&c);

    // Cosine-relation: A = acos((b^2+c^2-a^2)/2*b*c). Calculates the angles
    angelA = acos(((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c)))*val;
    angelB = acos(((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c)))*val;
    angelC = acos(((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b)))*val;

    //Filter out wrong input
    if (c < a+b && a < c+b && b < a+c)
    {
        printf("Angle A of the triangle is: %.2f\n", angelA);
        printf("Angle B of the triangle is: %.2f\n", angelB);
        printf("Angle C of the triangle is: %.2f\n", angelC);
    }
    else {
        printf("The entered value(s) will not construct an actual triangle\n");
        printf("But the angles of the *fake* triangle are:\n");
        printf("Angle A of the triangle is: %.2f\n", angelA);
        printf("Angle B of the triangle is: %.2f\n", angelB);
        printf("Angle C of the triangle is: %.2f\n", angelC);
    }
    next();
}
