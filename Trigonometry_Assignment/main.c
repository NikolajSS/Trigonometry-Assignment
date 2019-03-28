#include "Prototype.h"
#include "Opgaverne.h"
#include "opgave1.c"
#include "opgave2.c"

int main()
{
int taskNumber;
printf("This is a program that does trigonometry.\n");
printf("To calculate the area of an arbitrary triangle, press 1 (opgave 1)");
scanf("&d",&taskNumber);

switch (taskNumber)
{
    case 1:
    calculateArea();
    break;
    default:
        printf("You have to input a number between 1 and 7");
}
}
void calculateArea()
{
    float a, b, c, s, area;
    printf("You chose to calculate the area of an arbitrary triangle.\n");
    printf("Enter side a: \n");
    scanf("%",&a);
    printf("Enter side b: \n");
    scanf("%f",&b);
    printf("Enter side c: \n");
    scanf("%f",&c);
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is: %f", area);
}
