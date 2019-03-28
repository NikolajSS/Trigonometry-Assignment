#include "Bio.h"

void opgave4()
{
    float c1=30, b1=14, C1=110, B1;
    float c2, b2, C2, B2;

    printf("You chose to calculate the area of an arbitrary triangle.\n");
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2
    B1 = (sin(C1)*180/PI/(c1))*sin(B1)*180/PI;
    printf("The area of the triangle is: %.2f\n", B1);



    printf("You chose to calculate the area of an arbitrary triangle.\n");
    printf("Enter side a: \n");
    scanf("%f",&c2);
    printf("Enter side b: \n");
    scanf("%f",&b2);
    printf("Enter side c: \n");
    scanf("%f",&C2);
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2
    B2 = asin((b2*(sin(C2)*180/PI))/(c2))*180/PI;
    printf("The area of the triangle is: %.2f\n", B2);
}

