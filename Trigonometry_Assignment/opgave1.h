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
    s = (a+b+c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    if (a<0 || b<0 || c<0 || a+b<c || a+c<b || b+c<a)
    {
        printf("The entered value(s) will not construct an actual triangle\n");
        printf("But the area of the *fake* triangle is: %.2f\n", area);
    }
    else {
        printf("The area of the triangle is: %.2f\n", area);
    }
    next();
}
