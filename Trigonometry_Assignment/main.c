#include "Prototype.h"

int main()
{
printf("This is a program that does trigonometry.\n");
printf("To calculate the area of an arbitrary triangle, press 1 (opgave 1)");
scanf("&d",&option);

switch (option)
{
    case 1:
        (calculateArea);
}

void calculateArea()
{
    float a, b, c
    printf("You chose to calculate the area of an arbitrary triangle.\n");
    printf("Enter side a: \n");
    scanf("%",&a);
    printf("Enter side b: \n");
    scanf("%f",&b);
    printf("Enter side c: \n");
    scanf("%f",&c);
}
