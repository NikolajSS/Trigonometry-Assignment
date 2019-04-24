#include "Bio.h"


void opgave6()
{

    //declare variables
    float vinkel1, vinkel2, rvinkel3, side, rside1, rside2;

    printf("You chose to calculate the two missing sides and one missing angle of an arbitrary triangle.\n");
    printf("Enter angel: \n");
    scanf("%f",&vinkel1);
    printf("Enter angel: \n");
    scanf("%f",&vinkel2);
    printf("Enter side: \n");
    scanf("%f",&side);


    //angle A = 180 - Angle B - Angle C
    rvinkel3= 180-vinkel1-vinkel2;

    //sinusrelation: a = sin(A)*(b/sin(B)
    rside1 = sin(vinkel2*val2)*((side)/(sin(vinkel1*val2)));
    rside2 = sin(rvinkel3*val2)*((rside1)/(sin(vinkel2*val2)));

    //Filter out wrong input
    if (rside2 < side+rside1 && side < rside2+rside1 && rside1 < side+rside2 && vinkel1+vinkel2 < 180)
    {
        printf("One of the unknown sides of the triangle is: %.2f\n", rside1);
        printf("The other unknown side of the triangle is: %.2f\n", rside2);
        printf("The unknown angle of the triangle is: %.2f\n", rvinkel3);
    }
    else {
        printf("The entered value(s) will not construct an actual triangle\n");
        printf("But one of the unknown sides of the *fake* triangle is: %.2f\n", rside1);
        printf("The other unknown side of the *fake* triangle is: %.2f\n", rside2);
        printf("The unknown angle of the *fake* triangle is: %.2f\n", rvinkel3);
    }

    next();
}


