#include "Bio.h"


void opgave5()
{
    //declare variables
    float a, b, c, angelA, angelB, angelC=90;


    printf("You chose to calculate all of the angles of a right-angled triangle.\nBecause it is a right-angles triangle, angle C is set to be 90 degrees\n");
    printf("Enter side a: \n");
    scanf("%f",&a);
    printf("Enter side b: \n");
    scanf("%f",&b);

    //Pythagoras: c = sqrt(a^2+b^2)
    c = sqrt(pow(a,2)+pow(b,2));
    //i en retvinklet trekant g�lder det at: sin(A)=a/c
    angelA = asin(a/c)*val;
    angelB = asin(b/c)*val;
    printf("\n");

    //Filter out wrong output
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
