#include "Bio.h"


void opgave6()
{
    float vinkel1, vinkel2, rvinkel3, side, rside1, rside2, test;

    printf("You chose to calculate the two missing sides and one missing angle of an arbitrary triangle.\n");
    printf("Enter angel: \n");
    scanf("%f",&vinkel1);
    printf("Enter angel: \n");
    scanf("%f",&vinkel2);
    printf("Enter side: \n");
    scanf("%f",&side);
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2


    rvinkel3= 180-vinkel1-vinkel2;
    rside1 = sin(vinkel2*val2)*((side)/(sin(vinkel1*val2)));
   // rside2 = asin((sin(C2*val2)*(b2)/(c2)))*val;
    rside2 = sin(rvinkel3*val2)*((rside1)/(sin(vinkel2*val2)));

    if (rside2 < side+rside1 && side < rside2+rside1 && rside1 < side+rside2 && vinkel1+vinkel2 < 180)
    {
        printf("One of the sides of the triangle is: %.2f\n", rside1);
        printf("The other side of the triangle is: %.2f\n", rside2);
        printf("The angle of the triangle is: %.2f\n", rvinkel3);
    }
    else {
        printf("The entered value(s) will not construct an actual triangle\n");
        printf("But one of the sides of the *fake* triangle is: %.2f\n", rside1);
        printf("The other side of the *fake* triangle is: %.2f\n", rside2);
        printf("The angle of the *fake* triangle is: %.2f\n", rvinkel3);
    }

    next();
}


