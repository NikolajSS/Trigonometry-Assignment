#include "Prototype.h"
#include "Opgaverne.h"

int main()
{
int taskNumber;
printf("This is a program that does trigonometry.\n");
printf("To calculate the area of an arbitrary triangle, press 1 (opgave 1)\n");
scanf("%d", &taskNumber);


switch (taskNumber)
{
    case 1:
    opgave1();
    break;
    default:
    printf("You have to input a number between 1 and 7");
}
}



