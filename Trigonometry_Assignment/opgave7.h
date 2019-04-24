#include "Bio.h"

void opgave7(){

printf("You chose to calculate the angles and the area of an equilateral triangle\n");
printf("Enter side: \n");
//declare variables
float side, s, area;
//get input from user
scanf("%f", &side);

//Heron's formula
s = (side+side+side)/2.0;
area = sqrt(s*(s-side)*(s-side)*(s-side));

//Filter out wrong input
if (side>0)
    {
        printf("The area is: %.2f\nAll of the angles are: 60 degrees",area); //All the angles of an equilateral triangle will always be 60 degrees, as the equilateral triangle is defined as such    }
    }
else {
    printf("Wrong input, your triangle is imaginary. Here are the values anyway.\nThe *fake* area is: %.2f\nAll of the *fake* angles are: 60 degrees",area);
}
next();
}
