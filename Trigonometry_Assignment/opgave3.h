#include "Bio.h"


void opgave3()
{
    float A1 = 37, C1=81, a1=50, c1;
    float A2, C2, a2, c2;

    printf("You chose to calculate the area of an arbitrary triangle.\n");
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2
    c1 = (sin(C1)*val)*(a1)/(sin(A1)*val);
    printf("The area of the triangle is: %.2f\n", c1);



    printf("You chose to calculate the area of an arbitrary triangle.\n");
    printf("Enter side A: \n");
    scanf("%f",&A2);
    printf("Enter side C: \n");
    scanf("%f",&C2);
    printf("Enter side a: \n");
    scanf("%f",&a2);
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2
<<<<<<< HEAD
    c2 = sin(C2*180/PI)*(a2)/sin(A2*180/PI);
=======
    c2 = (sin(C2)*val)*(a2)/(sin(A2)*val);
>>>>>>> 11f327172f8623bc8d851bf165d02a8d8004026d
    printf("The area of the triangle is: %.2f\n", c2);
    next();
}
